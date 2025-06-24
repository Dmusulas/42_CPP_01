/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 13:56:25 by dmusulas          #+#    #+#             */
/*   Updated: 2025/06/24 14:21:01 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>
class Harl {
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    // Default constructor
    Harl();
    ~Harl();

    void complain(const std::string &level);
};

#endif
