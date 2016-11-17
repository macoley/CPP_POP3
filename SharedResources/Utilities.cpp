#include "Utilities.h"


std::vector<std::string> Utilities::tokenizer(std::string line)
{
	std::vector<std::string> tokens;

	std::stringstream stream(line);
	std::string buff;
	while (stream >> buff)
	{
		tokens.push_back(buff);
	}

	return tokens;
}