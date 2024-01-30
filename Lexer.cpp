//
// Created by Johannes Joujo on 2024-01-30.
//

#include "Lexer.h"

Lexer::Lexer(std::string program):input(program) {


}

token Lexer::lex() {
    current_lexeme=="";
    token result;
    auto c=add_char();
    while(isdigit(c)){
        current_lexeme+=c;
        result=DIGIT;
        add_char();
    }
    switch (c) {
        case '+':
        current_lexeme=c;
            return ADD_OP;
            break;
        case '*':
            current_lexeme=c;
            return MULTI;
            break;
    }
    return result;
}

char Lexer::add_char() {
    return input[index++];
}

bool Lexer::is_whitespace(char c) {
    return std::isspace(c);
}
