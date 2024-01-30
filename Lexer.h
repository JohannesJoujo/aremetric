//
// Created by Johannes Joujo on 2024-01-30.
//

#ifndef AREMETRIC_LEXER_H
#define AREMETRIC_LEXER_H
#include <iostream>
using token=int;
class Lexer {


public:
    enum {
        DIGIT=1,
        ADD_OP,
        MULTI,
        END
    };
    token lex();
    Lexer ()=delete;
    Lexer(std::string program);
    std::string lexeme();

private:
    std::string input;
    std::string current_lexeme;
    size_t index=0;
    bool is_whitespace(char c);

    char add_char();
};


#endif //AREMETRIC_LEXER_H
