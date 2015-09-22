#include <stdio.h>
#include <ctype.h>
#include <iostream>

int charClass;
char lexeme [100];
char nextChar;
int lexLen;
int token;
int nextToken;
FILE *in_fp, *fopen();


void addChar();
void getChar();
void getNonBlank();
int lex();

void term();
void expr();
void factor();

#define LETTER 0
#define DIGIT 1
#define FLOAT 2

#define UNKNOWN 99
#define INVALID 100
#define ERROR 50
#define INT_LIT 10
#define IDENT 12
#define FLOAT_LIT 13
#define ASSIGN_OP 20
#define ADD_OP 21
#define SUB_OP 22
#define MULT_OP 23
#define DIV_OP 24
#define LEFT_PAREN 25
#define RIGHT_PAREN 26


using namespace std;
main() {
/* Open the input data file and process its contents */
	if ((in_fp = fopen("front.in", "r")) == NULL)
 		printf("ERROR - cannot open front.in \n");
 	else {
 		getChar();
 		do {
 			lex();
 			expr();
 		} while (nextToken != EOF);
 	}
}

/* lookup - a function to lookup operators and parentheses
 and return the token */
int lookup(char ch) {
	switch (ch) {
 		case '(':
 			addChar();
 			nextToken = LEFT_PAREN;
			break;
 		case ')':
 			addChar();
 			nextToken = RIGHT_PAREN;
 			break;
 		case '+':
			addChar();
 			nextToken = ADD_OP;
 			break;
 		case '-':
 			addChar();
 			nextToken = SUB_OP;
 			break;
 		case '*':
 			addChar();
 			nextToken = MULT_OP;
 			break;
		case '/':
			addChar();
			nextToken = DIV_OP;
			break;
 		default:
			addChar();
			nextToken = EOF;
			break;
		}
	return nextToken;
}

/* addChar - a function to add nextChar to lexeme */
void addChar() {
	if (lexLen <= 98) {
		lexeme[lexLen++] = nextChar;
		lexeme[lexLen] = 0;
	}
	else
 		printf("Error - lexeme is too long \n");
}

/* getChar - a function to get the next character of
 input and determine its character class */
void getChar() {
	int prevCharClass;
	if ((nextChar = getc(in_fp)) != EOF) {
		if (isalpha(nextChar))
			charClass = LETTER;
		else if (isdigit(nextChar)){
			charClass = DIGIT;}


		else if(nextChar == '.')
			charClass = FLOAT;
		else
			charClass = UNKNOWN;
	}
 	else
 		charClass = EOF;
}

void getNonBlank() {
	while (isspace(nextChar))
		getChar();
}
/* lex - a simple lexical analyzer for arithmetic
 expressions */
int lex() {
	lexLen = 0;
	getNonBlank();
	switch (charClass) {
		/* Parse identifiers */
 		case LETTER:
			addChar();
			getChar();
			while (charClass == LETTER || charClass == DIGIT) {
				addChar();
				getChar();

			}
 			nextToken = IDENT;
 			break;
/* Parse integer literals */
 		case DIGIT:
			addChar();
			getChar();
			//nextToken = INT_LIT;
			while (charClass == DIGIT || charClass ==  FLOAT || charClass == LETTER) {
 				addChar();
 				getChar();
 				if (charClass == FLOAT){
 					nextToken = FLOAT_LIT;
 				}

 				if(charClass == LETTER){
                    nextToken = ERROR;
                }
 			}
			break;
/* Parentheses and operators */
		case UNKNOWN:
 			lookup(nextChar);
 			getChar();
 			break;
/* EOF */


 		case EOF:
			nextToken = EOF;
 			lexeme[0] = 'E';
 			lexeme[1] = 'O';
 			lexeme[2] = 'F';
			lexeme[3] = 0;
 			break;
 	} /* End of switch */

    if(nextToken == ERROR)
        cout<<"lex invalido "<<lexeme<<endl;
	printf("Next token is: %d, Next lexeme is %s\n",
		nextToken, lexeme);
	return nextToken;
}

/*
factor parses string in the languaje generate by the rule:
<factor> ->id | int_constant | ( <expre>)
*/

void factor()
{
    printf("Enter <factor>\n");
    /* Determine which RHS */
    if (nextToken == IDENT || nextToken == INT_LIT || nextToken == FLOAT_LIT || nextToken == ERROR)
    /* Get the next token */
    lex();
    /* If the RHS is ( <expr>), call lex to pass over the
    left parenthesis, call expr, and check for the right
    parenthesis */
    else {
        if (nextToken == LEFT_PAREN) {
            lex();
            expr();
        if (nextToken == RIGHT_PAREN)
            lex();
        else
            cout<<"error"<<endl;
        } /* End of if (nextToken == ... */
    /* It was not an id, an integer literal, or a left
    parenthesis */
        else
            cout<<"error"<<endl;
    } /* End of else */
    printf("Exit <factor>\n");;
}
 /* End of function factor */


/* term
Parses strings in the language generated by the rule:
<term> -> <factor> {(* | /) <factor>)
*/
void term()
{
    printf("Enter <term>\n");
    /* Parse the first factor */
    factor();
    /* As long as the next token is * or /, get the
    next token and parse the next factor */
    while (nextToken == MULT_OP || nextToken == DIV_OP)
    {
        lex();
        factor();
    }
    printf("Exit <term>\n");
} /* End of function term */


void expr()
{
    printf("Enter <expr>\n");
    // Parse the first term
    term();
    /* As long as the next token is + or -, get
    the next token and parse the next term */
    while (nextToken == ADD_OP || nextToken == SUB_OP)
    {
        lex();
        term();
    }
    printf("Exit <expr>\n");
} /* End of function expr */

