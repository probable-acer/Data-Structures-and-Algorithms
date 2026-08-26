#include <bits/stdc++.h>
using namespace std;
//functions are set of code that does something for you
    // functions are used to modularise code
    //functions are used to increase readability
    // functions are used to use same code multiple times
    //types of function 
    //void -> which does not return anything
    //return
    // parameterised 
    //non parameterised
    void printname(){
        cout << "striver" << endl;
    }
    void printname(string name){
        cout << "Hey " << name;
    }
    int sum(int num1,int num2){
        int num3 = num1 + num2;
        return num3;
    }
    // pass by value
    void dosomething(int n){
        n += 5;
        cout << n << endl;
        n += 5;
        cout  << n << "\n";
    }
    void dosomething(string &s){ // pass by value
        s[0] = 's';
        cout << s << endl;
    }
    void dosomething(int arr[],int n){ // pass by reference
        arr[0] += 100;
        cout << "Value of the function : " << arr[0] << endl;
    }
int  main(){
    string s;
    cin >> s;
    dosomething(s);
    cout << s;
    int n;
    cin >> n;
    dosomething(n);
    cout << n<< "\n";
    string name;
    cin >> name;
    printname(name);
    int num1,num2;
    cin >> num1 >> num2;
    int res = sum(num1,num2);
    cout << res << endl;
    //int, long, long long, float, double
    //string and getline
    //strig input does take input till the whitespace appears
    //getline does take input including whitespace in a single line
    //char 
    string str;
    getline(cin, str);
    cout << str << endl;
    std::cout << "Hey Raj !" << std::endl;
    array <int , 5> arr1 = {1,2,3,4,5}; //one way of declaring array
    int arr2[] = {1,2,3,4}; // another way of declaring array
    // to make an array of n inputs
    int arr3[6];
    //various ways of taking input for 1D array
    for(int i=0;i<6;i++){
        cin >> arr3[i];
    }
    int arr4[5];
    cin >> arr4[0] >> arr4[1] >> arr4[2] >> arr4[3] >> arr4[4];
    // 2D array 
    int arrr[3][5]; // declaration
    arrr[1][3] = 78;
    cout << arrr[1][2]; // it will give garbage value as it wasnt declared
    string s = "Striver";
    s[2] = 'f'; //string data type stores the whole string in char parts
    int len =  s.size(); // s.size() gives size of the string
    cout << s[len-1]; // this prints the last char of the string
    // for loop syntax
    for(int i=0;i<=5;i = i + 1){
        cout << "Shub" << endl;
    }
    int i; //declaring variable outside the loop increases the scope of the variable
    for(i=1;i<=5;i = i + 1){
        cout << "Shub" << endl;
    }
    cout << i << endl;
    int j;
    while(j<=5){
        cout << "Shub" << "\n";
        j = j + 1;
    }
    // do while loop 
    int k = 2;
    do{
        cout << "Shub\n";
        k = k + 1;
    }
    while(k<=1);
    cout << k << endl;
    // the only difference between do while and while loop is the code is executed once even if the condition fails
    return 0;
}
