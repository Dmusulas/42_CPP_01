/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 12:24:57 by dmusulas          #+#    #+#             */
/*   Updated: 2025/06/24 14:23:40 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl harl;

    std::cout << "Testing Harl's complaint system:\n" << std::endl;

    std::cout << "=== Valid Levels ===" << std::endl;
    harl.complain("DEBUG");
    std::cout << std::endl;

    harl.complain("INFO");
    std::cout << std::endl;

    harl.complain("WARNING");
    std::cout << std::endl;

    harl.complain("ERROR");
    std::cout << std::endl;

    std::cout << "=== Invalid Levels ===" << std::endl;
    harl.complain("UNKNOWN");
    harl.complain("debug");
    harl.complain("Info");
    harl.complain("");
    harl.complain("CRITICAL");

    return 0;
}
