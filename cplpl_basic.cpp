// part 1 //
#include <iostream>
using namespace std;

int main(){
    cout << "Hello, world." << endl;
    return 0;
}

// part 2 //
#include <iostream>
using namespace std;
int main(){
    int a = 12345;
    int b = 23456;
    cout << "12345 + 23456 = " << a + b << endl;
}

// part 3 //
#include <iostream>
using namespace std;
int main(){
    int a = 12345;
    int b = 7;
    cout << "12345 / 7のあまりは" << a%b << endl;
}

// part 4 //
#include <iostream>
using namespace std;
int main(){
    int ia;
    cout << "数値を入力してください\n";
    cin >> ia;
    cout << "\n入力された数値は" << ia << "です\n" << endl;
    return 0;
}

// part 5 //
#include <iostream>
using namespace std;
int main(){
    int ia;
    cout << "input your number\n";
    cin >> ia;
    cout << "\nanswer is " << ia*3 << ".\n" << endl;
    return 0;
}

// part 6 //
#include <iostream>
using namespace std;
int main(){
    int ia;
    int iia;
    cout << "input your number\n";
    cin >> ia;
    cout << "input your 2nd number\n";
    cin >> iia;
    cout << "\n1st input number is " << ia << ".\n" << "2nd input number is "<< iia <<".\n" << endl;
    cout << "summed is" << ia+iia <<".\n"<<"difference is" << ia-iia <<".\n"<<"積 " << ia+iia <<".\n"<<"商 is " << ia/iia <<" 余り is "<< ia%iia <<".\n"<< endl;
    return 0;
}

// part 6, 7 //
#include <iostream>
using namespace std;
int main(){
    int ia;
    cout << "input your number\n";
    cin >> ia;
    if (ia == 0){
        cout << "zero" << endl;
    }
    else{
        cout << "not zero" << endl;
    }
    return 0;
}

// part 8, 9 //
#include <iostream>
using namespace std;
int main(){
    int ia;
    cout << "input your number\n";
    cin >> ia;
    if (ia > 0){
        cout << "positive" << endl;
    }
    else if (ia == 0){
        cout << "zero" << endl;
        }
    else{
        cout << "negative" << endl;
    }
    return 0;
}

// part 10 //
#include <iostream>
using namespace std;
int main(){
    int ia;
    cout << "input your number\n";
    cin >> ia;
    cout << "absolute number is " << abs(ia) << endl;
    return 0;
}

// part 11 //
#include <iostream>
using namespace std;
int main(){
    for (int i = 1; i < 11; i++){
        cout << i << " && Hello, world!!" << endl;
    }
    return 0;
}

// part 12 //
#include <iostream>
using namespace std;
int main(){
    int ia;
    cout << "input number ??\n";
    cin >> ia;
    for (int i = 1; i < ia+1; i++){
        cout << i << " && Hello, world!!" << endl;
    }
    return 0;
}

// part 13 //
#include <iostream>
using namespace std;
int main(){
    int ia;
    int i = 0;
    cout << "input number ??\n";
    cin >> ia;
    while (i < ia+1){
        cout << i << "\n";
        i++;
    }
    return 0;
}

// part 14 //
#include <iostream>
using namespace std;
int main(){
    int ia;
    int i = 0;
    cout << "input number ??\n";
    cin >> ia;
    cout << ia << "が入力されました" << endl;
    for (int i = ia; i >= 0; i--){
        // cout << i << endl;
        // if (i == 0){
        //     break;
        // }
        cout << i << "\n" << endl;
    }
    return 0;
}

// part 15 //
#include <iostream>
using namespace std;
int main(){
    int ia;
    int i = 0;
    cout << "input number ??\n";
    cin >> ia;
    for (int i = 0; i < ia+1; i = i+2){
        cout << i << endl;
    }
    return 0;
}

// part 16 //
#include <iostream>
using namespace std;
int main(){
    int ia;
    int i = 0;
    cout << "input int number ??\n";
    cin >> ia;
    while(ia != 0){
        cout << "input int number ??\n";
        cin >> ia;
    }
    return 0;
}

// part 17 //
#include <iostream>
using namespace std;
int main(){
    int ia;
    int i = 0;
    cout << "iput your number \n";
    cin >> ia;
    int arr[ia];
    for (i = 0; i < ia+1; i++){
        arr[i] = i;
        cout << arr[i] << endl;
    }
    return 0;
}

// part 18 //
#include <iostream>
using namespace std;
int main(){
    int ia;
    int iia;
    int i = 0;
    cout << "iput your number \n";
    cin >> ia;
    cout << "input your number for insert the array\n";
    cin >> iia;
    int arr[ia];
    for (i = 0; i < ia+1; i++){
        arr[i] = iia;
        cout << arr[i] << endl;
    }
    return 0;
}

// part 19 // 基礎編最終問題
#include <iostream>
using namespace std;
int main(){
    int ia;
    int iia;
    int i = 0;
    cout << "iput your number \n";
    cin >> ia;
    int arr[ia];
    for (i = 0; i < ia+1; i++){
        cout << "input your number \n";
        cin >> iia;
        arr[i] = iia;
    }
    for (i = 0; i < ia+1; i++){
        cout << arr[i] << endl;
    }
    return 0;
}
