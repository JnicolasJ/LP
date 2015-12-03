module main;

import std.stdio;
import std.conv;
import std.random;

//define RAND_MAX 99999999;
const int qSize = 6;
const double gamma = 0.8;
const int iterations = 10;

int initialStates[qSize] = [1, 3, 5, 2, 4, 0];

int [][]R = [
				[-1, -1, -1, -1,  0, -1],
				[-1, -1, -1,  0, -1, 100],
				[-1, -1, -1,  0, -1, -1],
				[-1,  0,  0, -1,  0, -1],
				[ 0, -1, -1,  0, -1, 100],
				[-1,  0, -1, -1,  0, 100]
			];

int Q[qSize][qSize];
int currentState;

void episode(int initialState);
void chooseAnAction();
int getRandomAction(int upperBound, int lowerBound);
void initialize();
int maximum(int state, bool returnIndexOnly);
int reward(int action);

void main(string[] args)
{
	int newState;

	initialize();

    for(int j = 0; j <= (iterations - 1); j++){
        for(int i = 0; i <= (qSize - 1); i++){
            episode(initialStates[i]);
	} 
    }

     for(int i = 0; i <= (qSize - 1); i++){
        for(int j = 0; j <= (qSize - 1); j++){
            //cout << setw(5) << Q[i][j]<<"sd";
            writeln(Q[i][j]);
			if(j < qSize - 1){
				//cout << ",";
				writeln(", ");
			}
		} 
     writeln(" ");
	} 
    writeln(" ");

	for(int i = 0; i <= (qSize - 1); i++){
        currentState = initialStates[i];
        newState = 0;
		do {
            newState = maximum(currentState, true);
           // cout << currentState << ", ";
            writeln(currentState," ,");
            currentState = newState;
        } while(currentState < 5);
        //cout << "5" << endl;
        writeln("5");
	} 

    
	writeln("Hello World!");
	
	
    
}


void episode(int initialState){

    currentState = initialState;
	do {
		writeln("asa");
        chooseAnAction();
	} while(currentState == 5);

    for(int i = 0; i <= (qSize - 1); i++){
        chooseAnAction();
	} 
}

void chooseAnAction(){

	int possibleAction;

    possibleAction = getRandomAction(qSize, 0);

	if((R[currentState][possibleAction]) >= 0){
        Q[currentState][possibleAction] = reward(possibleAction);
        currentState = possibleAction;
	}
}

int getRandomAction(int upperBound, int lowerBound){

	int action;
	bool choiceIsValid = false;
	int range = (upperBound - lowerBound) + 1;


    do {

      
        //action = lowerBound + (to!int(range * uniform(1, 99999999)/84645+1.0));
        action = -5;
		if((R[currentState][action]) > -1){
            choiceIsValid = true;
		}
    } while(choiceIsValid == false);

    return action;
}

void initialize(){

	
	Mt19937 gen;
	gen.seed(unpredictableSeed);

    for(int i = 0; i <= (qSize - 1); i++){
        for(int j = 0; j <= (qSize - 1); j++){
            Q[i][j] = 0;
		} 
	} 
}

int maximum(int state, bool returnIndexOnly){

	int winner;
	bool foundNewWinner;
	bool done = false;

    winner = 0;

	do {
        foundNewWinner = false;
        for(int i = 0; i <= (qSize - 1); i++){
			if((i < winner) || (i > winner)){     
				if(Q[state][i] > Q[state][winner]){
                    winner = i;
                    foundNewWinner = true;
				}
			}
		} 

		if(foundNewWinner == false){
            done = true;
		}

    } while(done == false);

	if(returnIndexOnly == true){
		return winner;
	}else{
		return Q[state][winner];
	}
}

int reward(int action){


    return to!int(R[currentState][action] + (gamma * maximum(action, false)));
}


