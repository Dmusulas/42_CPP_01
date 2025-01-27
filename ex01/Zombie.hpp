/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:43:11 by dmusulas          #+#    #+#             */
/*   Updated: 2025/01/27 16:42:01 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#define HORDE_SIZE 20

#include <string>

class Zombie {
private:
    std::string name;

public:
    Zombie() {};
    Zombie(std::string name);
    ~Zombie();
    void setName(std::string name);
    void announce();
};

Zombie *zombieHorde(int N, std::string name);

#endif
