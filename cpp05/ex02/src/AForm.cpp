
#include "AForm.hpp"

AForm::AForm() : name("Bureaucrat"), signGrade(150), excuGrade(150) {
	this->signal = false;
	std::cout << "AForm" << this->name << " created" << std::endl;
}

AForm::~AForm(){

}

AForm::AForm(std::string _name, int _signGrade, int _excuGrade) : name(_name), signGrade(_signGrade), excuGrade(_excuGrade)
{
	if (_signGrade < 0)
		throw GradeTooLowException();
	if (_signGrade > 150)
		throw GradeTooHighException();
	//this->signGrade = _signGrade;
}

AForm::AForm(const AForm &obj) : name("Bureaucrat"), signGrade(42), excuGrade(42)  
{
	*this = obj;
}

AForm &AForm::operator=(const AForm &obj)
{
	if (this != &obj)
		this->signal = obj.getSignGrade();
	return (*this);
}

std::string AForm::getName() const
{
	return (this->name);
}

int AForm::getSignGrade() const 
{ 
	return signGrade; 
}

int AForm::getExcuGrade() const 
{ 
	return excuGrade;
}

bool	AForm::beSigned(Bureaucrat &obj)
{
	if (!this->signal && obj.getGrade() <= this->signGrade)
	{
		this->signal = true;
		return (true);
	}
	else
		throw AForm::GradeTooLowException();
	return (false);
}

std::ostream &operator<<(std::ostream &out, const AForm &obj)
{
    out << "AForm: " << obj.getName()
        << "\nSign Grade: " << obj.getSignGrade()
        << "\nExcu Grade: " << obj.getExcuGrade() << "\n";
    return out;
}
