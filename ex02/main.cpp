#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap david("David");
	ClapTrap goliath("Goliath");
	// ScavTrap sin("Sin");
	FragTrap cos("Cos");

	cos.attack("Goliath");
	cos.takeDamage(10);
	cos.beRepaired(10);
	cos.highFivesGuys();

	return 0;
}
