/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:52:48 by dmusulas          #+#    #+#             */
/*   Updated: 2025/01/27 16:44:52 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie *horde = zombieHorde(HORDE_SIZE, "Jessie");

    for (int i = 0; i < HORDE_SIZE; i++) {
        horde[i].announce();
    }

    delete[] horde;

    return 0;
}
