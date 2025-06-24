/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 14:04:08 by dmusulas          #+#    #+#             */
/*   Updated: 2025/06/24 14:15:11 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::complain(const std::string &level) {
    static void (Harl::*funcs[4])(void) = {&Harl::debug, &Harl::info,
                                           &Harl::warning, &Harl::error};
    static std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; ++i) {
        if (levels[i] == level) {
            (this->*funcs[i])();
            return;
        }
    }
    std::cerr << "Unknown level: " << level << std::endl;
}

void Harl::debug(void) {
    std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese"
                 "-triple-pickle-special-ketchup burger. I really do!"
              << std::endl;
}

void Harl::info(void) {
    std::cout
        << "[INFO] I cannot believe adding extra bacon costs more money."
           " You didn’t put enough bacon in my burger! If you did, I wouldn’t"
           " be asking for more!"
        << std::endl;
}

void Harl::warning(void) {
    std::cout
        << "[WARNING] I think I deserve to have some extra bacon for free."
           " I’ve been coming for years whereas you started working here since"
           " last month."
        << std::endl;
}

void Harl::error(void) {
    std::cout << "[ERROR] This is unacceptable! I want to speak to the manager"
                 " now."
              << std::endl;
}
