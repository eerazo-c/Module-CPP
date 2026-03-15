
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : name("Bureaucrat"), signGrade(150), excuGrade(150) {
	this->signal = false;
	std::cout << "RobotomyRequestForm" << this->name << " created" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){

}

RobotomyRequestForm::RobotomyRequestForm(std::string _name, int _signGrade, int _excuGrade) : name(_name), signGrade(_signGrade), excuGrade(_excuGrade)
{
	if (_signGrade < 0)
		throw GradeTooLowException();
	if (_signGrade > 150)
		throw GradeTooHighException();
	//this->signGrade = _signGrade;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : name("Bureaucrat"), signGrade(42), excuGrade(42)  
{
	*this = obj;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	if (this != &obj)
		this->signal = obj.getSignGrade();
	return (*this);
}

std::string RobotomyRequestForm::getName() const
{
	return (this->name);
}

int RobotomyRequestForm::getSignGrade() const 
{ 
	return signGrade; 
}

int RobotomyRequestForm::getExcuGrade() const 
{ 
	return excuGrade;
}

bool	RobotomyRequestForm::beSigned(Bureaucrat &obj)
{
	if (!this->signal && obj.getGrade() <= this->signGrade)
	{
		this->signal = true;
		return (true);
	}
	else
		throw RobotomyRequestForm::GradeTooLowException();
	return (false);
}

std::ostream &operator<<(std::ostream &out, const RobotomyRequestForm &obj)
{
    out << "RobotomyRequestForm: " << obj.getName()
        << "\nSign Grade: " << obj.getSignGrade()
        << "\nExcu Grade: " << obj.getExcuGrade() << "\n";
    return out;
}
