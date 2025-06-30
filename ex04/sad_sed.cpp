/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sad_sed.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 13:12:06 by dmusulas          #+#    #+#             */
/*   Updated: 2025/06/24 13:13:18 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sad_sed.hpp"

bool validateInput(int argc, char **argv) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0]
                  << " <filename> <search string> <replace string>"
                  << std::endl;
        return false;
    }
    if (std::string(argv[1]).empty()) {
        std::cerr << "<filename> cannot be empty" << std::endl;
        return false;
    }

    if (std::string(argv[2]).empty()) {
        std::cerr << "<search string> cannot be empty" << std::endl;
        return false;
    }

    return true;
}

bool replaceInLine(std::string &line, const std::string &searchString,
                   const std::string &replaceString) {
    std::string result;
    size_t pos = 0;
    size_t lastPos = 0;
    bool found = false;

    while ((pos = line.find(searchString, lastPos)) != std::string::npos) {
        result += line.substr(lastPos, pos - lastPos);
        result += replaceString;
        lastPos = pos + searchString.length();
        found = true;
    }

    result += line.substr(lastPos);
    line = result;
    return found;
}

bool readFile(const std::string &filename, const std::string &searchString,
              const std::string &replaceString) {
    std::string line;
    std::string ofilename = filename + ".replace";
    std::ifstream ifile(filename.c_str());
    std::ofstream ofile(ofilename.c_str());

    if (!ifile.is_open()) {
        std::cerr << "Error opening file: " << filename << " - "
                  << std::strerror(errno) << std::endl;
        return false;
    }
    if (!ofile.is_open()) {
        std::cerr << "Error writing to file " << ofilename << " - "
                  << std::strerror(errno) << std::endl;
        return false;
    }

    while (getline(ifile, line)) {
        replaceInLine(line, searchString, replaceString);
        ofile << line << std::endl;
    }
    ifile.close();
    ofile.close();

    return true;
}
