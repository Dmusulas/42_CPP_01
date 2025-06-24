/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sad_sed.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 13:12:16 by dmusulas          #+#    #+#             */
/*   Updated: 2025/06/24 13:13:11 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAD_SED_H
#define SAD_SED_H

#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <string>

bool validateInput(int argc, char **argv);
bool replaceInLine(std::string &line, const std::string &searchString,
                   const std::string &replaceString);
bool readFile(const std::string &filename, const std::string &searchString,
              const std::string &replaceString);

#endif
