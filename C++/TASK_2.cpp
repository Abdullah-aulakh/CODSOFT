#include<iostream>

#define MAX 20000

using namespace std;

float getAnswer(float n1,float n2,char o){//performs calculation
    if(o=='+')
        return n1+n2;
    else if(o=='-')
        return n1-n2;
    else if(o=='*')
        return n1*n2;
    else
        return n1/n2;

}
char getOperator(){//get valid operator input with all checks
    char oper;
do{
    cin>>oper;
    if(oper!='+'&&oper!='-'&&oper!='/'&&oper!='*'){
        cout<<"\nInvalid operator enter again\n";
        cin.ignore(MAX,'\n');
    }
    else 
        break;
}while(true);
        
    return oper;

}
void getInput(float &num){//get valid integer input with all checks
    do{
        cout<<"\nEnter a number : ";
        if(cin>>num)
            break;
        else{
            cout<<"Non-Numeric Input \n\nTry Again\n";
            cin.clear();
            cin.ignore(MAX,'\n');
         }
    }while(true);
}

int main(){

    float num1,num2;
    char oper;
    cout<<"\t\t\tSimple Calculator\n\n";

    do{
        getInput(num1);

        cout<<"\nChoose an operation : ";
        cout<<"\n\n---> +\n---> -\n---> *\n---> /\n";
        cout<<"Input that Specific operator\n";

        oper=getOperator();
        
        getInput(num2);
    
        if(num2==0 && oper=='/'){
        cout<<"\nInvalid operation can't divide with 0 \n\n";
        cout<<"Try again\n";
        }
        else
            break;
    }while(true);//division with zero check 


    cout<<"\nAnswer---> = "<<getAnswer(num1,num2,oper)<<"\n\n";

    return 0;
}