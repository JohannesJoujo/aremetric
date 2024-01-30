#include <iostream>
#include "Lexer.h"
#include "expr.h"
int main(int argc, char*argv[]) {

    /**
     * vi ska kunna förklara shift reduce
     */
    std::cout<<argc<<'\n';
    //std::cout<<argv[0]<<'\n';
    if(argc<2){
        std::cerr<<"No program given\n";
        return EXIT_FAILURE;
    }
    std::string program=argv[1];
    Lexer lex(program);
    if(lex.lex()==Lexer::DIGIT){
        std::cout<<"tjooh";
        std::cout<<"";
    }
    if(lex.lex()==Lexer::ADD_OP){
        std::cout<<"tjooh";
        std::cout<<"";
    }

    expr* parse_expr(Lexer &l ){
        auto term = parse_term(l);
        expr* result=nullptr;
        if(term){
            result=new expr(term);
        }
        auto l.lex();
        if(token==Lexer::ADD_OP){
            parse_expr(l);
            result->add(expr);
        }
    }
    term* parse_term(Lexer &lexer){
        auto fac=parse_factor(lexer);
        auto multi=lexer.lex();
        if(multi==lexer::MULTI){
            auto child =parse_term()
        }
    }
    factor* parse_factor(Lexer &lexer){
        factor* result=nullptr;
        if(lexer.lex==lexer::DIGIT){

        }
    }
    return 0;
}
