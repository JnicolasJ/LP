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

enum CharClass{
    LETTER,
    DIGIT,
    FLO_DIGIT,
    UNKNOW,
    INVALID,
    EOF;
}

enum TokenCode{
    INT_LIT, FLOAT_LIT, IDENT,
    ASSIGN_OP, ADD_OP, SUB_OP, MULT_OP, DIV_OP,
    LETF_PAREN, RIGHT_PAREN, EOF, INVALID;
    

}



public class Parser {

    /**
     * @param args the command line arguments
     */
    
    
    String name_file = "front.in";
    
    
    public static void main(String[] args) {
    CharClass Car;
    TokenCode nextToken;
    FileReader fr;
        // TODO code application logic here
        try{
            fr = new FileReader ("front.in");
            //getchar
            
        }
        catch(Exception e){
            System.out.println ("error");
            System.out.println(e.getMessage());
        }
        int caract;
            try{
                caract = fr.read();
            }
            catch (Exception eg){
                Car = CharClass.EOF;
                System.out.println("end cade");
                return;
            }
            char next = (char)caract;
            if (Character.isAlphabetic(next))
                Car = CharClass.LETTER;
            else if (Character.isDigit(next))
                Car = CharClass.DIGIT;
            else if (next == '.')
                Car = CharClass.FLO_DIGIT;
            else
                Car = CharClass.UNKNOW;
            do{
                //lex
                switch (Car){
                    case '(':
                        caract =fr.read();
                        nextToken = TokenCode.LETF_PAREN;
                        break;
                    case ')':
                        caract =fr.read();
                        nextToken = TokenCode.RIGHT_PAREN;
                        break;
                    case '+':
                        caract =fr.read();
                        nextToken = TokenCode.ADD_OP;
                        break;
                    case '-':
                        caract =fr.read();
                        nextToken = TokenCode.SUB_OP;
                        break;
                    case '*':
                        caract =fr.read();
                        nextToken = TokenCode.MULT_OP;
                        break;
                    case '/':
                        caract =fr.read();
                        nextToken = TokenCode.DIV_OP;
                        break;
                    default:
                        caract =fr.read();
                        nextToken = TokenCode.INVALID;
                }
            }while(nextToken != TokenCode.EOF);
        
    }
    
}
