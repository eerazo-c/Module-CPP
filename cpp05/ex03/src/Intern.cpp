

#include "Intern.hpp"

Intern::Intern() {

}

Intern::~Intern() {

}
Intern::Intern(const Intern &obj) {
	*this = obj;
}

Intern &Intern::operator=(const Intern &obj)
{
	(void)obj;
	return (*this);
}
AForm *Intern::makeForm(std::string nameForm, std::string targetForm)
{
	f_form _form[] = {&Intern::makeScf, &Intern::makeRrf, &Intern::makePpf};
	std::string forms[] = {"Shrubbery Creation Form", "Robotomy Request Form", "Presidential Pardon Form"};
	AForm *form;
	int i = 0;
	while (i < 3 && forms[i].compare(nameForm))
		i++;
	if (i < 3)
	{
		form = (this->*_form[i])(targetForm);
		return (form);
	}
	return (NULL);
}

AForm *Intern::makeScf(std::string &targetForm) const
{
	AForm *form = new ShrubberyCreationForm(targetForm);
	return (form);
}

AForm *Intern::makeRrf(std::string &targetForm) const
{
	AForm *form = new RobotomyRequestForm(targetForm);
	return (form);
}

AForm *Intern::makePpf(std::string &targetForm) const
{
	AForm *form = new PresidentialPardonForm(targetForm);
	return (form);
}
