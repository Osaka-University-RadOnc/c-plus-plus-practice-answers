// 初級編 part 20~

// part 20 //
// #include <iostream>
// using namespace std;
// int main(){
//     int ia;
//     int iia;
//     int x;
//     int i = 0;
//     cout << "iput your 1st number \n";
//     cin >> ia;
//     cout << "iput your 2nd number \n";
//     cin >> iia;
//     cout << "1st number is " << ia << ".\n" << "2nd number is " << iia << ".\n" << endl;
//     x = ia/iia;
//     cout << "result: " << x << "\n" << "result: " << x*iia << endl;

//     return 0;
// }

// part 21 //
// #include <iostream>
// using namespace std;
// int main(){
//     int ia;
//     cout << "整数値を入力してください\n";
//     cin >> ia;
//     if (5 < ia and ia < 20){
//         cout << "OK!!" << endl;
//     }
//     else{
//         cout << "NO!!" << endl;
//     }

//     return 0;
// }

// part 22 //
// #include <iostream>
// using namespace std;
// int main(){
//     int ia;
//     cout << "整数値を入力してください\n";
//     cin >> ia;
//     if (ia <= -10 or 10 <= ia){
//         cout << "OK!!" << endl;
//     }
//     else{
//         cout << "NG!!" << endl;
//     }

//     return 0;
// }

// // part 23 //
// #include <iostream>
// using namespace std;
// int main(){
//     int ia;
//     cout << "整数値を入力してください\n";
//     cin >> ia;
//     if (-5 <= ia and ia < 10){
//         cout << "OK!!" << endl;
//     }
//     else{
//         cout << "NG!!" << endl;
//     }

//     return 0;
// }

// part 24 //
// #include <iostream>
// using namespace std;
// int main(){
//     int ia;
//     cout << "整数値を入力してください\n";
//     cin >> ia;
//     if ((-10 <= ia and ia < 0) or (ia >= 10)){
//         cout << "OK!!" << endl;
//     }
//     else{
//         cout << "NG!!" << endl;
//     }

//     return 0;
// }

// part 25 //
// #include <iostream>
// using namespace std;
// int main(){
//     int ia;
//     cout << "整数値を入力してください\n";
//     cin >> ia;
//     if (ia < -10){
//         cout << "range 1" << endl;
//     }
//     else if (-10 <= ia and ia < 0){
//         cout << "range 2" << endl;
//     }
//     else if (ia >= 0){
//         cout << "range 3" << endl;
//     }

//     return 0;
// }

// part 26 //
// #include <iostream>
// using namespace std;
// int main(){
//     int ia;
//     cout << "整数値を入力してください\n";
//     cin >> ia;
//     switch (ia){
//     case 1:
//         cout << "one" << endl;
//         break;
//     case 2:
//         cout << "two" << endl;
//         break;
//     case 3:
//         cout << "three" << endl;
//         break;
//     default:
//         cout << "other" << endl;
//         break;
//     }

//     return 0;
// }

// part 27 // 
// #include <iostream>
// using namespace std;
// int main(){
//     int ia;
//     int i;
//     int tmp_i = 0;
//     cout << "input your number ??\n";
//     cin >> ia;
//     if (ia <= 0){
//         cout << "not able to calculate" << endl;
//     }
//     else{
//         for (int i = ia; i >= 0; i--){
//         tmp_i = tmp_i+i;
//         // cout << tmp_i << endl; 
//         }
//         cout << tmp_i << endl;
//     }
//     return 0;

// }

// part 28 // 
// #include <iostream>
// using namespace std;
// int main(){
//     int ia;
//     int i;
//     int tmp_i = 1;
//     cout << "input your number ??\n";
//     cin >> ia;
//     if (ia <= 0){
//         cout << "not able to calculate" << endl;
//     }
//     else{
//         for (int i = ia; i > 0; i--){
//         tmp_i = tmp_i*i;
//         // cout << tmp_i << endl; 
//         }
//         cout << tmp_i << endl;
//     }
//     return 0;

// }

