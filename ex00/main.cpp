#include <iostream>
#include "ClapTrap.hpp"

int main()
{
	ClapTrap david("David");
	ClapTrap goliath("Goliath");

	david.attack("Goliath");
	goliath.takeDamage(2);
	goliath.beRepaired(5);
	goliath.beRepaired(5);
	goliath.beRepaired(5);
	goliath.beRepaired(5);
	goliath.beRepaired(5);
	goliath.beRepaired(5);
	goliath.beRepaired(5);
	goliath.beRepaired(5);
	goliath.beRepaired(5);
	goliath.beRepaired(5);
	goliath.beRepaired(5);


	goliath.attack("David");
	david.takeDamage(5);

	goliath.attack("David");
	david.takeDamage(5);

	goliath.attack("David");
	david.takeDamage(5);
	david.attack("Goliath");
	david.beRepaired(2);

	ClapTrap david2("David2");
	david2 = david;
	david2.beRepaired(1);

	return 0;
}
