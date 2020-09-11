// $Id$

#include <iostream>
#include <fstream>

#include "driver.h"
// #include "ast.h"  
// ast.h included in PostFixVisitor.h
#include "PostFixVisitor.h"

int main(int argc, char *argv[])
{
    ASTContext ast;
    decaf::Driver driver(ast);
    PostFixVisitor pfv;
    
    std::string line;
    while( std::cout << "input: " &&
	   std::getline(std::cin, line) &&
	   !line.empty() )
    {
	    
	    bool result = driver.parse_string(line, "input");

	    if (result)
    	{
            if (ast.root != NULL ) {
                std::cout<<"Successfully Parsed!"<<std::endl;
                /*Code*/
            }
            ast.clearAST();
	    }
	}
}

