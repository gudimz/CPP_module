#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Shrubbery Creation Form", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation Form", 145, 137) {
	this->_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& object) : Form(object) {
	this->_target = object.getTarget();
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& object) {
	this->Form::operator=(object);
	this->_target = object.getTarget();
	return *this;
}

std::string const& ShrubberyCreationForm::getTarget(void) const {
	return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
	if (this->getGradeExec() < executor.getGrade()) {
		throw GradeTooLowException();
	}
	if (getSign() == false) {
		throw NotSignedException();
	}
	std::ofstream outfile(_target + "_shrubbery");

	outfile << "****************************************************" << std::endl;
	outfile << "*              _{\\ _{\\{\\//}/}/}__				   *" << std::endl;
	outfile << "*             {/{/\\}{/{/\\}(\\}{/\\}_				   *" << std::endl;
	outfile << "*            {/{/\\}{/{/\\}(_)\\}{/{/\\}_			   *" << std::endl;
	outfile << "*         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\}/\\}			   *" << std::endl;
	outfile << "*        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}			   *" << std::endl;
	outfile << "*       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}			   *" << std::endl;
	outfile << "*      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}		   *" << std::endl;
	outfile << "*      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}		   *" << std::endl;
	outfile << "*     {/{/{\{\\(/}{/{\{\\{\\/})/}{\\(_)/}/}\\}			   *" << std::endl;
	outfile << "*      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}		   *" << std::endl;
	outfile << "*       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)		   *" << std::endl;
	outfile << "*      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}		   *" << std::endl;
	outfile << "*       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}		   *" << std::endl;
	outfile << "*         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}		   *" << std::endl;
	outfile << "*          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)		   *" << std::endl;
	outfile << "*            {/{/{\\{\\/}{/{\\{\\{\\(_)/}			   *" << std::endl;
	outfile << "*             {/{\\{\\{\\/}/}{\\{\\/}/}				   *" << std::endl;
	outfile << "*              {){/ {\\/}{\\/} \\}\\}				   *" << std::endl;
	outfile << "*              (_)  \\.-'.-/						   *" << std::endl;
	outfile << "*          __...--- |'-.-'| --...__				   *" << std::endl;
	outfile << "*   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__		   *" << std::endl;
	outfile << "* -\"    ' .  . '    |.'-._| '  . .  '	   \"-...__ *" << std::endl;
	outfile << "* .  '-  '    .--'  | '-.'|    .  '  . '		   *" << std::endl;
	outfile << "*          ' ..     |'-_.-|						   *" << std::endl;
	outfile << "*  .  '  .       _.-|-._ -|-._  .  '  .			   *" << std::endl;
	outfile << "*              .'   |'- .-|   '.				   *" << std::endl;
	outfile << "*  ..-'   ' .  '.   `-._.-�   .'  '  - .		   *" << std::endl;
	outfile << "*   .-' '        '-._______.-'     '  .			   *" << std::endl;
	outfile << "*        .      ~,								   *" << std::endl;
	outfile << "*    .       .   ..   .    ' '-.				   *" << std::endl;
	outfile << "****************************************************" << std::endl;

	outfile.close();
}