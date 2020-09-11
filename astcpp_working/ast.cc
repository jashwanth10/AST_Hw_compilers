// $Id$

#include <iostream>
#include <fstream>

#include "driver.h"
#include "ast.h"

int main(int argc, char *argv[])
{
    ASTContext ast;
    decaf::Driver driver(ast);
    
    std::string line;
    while( std::cout << "input: " &&
	   std::getline(std::cin, line) &&
	   !line.empty() )
    {
	    
	    bool result = driver.parse_string(line, "input");

	    if (result)
    	{
            std::cout<<"Successfully Parsed!"<<std::endl;
            if (ast.root != NULL ) {
                 /*Code*/
            }
            ast.clearAST();
	    }
	}
}

