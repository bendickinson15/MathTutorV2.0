/*****************************************************************************************
Program: MathTutorV2
Programmers: Benjamin Dickinson, Ian Mensah
Date: 9/28/2026
Github Repo:
Description: A wizard/magic themed math tutor that displays the intro featuring
ASCII art and jokes, it then asks a simple math question which is checked for correctness
and then it outputs an end of program message.
******************************************************************************************/
#include <iostream> //required for cout and cin
#include <cstdlib>
using namespace std; //sets standard namespace

//start of the main function
int main() {
    //initializing variables
    string userName = "unknown";
    int leftNum = 0;
    int rightNum = 0;
    int userAnswer = 0;
    int mathType = 0;
    int correctAnswer = 0;
    int temp = 0;
    char mathSymbol = '?';

    mathType = rand() % 4 + 1;
    leftNum = rand() % 10 + 1;
    rightNum = rand() % 10 + 1;

    if (mathType == 1) {
        mathSymbol = '+';
        correctAnswer = leftNum + rightNum;
    } else if (mathType == 2) {
        mathSymbol = '-';
        if (leftNum <= rightNum) {
            temp = leftNum;
            leftNum = rightNum;
            rightNum = temp;
        }
        correctAnswer = leftNum - rightNum;
    } else if (mathType == 3) {
        mathSymbol = '*';
        correctAnswer = leftNum*rightNum;
    } else if (mathType == 4) {
        mathSymbol = '/';
        correctAnswer = leftNum;
        leftNum = rightNum * leftNum;

    }
    switch (mathType) {
        case 1:
        default:
            cout<<"Error! Invalid Math Type:"<< mathType << endl;
            cout << "Program ended with an error -1" << endl;
            cout << "Please report this error to Debbie Johnson." << endl;
    }
    return -1;

    //aesthetic header
    cout <<"(*)[*]{*}[*](*)[*]{*}[*](*)[*]{*}[*](*)[*]{*}[*](*)[*]{*}[*](*)[*]{*}[*](*)[*]{*}[*](*)[*]{*}[*](*)[*]{*}[*](*)[*]{*}[*]" << endl;
    cout <<"                       {*} Welcome to the tower of the wizard of magical math tutoring! (V1) {*}" << endl;
    cout << R"(
,---.    ,---.   ____   ,---------. .---.  .---.    .--.      .--..-./`)  ____..--'   ____    .-------.     ______
|    \  /    | .'  __ `.\          \|   |  |_ _|    |  |_     |  |\ .-.')|        | .'  __ `. |  _ _   \   |    _ `''.
|  ,  \/  ,  |/   '  \  \`--.  ,---'|   |  ( ' )    | _( )_   |  |/ `-' \|   .-'  '/   '  \  \| ( ' )  |   | _ | ) _  \
|  |\_   /|  ||___|  /  |   |   \   |   '-(_{;}_)   |(_ o _)  |  | `-'`"`|.-'.'   /|___|  /  ||(_ o _) /   |( ''_'  ) |
|  _( )_/ |  |   _.-`   |   :_ _:   |      (_,_)    | (_,_) \ |  | .---.    /   _/    _.-`   || (_,_).' __ | . (_) `. |
| (_ o _) |  |.'   _    |   (_I_)   | _ _--.   |    |  |/    \|  | |   |  .'._( )_ .'   _    ||  |\ \  |  ||(_    ._) '
|  (_,_)  |  ||  _( )_  |  (_(=)_)  |( ' ) |   |    |  '  /\  `  | |   |.'  (_'o._)|  _( )_  ||  | \ `'   /|  (_.\.' /
|  |      |  |\ (_ o _) /   (_I_)   (_{;}_)|   |    |    /  \    | |   ||    (_,_)|\ (_ o _) /|  |  \    / |       .'
'--'      '--' '.(_,_).'    '---'   '(_,_) '---'    `---'    `---` '---'|_________| '.(_,_).' ''-'   `'-'  '-----'`

                                                                                                                                 )" << endl;
    cout <<"(*)[*]{*}[*](*)[*]{*}[*](*)[*]{*}[*](*)[*]{*}[*](*)[*]{*}[*](*)[*]{*}[*](*)[*]{*}[*](*)[*]{*}[*](*)[*]{*}[*](*)[*]{*}[*]" << endl;
    cout <<R"(A wise wizards words:
        (*) What's a wizard's favorite school subject? spell-gebra!
        (*) Why did the sorcerer break his calculator? He wanted to do math-a-magics in his head!
        (*) What is a witch's favorite shape? A Hex-agon!
        (*) What do you call a snake that is 3.14 feet long? A Pi-thon!)"<< endl << endl;
    cout <<"(*)[*]{*}[*](*)[*]{*}[*](*)[*]{*}[*](*)[*]{*}[*](*)[*]{*}[*](*)[*]{*}[*](*)[*]{*}[*](*)[*]{*}[*](*)[*]{*}[*](*)[*]{*}[*]" << endl;

    //obtaining user's name
    cout <<"What is your name young apprentice?"<< endl;
    cin >>userName;

    //math question and answer
    cout <<"Ah... "<< userName << "! So you have finally found me. If you truly seek the knowledge hidden within these ancient halls, you must" << endl <<"first prove your mind is sharp." << endl;
    cout <<"What is " << leftNum << mathSymbol << rightNum << " = ";
    cin >> userAnswer;

    if (userAnswer == correctAnswer) {

        cout << "Good job! You Got The Question Right!" << endl << endl;
        // Got the answer correct and will move on.

    }
    else {
        cout << "I'm So Disappointed In You Apprentice" << endl << endl;
        // They got it wrong so now they know
    }
    cout <<"This is all for our program! I hope you had a fantastic time!" << endl;
    cout << "The Wizard math V2 Be Out Shortly!" << endl;
    return 0;
}