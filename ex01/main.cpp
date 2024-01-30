#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap david("David");
	ClapTrap goliath("Goliath");
	ScavTrap sin("Sin");

	david.attack("Goliath");
	sin.attack("Goliath");
	sin.takeDamage(10);
	// sin.beRepaired(10);
	sin.guardGate();

	ScavTrap cos("Cos");
	cos = sin;
	cos.takeDamage(20);
	return 0;
}
