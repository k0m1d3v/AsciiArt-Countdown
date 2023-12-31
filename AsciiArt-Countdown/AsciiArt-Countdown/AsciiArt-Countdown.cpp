#include <iostream>
#include <string> // For string class
#include <cstdlib> // For rand()
#include <Windows.h> // For Sleep() and system()
#include <vector> // For vector class

using namespace std;

// Function prototypes
void randColor();
void asciiNewYear();
void resetColor();
void extrapolate(int n);
void asciiNumList(int n);


int main() {
    int n;

    cout << "Enter a number for the countdown: ";
    cin >> n;

    system("cls");

    for (int i = 0; i < n; i++)
    {
        randColor();
        extrapolate(n - i);
    }

    asciiNewYear();
    return 0;
}

void randColor() {
    int r = rand() % 5 + 1;
    switch (r) {
    case 0:
        cout << "\u001b[31m";
        break;
    case 1:
        cout << "\u001b[32m";
        break;
    case 2:
        cout << "\u001b[33m";
        break;
    case 3:
        cout << "\u001b[34m";
        break;
    case 4:
        cout << "\u001b[35m";
        break;
    case 5:
        cout << "\u001b[36m";
        break;
    default:
        cout << "\u001b[37m";
        break;
    }
}

void asciiNewYear() {
    while (true)
    {
        randColor();
        cout << R"(
.;;,     .;;,
`  ;;   ;;  '
   ;;   ;; ,  .;;;.   .;;,;;;,  .;;,;;;,  .;;.  .;;.
 ,;;;;;;;;;'  `   ;;  ` ;;   ;; ` ;;   ;; ` ;;  ;; '
 ` ;;   ;;    .;;.;;    ;;   ;;   ;;   ;;   ;;  ;;
   ;;   ;;    ;;  ;; ,  ;;   ;;   ;;   ;;   ;;  ;;
.  ;;    ';;' `;;;';;'  ;;';;'    ;;';;'     `;;';
';;'                    ;;        ;;            ;;
                     .  ;;     .  ;;         .  ;;
                     ';;'      ';;'          ';;'

               .;;, ,;;;,
               `  ;;    ;;
                  ;;    ;;     ,;;,  .;;.      .;;,
                  ;;    ;;    ;;  ;; ` ;;      ;; '
                  ;;    ;;    ;;;;;'   ;;  ;;  ;;
                  ;;    ;;    ;;   .   ;;  ;;  ;;
               .  ;;     ';;'  `;;;'    `;;'`;;'
               ';;'

                              .;;.     .;;.
                              `  ;;   ;;  '
                                 ;;   ;;   .;;,  .;;;.   .;;.;;;,
                                 ;;   ;;  ;;  ;; '   ;;  ` ;;   '
                                 ;;   ;;  ;;;;;' .;;,;;    ;;
                                  `;;;';  ;;   . ;;  ;; ,  ;;
                                      ;;   `;;;'  `;;';;'  ;'
                                      ;;
                                  .'  ;;
                                  ';;;'
    )";
        Sleep(1000);
        system("cls");
    }
}

void resetColor() {
    cout << "\u001b[37m";
}

void extrapolate(int n) {
    string intToStr = to_string(n); // Convert int to string
    vector<int> arr_int; // Create vector to store digits of n
    for (char c : intToStr) {
        arr_int.push_back(c - '0');  // Convert char to int and push to vector
    }

    for (int c : arr_int) {
        asciiNumList(c);
    }

    cout << endl;
    Sleep(1000);
    system("cls");
}

void asciiNumList(int n) {
    switch (n) {
    default:
        break;
    case 0:
        cout << R"(
     000000000
   00:::::::::00
 00:::::::::::::00
0:::::::000:::::::0
0::::::0   0::::::0
0:::::0     0:::::0
0:::::0     0:::::0
0:::::0 000 0:::::0
0:::::0 000 0:::::0
0:::::0     0:::::0
0:::::0     0:::::0
0::::::0   0::::::0
0:::::::000:::::::0
 00:::::::::::::00
   00:::::::::00
     000000000
)";
        break;
    case 1:
        cout << R"(
  1111111
 1::::::1
1:::::::1
111:::::1
   1::::1
   1::::1
   1::::1
   1::::l
   1::::l
   1::::l
   1::::l
   1::::l
111::::::111
1::::::::::1
1::::::::::1
111111111111
)";
        break;
    case 2:
        cout << R"(
 222222222222222
2:::::::::::::::22
2::::::222222:::::2
2222222     2:::::2
            2:::::2
            2:::::2
         2222::::2
    22222::::::22
  22::::::::222
 2:::::22222
2:::::2
2:::::2
2:::::2       222222
2::::::2222222:::::2
2::::::::::::::::::2
22222222222222222222
)";
        break;
    case 3:
        cout << R"(
 333333333333333
3:::::::::::::::33
3::::::33333::::::3
3333333     3:::::3
            3:::::3
            3:::::3
    33333333:::::3
    3:::::::::::3
    33333333:::::3
            3:::::3
            3:::::3
            3:::::3
3333333     3:::::3
3::::::33333::::::3
3:::::::::::::::33
 333333333333333
)";
        break;
    case 4:
        cout << R"(
       444444444
      4::::::::4
     4:::::::::4
    4::::44::::4
   4::::4 4::::4
  4::::4  4::::4
 4::::4   4::::4
4::::444444::::444
4::::::::::::::::4
4444444444:::::444
          4::::4
          4::::4
          4::::4
        44::::::44
        4::::::::4
        4444444444
)";
        break;
    case 5:
        cout << R"(
555555555555555555
5::::::::::::::::5
5::::::::::::::::5
5:::::555555555555
5:::::5
5:::::5
5:::::5555555555
5:::::::::::::::5
555555555555:::::5
            5:::::5
            5:::::5
5555555     5:::::5
5::::::55555::::::5
 55:::::::::::::55
   55:::::::::55
     555555555
)";
        break;
    case 6:
        cout << R"(
        66666666
       6::::::6
      6::::::6
     6::::::6
    6::::::6
   6::::::6
  6::::::6
 6::::::::66666
6::::::::::::::66
6::::::66666:::::6
6:::::6     6:::::6
6:::::6     6:::::6
6::::::66666::::::6
 66:::::::::::::66
   66:::::::::66
     666666666
)";
        break;
    case 7:
        cout << R"(
77777777777777777777
7::::::::::::::::::7
7::::::::::::::::::7
777777777777:::::::7
           7::::::7
          7::::::7
         7::::::7
        7::::::7
       7::::::7
      7::::::7
     7::::::7
    7::::::7
   7::::::7
  7::::::7
 7::::::7
77777777
)";
        break;
    case 8:
        cout << R"(
     888888888
   88:::::::::88
 88:::::::::::::88
8::::::88888::::::8
8:::::8     8:::::8
8:::::8     8:::::8
 8:::::88888:::::8
  8:::::::::::::8
 8:::::88888:::::8
8:::::8     8:::::8
8:::::8     8:::::8
8:::::8     8:::::8
8::::::88888::::::8
 88:::::::::::::88
   88:::::::::88
     888888888
)";
        break;
    case 9:
        cout << R"(
     999999999
   99:::::::::99
 99:::::::::::::99
9::::::99999::::::9
9:::::9     9:::::9
9:::::9     9:::::9
 9:::::99999::::::9
  99::::::::::::::9
    99999::::::::9
         9::::::9
        9::::::9
       9::::::9
      9::::::9
     9::::::9
    9::::::9
   99999999
)";
        break;
    }
}
