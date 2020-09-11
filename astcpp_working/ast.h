#include<iostream>
class BinaryASTnode;
class TernaryASTnode;
class IntLitASTnode;

class ASTnode {
     public :
     virtual ~ASTnode()
     {
     }


};

class BinaryASTnode : public ASTnode {
     std::string bin_operator;  

// lhs and rhs can be of any type. 
// So we need to use BaseAST
     ASTnode  *lhs;
     ASTnode *rhs;  

     public:

// Constructor to initialize binary operator, 
// lhs and rhs of the binary expression.
     BinaryASTnode (std::string op, ASTnode* _lhs, ASTnode* _rhs ) :
     bin_operator(op), lhs(_lhs), rhs(_rhs) {}  

  

};

class TernaryASTnode : public ASTnode {

     ASTnode  *first;
     ASTnode *second;
     ASTnode *third;  

     public:

     TernaryASTnode (ASTnode *first, ASTnode *second, ASTnode *third ) :
     first(first), second(second), third(third) {}  

};

class IntLitASTnode: public ASTnode {

	int intlit;

	public:

	IntLitASTnode(int intlit): 
	intlit(intlit){}

};

class ASTContext {
public:
    ASTnode *root;

    ~ASTContext()
    {
	    clearAST();
    }

    /// free all saved expression trees
    void	clearAST()
    {
        delete root;
    }
};
