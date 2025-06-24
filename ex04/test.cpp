/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 13:08:41 by dmusulas          #+#    #+#             */
/*   Updated: 2025/06/24 13:23:32 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

bool generateTestFile(const std::string &filename) {
    std::ofstream ofile(filename.c_str());
    if (!ofile.is_open()) {
        std::cerr << "Error creating testfile"
                  << " - " << std::strerror(errno) << std::endl;
        return false;
    }
    ofile << "This is a test file.\n"
          << "It contains some text to be replaced.\n"
          << "The word 'test' will be replaced with 'example'.\n"
          << "This is the end of the test file." << std::endl;
    ofile.close();
    return true;
}
