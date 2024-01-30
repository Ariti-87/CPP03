#ifndef DEF_DIAMONDTRAP
#define DEF_DIAMONDTRAP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap,FragTrap
{
	public:

	DiamondTrap();
	DiamondTrap(std::string myName);
	~DiamondTrap();
	DiamondTrap(DiamondTrap const& toCopy);
	void whoAmI();
	DiamondTrap &operator=(DiamondTrap const& toCopy);

	private:

	std::string _name;
};


#endif
