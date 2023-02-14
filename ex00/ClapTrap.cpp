/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 04:34:36 by tkong             #+#    #+#             */
/*   Updated: 2023/02/14 05:44:14 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name(), hitPoint(10), energyPoint(10), attDamage(0) {}
ClapTrap::ClapTrap(const ClapTrap& rhs) :
	name(rhs.name),
	hitPoint(rhs.hitPoint),
	energyPoint(rhs.energyPoint),
	attDamage(rhs.attDamage) {}
ClapTrap::ClapTrap(const std::string& name) :
	name(name),
	hitPoint(10),
	energyPoint(10),
	attDamage(0) {}
ClapTrap::~ClapTrap() {}
ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
	if (this == &rhs) {
		return *this;
	}
	this->name = rhs.name;
	this->hitPoint = rhs.hitPoint;
	this->energyPoint = rhs.energyPoint;
	this->attDamage = rhs.attDamage;
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	std::cout << "ClapTrap " << this->name << " attacks " << target
		<< ", causing " << this->attDamage << " points of damage!\n";
	this->energyPoint--;
}
void ClapTrap::takeDamage(unsigned int amount) {
	this->hitPoint -= amount;
}
void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energyPoint > 0) {
		std::cout << "ClapTrap " << this->name << " repair " << '\n';
		this->hitPoint += amount;
		this->energyPoint--;
	} else {

	}
}
