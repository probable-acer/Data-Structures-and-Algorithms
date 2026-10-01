#include <bits/stdc++.h>
using namespace std;
//paterns -> nested loops
// indentify the pattern 
// identify the symmetry [optional]
void pattern1(int n){ //square box
    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int n){ // increasing stars triangle
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int n){ //increasing number triangle
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << j+1 << " ";
        }
        cout << endl;
    }
}
void pattern4(int n){ // triangle of row number
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << i+1 << " ";
        }
        cout << endl;
    }
}
void pattern5(int n){ //Inverted Right Pyramid
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern6(int n){ //decreasing number triangle
    for(int i=1;i<n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern7(int n){ //pyrmaid 
    for(int i=0;i<n;i++){
        //space (leading)
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        //starts
        for(int k=0;k<2*i+1;k++){
            cout << "*";
        }
        //stars (trailing not required)
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        cout << "\n";
    }
}
void pattern8(int n){ //inverted pyramid
    for(int i=0;i<n;i++){
        //leading stars
        for(int j=0;j<i;j++){
            cout << " ";
        }
        //stars
        for(int j=0;j<2*(n-i-1) + 1;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern9(int n){ // diamond pattern
    for(int i=0;i<n;i++){
        //space (leading)
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        //starts
        for(int k=0;k<2*i+1;k++){
            cout << "*";
        }
        cout << "\n";
    }
    for(int i=0;i<n;i++){
        //leading stars
        for(int j=0;j<i;j++){
            cout << " ";
        }
        //stars
        for(int j=0;j<2*(n-i-1) + 1;j++){
            cout << "*";
        }
        cout << endl;
    }

}
void pattern10(int n){ //half diamond
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-i;j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}
void pattern10optimized(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars = i;
        if(i>n) stars = 2*n - i;
        for(int j = 1;j<=stars;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern11(int n){ // 0 and 1 right angle triangle
    int start = 1;
    for(int i=1;i<=n;i++){
        if(i%2==0) start = 0;
        else start = 1;
        for(int j=1;j<=i;j++){
            cout << start;
            start = 1 - start;
        }
    }
}
void pattern12(int n){ //consecutive number triangle
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
        for(int j=1;j<=2*(n-i);j++){
            cout << " ";
        }
        for(int j=i;j>=1;j--){
            cout << j;
        }
        cout << endl;
    }
}
void pattern13(int n){ //number triangle
    int ans = 1;
    for(int i=1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout << ans++ << " ";
        }
        cout << endl;
    }
}
void pattern14(int n){ //character triangle
    for(int i=1;i<=n;i++){
        for(char ch = 'A'; ch < 'A' + i;ch++){
            cout << ch;
        }
        cout << endl;
    }
}  
void pattern15(int n){ //inverted character triamgle
    for(int i=0;i<n;i++){
            for(char ch = 'A';ch <'A' + (n-i);ch++){
                cout << ch;
            }
            cout << endl;
        }
} 
void pattern16(int n){ //const character right triangle
    for(int i=0;i<n;i++){
        char ch = 'A' + i;
        for(int j=0;j<=i;j++){
            cout << ch;
        }
        cout << endl;
    }
}
void pattern17(int n){ //character pyramid
    for(int i=0;i<n;i++){
        //space (leading)
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        //characters
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j = 1;j<=2*i+1;j++){
            cout << ch;
            if(j<= breakpoint) ch++;
            else ch--;
        }
        //stars (trailing not required)
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        cout << "\n";
    }
}
void pattern18(int n){//imverted double sided triangle
    for(int i=0;i<n;i++){
        char ch = 'A' + n-1-i;
        for(int j=0;j<=i;j++){
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}
void pattern19(int n){//hollow square pattern
    int inis = 0;
    for(int i=0;i<n;i++){
        //stars
        for(int j=1;j<=n-i;j++){
            cout << "*";
        }
        //spaces
        for(int j=0;j<inis;j++){
            cout << " ";
        }
        //stars
        for(int j=1;j<=n-i;j++){
            cout << "*";
        }
        inis += 2;
        cout << endl;
    }
    inis = 2*(n-1);
    for(int i=1;i<=n;i++){
        //stars
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        //spaces
        for(int j=0;j<inis;j++){
            cout << " ";
        }
        //stars
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        inis -= 2;
        cout << endl;
    }
}
void pattern20(int n){
    int spaces = 2*n - 2;
    for(int i=0;i<=2*n-1;i++){
        int stars = i;
        if(i>n) stars = 2*n - i;
        //stars
        for(int j=1;j<=stars;j++){
            cout << "*";
        }
        //spaces
        for(int j=1;j<=spaces;j++){
            cout << " ";
        }
        //stars
        for(int j=1;j<=stars;j++){
            cout << "*";
        }
        cout << endl;
        if(i<n) spaces -= 2;
        else spaces += 2;
    }
}
void pattern21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == 0 || i == n-1 || j == 0 || j == n-1) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
}
void pattern22(int n){
    int size = 2*n - 1;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout << n - min({i,j,size -i -1,size-j-1});
        }
        cout << endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        pattern22(n);
    }
}