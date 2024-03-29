#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>
#include <cstdlib>

class Brain
{
	public:
	Brain();
	virtual ~Brain();
	Brain(const Brain& copy);
	Brain& operator=(const Brain& ref);
	void setIdeas(int i, std::string temp);
	std::string getIdeas(int i) const;
	void showIdeas(void) const;
	void initIdeas(void);

	protected:
	std::string ideas[100];
};

#endif
