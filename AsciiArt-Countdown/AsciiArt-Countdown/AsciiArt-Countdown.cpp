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
        extrapolate(n - i);
        randColor();
    }

    for (int i = 0; i < 10; i++) // Flash colors 5 times for half second each
    {
        randColor();
        system("cls");
        asciiNewYear();
        Sleep(500);
    }
    Sleep(5000);
    resetColor();

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
 0000
00  00
00  00
00  00
 0000
            )";
        break;
    case 1:
        cout << R"(
 111
  11
  11
  11
 11111
)";
        break;
    case 2:
        cout << R"(
 2222
22  22
   22
  22
222222
)";
        break;
    case 3:
        cout << R"(
  3333
33  33
   333
33  33
 3333
)";
        break;
    case 4:
        cout << R"(
44  44
44  44
444444
    44
    44
)";
        break;
    case 5:
        cout << R"(
555555
55
55555
    55
55555
)";
        break;
    case 6:
        cout << R"(
666666
66
66666
66  66
66666
)";
        break;
    case 7:
        cout << R"(
777777
    77
   77
  77
 77
)";
        break;
    case 8:
        cout << R"(
888888
88  88
888888
88  88
888888
)";
        break;
    case 9:
        cout << R"(
999999
99  99
999999
    99
999999
)";
        break;
    }
}
