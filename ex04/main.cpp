/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 20:25:19 by dmusulas          #+#    #+#             */
/*   Updated: 2025/06/30 19:45:35 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sad_sed.hpp"
#include "test.hpp"

int main(int argc, char **argv) {
    if (argc == 2 && argv[1] == std::string("test")) {
        generateTestFile("test.txt");
        if (!readFile("test.txt", "test", "example")) {
            return (EXIT_FAILURE);
        }
        return (EXIT_SUCCESS);
    }

    if (!validateInput(argc, argv)) {
        return (EXIT_FAILURE);
    }

    std::string filename = argv[1];
    std::string searchString = argv[2];
    std::string replaceString = argv[3];

    if (!readFile(filename, searchString, replaceString)) {
        return (EXIT_FAILURE);
    }
    return 0;
}
