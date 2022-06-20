/* Decodificador de permisos en Linux.
   https://tech.io/playgrounds/52292/practica-0-repaso-conceptos-basicos-de-programacion-en-c

  _____     ____
 /      \  | ㋡ |
|        |/ ___\|
|_________/
|_|_| |_|_| Oscar Sanchez */

/*#include<iostream>
#include<string>

using namespace std;

int decodePermits(const string& permits){
    // Complete esta función siguiendo las recomendaciones anteriores
    int intArrDecode[] = {4,2,1,0};
    char charArrDecode[] = {'r','w','x','-'};

    int a=0;
    for (int i = 0; i < 3; i++){
        for (int v = 0; v < 4; v++){
            if (permits[i] == charArrDecode[v]){
                a+=intArrDecode[v];
            }
        }
    }

    int b=0;
    for (int i = 3; i < 6; i++){
        for (int v = 0; v < 4; v++){
            if (permits[i] == charArrDecode[v]){
                b+=intArrDecode[v];
            }
        }
    }

    int c=0;
    for (int i = 6; i < 9; i++){
        for (int v = 0; v < 4; v++){
            if (permits[i] == charArrDecode[v]){
                c+=intArrDecode[v];
            }
        }
    }

    string strnum = to_string(a) + to_string(b) + to_string(c);
    int num = stoi(strnum);

    return num;

}

int main()
{
    string permit1 = "rw-r--r--";
    string permit2 = "rwxr-x--x";
    string allpermits = "rwxrwxrwx";

    std::cout << decodePermits(permit1) << std::endl;
    std::cout << decodePermits(permit2) << std::endl;
    std::cout << decodePermits(allpermits) << std::endl;

    return 0;
}*/
