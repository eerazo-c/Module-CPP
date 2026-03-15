
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : name("Bureaucrat"), signGrade(150), excuGrade(150) {
	this->signal = false;
	std::cout << "ShrubberyCreationForm" << this->name << " created" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _name, int _signGrade, int _excuGrade) : name(_name), signGrade(_signGrade), excuGrade(_excuGrade)
{
	if (_signGrade < 0)
		throw GradeTooLowException();
	if (_signGrade > 150)
		throw GradeTooHighException();
	//this->signGrade = _signGrade;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : name("Bureaucrat"), signGrade(42), excuGrade(42)  
{
	*this = obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	if (this != &obj)
		this->signal = obj.getSignGrade();
	return (*this);
}

std::string ShrubberyCreationForm::getName() const
{
	return (this->name);
}

int ShrubberyCreationForm::getSignGrade() const 
{ 
	return signGrade; 
}

int ShrubberyCreationForm::getExcuGrade() const 
{ 
	return excuGrade;
}

bool	ShrubberyCreationForm::beSigned(Bureaucrat &obj)
{
	if (!this->signal && obj.getGrade() <= this->signGrade)
	{
		this->signal = true;
		return (true);
	}
	else
		throw ShrubberyCreationForm::GradeTooLowException();
	return (false);
}

std::ostream &operator<<(std::ostream &out, const ShrubberyCreationForm &obj)
{
    out << "ShrubberyCreationForm: " << obj.getName()
        << "\nSign Grade: " << obj.getSignGrade()
        << "\nExcu Grade: " << obj.getExcuGrade() << "\n";
    return out;
}
