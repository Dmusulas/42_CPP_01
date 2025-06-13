/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:52:48 by dmusulas          #+#    #+#             */
/*   Updated: 2025/06/13 20:00:28 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie *heapZombie = newZombie("Bob");
    heapZombie->announce();
    randomChump("Jossie");
    randomChump("Rose");
    heapZombie->announce();

    delete heapZombie;

    return 0;
}
