//
// Created by endoc on 02.07.2024.
//

enum class token_type{
    IDENTIFIER,


    INTEGER_CONST,
    DOUBLE_CONST,
    STRING_CONST,
    CHAR_CONST,

    // boolean constant
    TRUE,
    FALSE,




    CONST,


    // types
    UNDEFINED,

    INT,
    DOUBLE,
    BOOL,
    CHAR,
    VOID,
    AUTO,

    // cycles
    DO_WHILE,
    WHILE,
    FOR,
    // cycles addition
    BREAK,
    CONTINUE,


    SWITCH,
    CASE,
    DEFAULT,


    // conditions
    IF,
    ELSE,


    // relationship operators
    LESS, // <
    GREATER, // >
    LESS_EQUAL, // <=
    GREATER_EQUAL, // >=


    // equal operators
    EQUAL, // ==
    NOT_EQUAL, // !=


    // logical operators
    AND, // &&
    OR, // ||
    EXCLAMATION, // !

    // math operators
    PLUS, // +
    MINUS, // -
    STAR, // *
    SLASH, // /
    INC, // ++
    DEC, // --


    // brackets
    LBRA, // {
    RBRA, // }
    LPAR, // (
    RPAR, // )
    LSQR, // [
    RSQR, // ]


    // assign
    ASSIGN, // =
    ADD_ASSIGN, // +=
    SUB_ASSIGN, // -=
    MUL_ASSIGN, // *=
    DIV_ASSIGN, // /=


    // function
    FUNCTION,
    RETURN,




    // other symbols
    SEMICOLON, // ;
    COLON, // :
    COMMA, // ,
    POINT, // .
    QUESTION, // ?
    AMPERSAND, // &

    // comment
    LINE_COMMENT, // //
    BLOCK_COMMENT_START, // /*
    BLOCK_COMMENT_END, // */


    NEW,
    DELETE,


    PREPROCESSOR_DIRECTIVE,


    ACCESS_OPERATOR, // ::
};