// part 29 // 
// #include <iostream>
// using namespace std;
// int main(){
//     int ia;
//     int i;
//     int tmp_i = 0; // tmpは, temporaryの略
//     int n = 1;
//     int arr[5];
//     int sum=0;
//     while (n <= 5){
//         cout << n << endl;
//         cout << "input your number ??\n";
//         cin >> ia;
//         arr[n] = ia;
//         n++;
//     }
//     for (int i = 0;i <= 5; i++){
//         sum=sum+arr[i];
//     }
//     cout << sum << endl;
//     return 0;
// }

// part 30 // 
// #include <iostream>
// using namespace std;
// int main(){
//     int ia;
//     int n = 1;
//     string s="*";
//     cout << "input your number ??\n";
//     cin >> ia;
//     if (ia <= 0){
//         cout << "please input at least 1" << endl;
//     }
//     else{
//         for (int i = ia-1; i >= 1; i--){
//             s=s+"*";
//         }
//         cout << s << endl;
//     }
//     return 0;
// }

// part 31 // 
// #include <iostream>
// using namespace std;
// int main(){
//     int ia;
//     int i;
//     int n = 1;
//     string s="*";
//     cout << "input your number ??\n";
//     cin >> ia;
//     if (ia <= 0){
//         cout << "please input at least 1" << endl;
//     }
//     else{
//         for (int i = 1; i <= ia-1; i++){
//             if (i%5==0){
//                 s=s+" *";
//             }
//             else{
//                 s=s+"*";
//             }
//         }
//         cout << s << endl;
//     }
//     return 0;
// }

// part 32 //
// #include <iostream>
// using namespace std;
// int main(){
//     int i;
//     for (int i =1; i <= 20; i++){
//         if (i%5 == 0){
//             cout << "bar" << endl;
//         }
//         else{
//             cout << i << endl;
//         }
//     }
//     return 0;
// }

// part 33 //
// #include <iostream>
// using namespace std;
// int main(){
//     int i;
//     int ia;
//     cout << "input your number \n";
//     cin >> ia;
//     for (int i =1; i <= 20; i++){
//         if (i != ia){
//             cout << i << endl;
//         }
//     }
//     return 0;
// }

// part 34 //
// #include <iostream>
// using namespace std;
// int main(){
//     int i;
//     int ia;
//     cout << "input your number \n";
//     cin >> ia;
//     for (int i =1; i <= 20; i++){
//         if (i != ia and i != ia+1){
//             cout << i << endl;
//         }
//     }
//     return 0;
// }

// part 35 //
// #include <iostream>
// using namespace std;
// int main(){
//     int i;
//     int ia;
//     int array[10] ={3,7,0,8,4,1,9,6,5,2};
//     cout << "input your number \n";
//     cin >> ia;
//     cout << array[ia] << endl;
//     return 0;
// }

// part 36 //
// #include <iostream>
// using namespace std;
// int main(){
//     int i;
//     int ia;
//     int iia;
//     int array[10] ={3,7,0,8,4,1,9,6,5,2};
//     cout << "input your 1st number \n";
//     cin >> ia;
//     cout << "input your 2nd number \n";
//     cin >> iia;
//     cout << array[ia]*array[iia] << endl;
//     return 0;
// }

// part 37 //
// #include <iostream>
// using namespace std;
// int main(){
//     int i;
//     int ia;
//     int iia;
//     int array[10] ={3,7,0,8,4,1,9,6,5,2};
//     cout << "input your 1st number \n";
//     cin >> ia;
//     // cout << "input your 2nd number \n";
//     // cin >> iia;
//     iia = array[ia];
//     cout << array[iia] << endl;
//     return 0;
// }

// part 38 //
#include <iostream>
using namespace std;
int main(){
    int i;
    int ia;
    int iia;
    int array[10] ={3,7,0,8,4,1,9,6,5,2};
    int arr[10];
    // cout << array[0] << endl;
    // iia = array[0];
    for (int i =0; i <= 9; i++){
        cout << array[i] << endl;
        iia = array[i];
        arr[i] = iia;
        cout << arr[i] << endl;
    }
    return 0;
}
