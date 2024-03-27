#include <iostream>
using namespace std;

void printTriangle(int h, int w){
    if (w%2==0 || w > 2*h){
        cout << "Can't print the triangle" << endl;
        return;
    }
    int mid = (w-1)/2;
    int oddNum = mid-1;
    int lineNum = (h-2)/oddNum;

    //first *
    for(int i = 0; i < mid; i++)
        cout << " ";
    cout << "*" << endl;
    //Rest
    mid--;
    int curr = 3;
    for(int j=0; j<(h-2)%oddNum; j++){
        for(int k=0;k < mid; k++)
            cout << " ";
        cout << "***" << endl;
    }
    for(int i = 0; i<oddNum; i++){
        for(int j=0;j<lineNum;j++){
            for(int k=0;k < mid; k++)
                cout << " ";
            for(int z = 0;z<curr; z++)
                cout << "*";
            cout << endl;
        }
        mid--;
        curr+= 2;
    }
    for(int i= 0; i< w; i++)
        cout << "*";
    cout << endl;
    return;


}

int main(){
    int var, var2, height, width;
    int x= 5/3;
    cout<<x;
    do{
        cout << "Choose an option:\n 1. Rectangle\n 2. Triangle\n 3. Exit\n";
        cin >> var;
        if (var == 1){
            cout << "Put height\n";
            cin >> height;
            cout << "Put width\n";
            cin >> width;
            if (height==width || abs(height-width) > 5)
                cout << "Area: " << width*height<<endl;
            else cout << "Perimeter: " << width*2 + height*2 << endl;
        }
        if (var == 2){
            cout << "Put height\n";
            cin >> height;
            cout << "Put width\n";
            cin >> width;
            cout << "Choose an option:\n 1. Perimeter\n 2. Print" << endl;
            cin >> var2;
            if(var2 == 1)
                cout << "Perimeter: " << height*2+width << endl;
            else if (var2== 2)
                printTriangle(height,width);
        }
    }
    while(var != 3);

    return 0;

}
