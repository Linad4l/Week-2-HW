#include<iostream>
using namespace std;

//define function that counts characters
int countcharacters(char string[]){
    int i=0;
    while(string[i]!='\0'){ //count until null character is reached
        i++;
    }
    return i;
}

int main(){
    //placed limit to 100 characters
    char input[100];
    int count=0;
    cout<<"Please enter a string: ";
    cin.getline(input, 100);
    //call functiont to count string and display results
    count=countcharacters(input);
    cout<<"The length of the string is:"<< count<<endl;
    
    
}
