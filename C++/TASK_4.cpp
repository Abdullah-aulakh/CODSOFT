#include<iostream>
#include <fstream>

using namespace std;

bool fileExists(string n){
    ifstream fin(n);
    return fin.is_open();
}
bool fileIsEmpty(string n){
    ifstream fin(n);
    char c;

    if(fin>>c)
        return false;
    else
        return true;    
        
}
string getFileName(){
    string n;
    cout<<"Enter Text File Name : (without .txt)\n";
    cin>>n;

    return n+".txt";
}
int getWordCount(string n){
    ifstream fin;
    string word;
    int count=0;
    fin.open(n);
    while(fin>>word){
      ++count;  
    }
    fin.close();
    return count;
}
int main(){

    string file_name=getFileName();

    if(fileExists(file_name)){
        if(!fileIsEmpty(file_name)){
            cout<<"Total Number of words in the given file are : "<<getWordCount(file_name)<<"\n\n";
        }
        else
            cout<<"\nGiven File is Empty \n";
    }
    else
        cout<<"\nFile doesn't Exists \n";

  


    return 0;
}
