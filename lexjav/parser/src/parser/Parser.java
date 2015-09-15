/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package parser;

/**
 *
 * @author Nico
 */

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.File;

enum CharClass{
    LETTER,
    DIGIT,
    FLO_DIGIT,
    UNKNOW,
    INVALID,
    EOF;
};

enum TokenCode{
    INT_LIT, FLOAT_LIT, IDENT,
    ASSIGN_OP, ADD_OP, SUB_OP, MULT_OP, DIV_OP,
    LETF_PAREN, RIGHT_PAREN, EOF, INVALID;
};



public class Parser {

    /**
     * @param args the command line arguments
     */
    BufferedReader file;
    public StringBuilder cade;
    
    public Parser(BufferedReader fil){
        this.file = fil;
        this.cade = new StringBuilder();
    }
    char caracter;
    private TokenCode nexT;
    private CharClass Car;
    char next_caracter;
    int caracter_extraido;
    
    void getChar() {
        
        
        try {
            caracter_extraido = file.read();
        } catch (Exception e) {
            Car = CharClass.EOF;
          //  System.out.println("basura");
            System.out.println(e.getMessage());
            return;
        }
       
        next_caracter = (char) caracter_extraido;
     //   System.out.print(next_caracter);
        if (caracter_extraido == -1) {
            Car = CharClass.EOF;
            return;
        }
        if (Character.isAlphabetic(next_caracter))
            Car = CharClass.LETTER;
        else if (Character.isDigit(next_caracter))
            Car = CharClass.DIGIT;
        else if (next_caracter == '.')
            Car = CharClass.FLO_DIGIT;
        else
            Car = CharClass.UNKNOW;
    }
    
    void getNonBlank() {
        while (Character.isWhitespace(next_caracter))
            getChar();
    }
    
    void lex() {
        cade = new StringBuilder();
        getNonBlank();
        switch(Car){
            case LETTER:
                addChar();
                getChar();
                while(Car == CharClass.LETTER || Car == CharClass.DIGIT){
                    addChar();
                    getChar();
                    
                }
                nexT = TokenCode.IDENT;
                break;
            
            case DIGIT:
                addChar();
		getChar();
		nexT = TokenCode.INT_LIT;
		while (Car == CharClass.DIGIT || Car ==  CharClass.FLO_DIGIT) {
                    addChar();
 		    getChar();
                    if(Car == CharClass.LETTER){
                        nexT = TokenCode.INVALID;
                        System.out.println("error");
 		    }
 		    if (Car == CharClass.FLO_DIGIT){
 			nexT = TokenCode.FLOAT_LIT;
 			
 	            }
                }

                break;
/* Parentheses and operators */
		case UNKNOW:
 			lookup();
 			getChar();
 			break;
                    
                case EOF:
                    nexT = TokenCode.EOF;
                    cade.append("EOF");
                    
        }
        String new_cade = cade.toString();
        System.out.printf("Next token is: " + nexT + ", Next lexeme is " + cade + "\n");
        
   }


    public void front_c(){
        getChar();
        do {
            lex();
        } while (nexT != TokenCode.EOF);
    }
    
    void addChar() {
        cade.append(next_caracter);
    }
    
    
    void lookup() {
        switch (caracter) {
            case '(':
                addChar();
                nexT = TokenCode.LETF_PAREN;
                break;
            case ')':
                addChar();
                nexT = TokenCode.RIGHT_PAREN;
                break;
            case '+':
                addChar();
                nexT = TokenCode.ADD_OP;
                break;
            case '-':
                addChar();
                nexT = TokenCode.SUB_OP;
                break;
            case '*':
                addChar();
                nexT = TokenCode.MULT_OP;
                break;
            case '/':
                addChar();
                nexT = TokenCode.DIV_OP;
                break;
            default:
                addChar();
                nexT = TokenCode.INVALID;
        }
    }
    
    String name_file = "front.in";
    
    
    public static void main(String[] args) {
    FileReader file_name = null;
        // TODO code application logic here
        try{
            file_name = new FileReader ("front.in");
        }
        catch(Exception e){
            System.out.println ("error");
            System.out.println(e.getMessage());
        }
        
        Parser test = new Parser(new BufferedReader(file_name));
        test.front_c();
        
    }
    
}
