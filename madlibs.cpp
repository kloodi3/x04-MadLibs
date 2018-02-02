//Authors: 
#include <iostream>
#include <string>

int main()
{
std::string name;
char grade;
double GPA;
std::string car;

std::cout<<"Enter a name"<< std::endl;
std::cin>>name;
std::cout<<"Enter a grade"<< std::endl;
std::cin>>grade;
std::cout<<"Enter a GPA"<< std::endl;
std::cin>>GPA;
std::cout<<"Enter a car"<< std::endl;
std::cin>>car;

std::cout<<"One day, "<<name<<" had a final exam at 9:00 AM. "<<name<<" studied very hard for the exam, he stayed all the night studying for the final exam. Unfortunately "<<name<<" woke up late. So he did not arrive to exam on time, the instructor did not allow him to enter the exam. He tried with him and he speaked to the supervisor , but all of that was worthless. Therefore, "<<name<<" got "<<grade<<" and his GPA become "<< GPA <<". "<<name<<" did an accident with his "<<car<< ". "<<name<<" hurted his body so badly and broke his leg." <<std::endl;
  return 0;
}
