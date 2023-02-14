/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 22:19:56 by tkong             #+#    #+#             */
/*   Updated: 2023/02/15 01:09:34 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :
	ClapTrap(),
	ScavTrap(),
	FragTrap(),
	name()
{
	std::cout << "DiamondTrap Default constructor called\n";
}
DiamondTrap::DiamondTrap(const DiamondTrap& rhs) :
	ClapTrap(*dynamic_cast<const ClapTrap *>(&rhs)),
	ScavTrap(*dynamic_cast<const ScavTrap *>(&rhs)),
	FragTrap(*dynamic_cast<const FragTrap *>(&rhs)),
	name()
{
	std::cout << "DiamondTrap Copy constructor called\n";
}
DiamondTrap::DiamondTrap(const std::string& name) :
	ClapTrap(name + "_clap_name"),
	ScavTrap(name),
	FragTrap(name),
	name(name)
{
	std::cout << "DiamondTrap Name constructor called\n";
}
DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor called\n";
}
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs) {
	std::cout << "DiamondTrap Copy operator called\n";
	if (this == &rhs) {
		return *this;
	}
	*dynamic_cast<ScavTrap *>(this)
		= *dynamic_cast<const ScavTrap *>(&rhs);
	*dynamic_cast<FragTrap *>(this)
		= *dynamic_cast<const FragTrap *>(&rhs);
	this->name = rhs.name;
	return *this;
}

void DiamondTrap::whoAmI() const {
	std::cout << "name: " << this->name
		<< ", ClapTrap::name: " << ClapTrap::name << '\n';
}
