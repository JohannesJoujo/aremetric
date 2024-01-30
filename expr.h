//
// Created by Johannes Joujo on 2024-01-30.
//

#ifndef AREMETRIC_EXPR_H
#define AREMETRIC_EXPR_H


#include "Lexer.h"

struct op{
    virtual int eval();
    void add(op* child){
        children.push_back(child);
    }
    std::vector<op*> children;

};
struct factor:op{

};

struct term{
    expr(term*child);
    add(child);
};
struct term:op{
     term(factor* fac){
         add(fac);
     }
};
struct expr {
    expr* parse_expr(Lexer &l );
    expr(term*pTerm);

};
int eval() override{
auto result =
}



#endif //AREMETRIC_EXPR_H
