#include <iostream>
using namespace std;

int subtraction(int *a, int *b, int r){ //here we dereference the value that stored on a and b, a and b are the copy of &num_1
                                        // and &num_2
    r = *a -*b;
    return r;
}

int addition(int *c, int *d, int h){
    h = *c + *d;
    return h;
}

int multiplication(int *e, int *f, int k){
    k = *e * *f;
    return k;
}

int division(int *g, int *q, int x){
    x = *g / *q;
    return x;
}

int main(){
    int num_1;
    int num_2;
    cout<<"Enter the first number: "<<endl;
    cin>>num_1;
    cout<<"Enter the second number: "<<endl;
    cin>>num_2;
    string operation;
    cout<<"Enter operation: "<<endl;
    cin>>operation;

    int result;
    if (operation == "addition"){
        result = addition(&num_1, &num_2, result);//call by reference here, &num_1 and &num_2 are the address of the variables num_1 and num_2
    }
    else if(operation == "subtraction"){
        result = subtraction(&num_1, &num_2, result);
    }
    else if(operation == "multiplication"){
        result = multiplication(&num_1, &num_2, result);
    }
    else if(operation == "division"){
        result = division(&num_1, &num_2, result);
    }
    cout<<"result is: "<< result<<endl;

    //test: making test changes.

    //test: making new branches

    //test: making changes remotely

    //hi
}
