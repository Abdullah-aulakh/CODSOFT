#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

void seeder() {//seeds srand function using current time
    srand(time(0));
}

void get_random_range(int &s,int &e){//generates a random range between 0-200
    
    e=rand()%200;
    s=rand()%(e-1);

}
int generate_num(int s,int e){//genrates a random number between a specific range
    return s + rand() % (e - s + 1);
}
int main(){

    seeder();
    int start=0,end=0;
    get_random_range(start,end);
    int answer=generate_num(start,end);

    int guess;
    cout<<"\t\t\t-------------NUMBER GUESSING GAME-------------"<<"\n\n";
    cout<<"Guess a Number between "<<start<<" and "<<end<<" (inclusive)\n\n";
    
    while(true){
        cin>>guess;
        if(guess>end || guess <start)
            cout<<"\nGuess is out of range\n\nTry again\n";
        else if(guess==answer){
            cout<<"\nHorayy You Guessed it Right!!!!!\n";
            break;
        }
        else if(guess>answer)
            cout<<"\nTry smaller number than "<<guess<<"\n";
        else if(guess<answer)
            cout<<"\nTry greater number than "<<guess<<"\n"; 
    }
    

    return 0;
}