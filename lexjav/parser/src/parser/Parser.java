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
import java.io.FileReader;
import java.io.IOException;

enum CharClass{
    LETTER,
    DIGIT,
    FLO_DIGIT,
    UNKNOW,
    INVALID;
    
    private final int op;
    
    CharClass(int x){
        this.op = x;
    }
    
    
    
}

public class Parser {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
    }
    
}
