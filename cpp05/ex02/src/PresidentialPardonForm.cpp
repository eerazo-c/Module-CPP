
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), Target(default_target) {
}

PresidentialPardonForm::~PresidentialPardonForm(){

}

PresidentialPardonForm::PresidentialPardonForm(std::string _name, int _signGrade, int _excuGrade) : name(_name), signGrade(_signGrade), excuGrade(_excuGrade)
{
	if (_signGrade < 0)
		throw GradeTooLowException();
	if (_signGrade > 150)
		throw GradeTooHighException();
	//this->signGrade = _signGrade;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : name("Bureaucrat"), signGrade(42), excuGrade(42)  
{
	*this = obj;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	if (this != &obj)
		this->signal = obj.getSignGrade();
	return (*this);
}

std::string PresidentialPardonForm::getName() const
{
	return (this->name);
}

int PresidentialPardonForm::getSignGrade() const 
{ 
	return signGrade; 
}

int PresidentialPardonForm::getExcuGrade() const 
{ 
	return excuGrade;
}

bool	PresidentialPardonForm::beSigned(Bureaucrat &obj)
{
	if (!this->signal && obj.getGrade() <= this->signGrade)
	{
		this->signal = true;
		return (true);
	}
	else
		throw PresidentialPardonForm::GradeTooLowException();
	return (false);
}

std::ostream &operator<<(std::ostream &out, const PresidentialPardonForm &obj)
{
    out << "PresidentialPardonForm: " << obj.getName()
        << "\nSign Grade: " << obj.getSignGrade()
        << "\nExcu Grade: " << obj.getExcuGrade() << "\n";
    return out;
}
