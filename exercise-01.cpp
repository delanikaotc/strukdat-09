/*
 Nama Program : Exercise-01
 Nama         : Delanika Olympiani
 NPM          : 140810180026
 Kelas        : B
 Tahun        : 2019
 Deskripsi    : Membalikkan sebuah kata menggunakan stack dengan array
 */

#include <iostream>

using namespace std;

const int maxElemen = 255;
struct stack {
    char isi[maxElemen];
    int top;
};

stack s;

void createStack(stack& s){
    s.top = -1;
}

void push(stack& s, char elemenBaru){
    if (s.top == maxElemen-1){
        cout<<"The stack is full!"<<endl;
    }
    else {
        s.top++;
        s.isi[s.top] = elemenBaru;
    }
}

void pop(stack& s, char& elemenHsl){
    if (s.top < 0){
        cout<<"The stack is empty!"<<endl;
    }
    else {
        elemenHsl = s.isi[s.top];
        s.top--;
    }
}

void print(stack& s){
    char temp;
    for (int i=s.top; i>=0; i--){
        pop(s, temp);
        cout<<temp<<" ";
    }
    cout<<endl;
}

int main() {
    stack s;
    char huruf;
    int pilihan;
    
    createStack(s);
    
    while(1){
        cout<<"1. Input huruf"<<endl;
        cout<<"2. Reverse huruf"<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"Pilih menu: "; cin>>pilihan;
        
        switch(pilihan){
            case 1:
                cout<<"Masukkan satu huruf: "; cin>>huruf;
                cout<<endl;
                push(s, huruf);
                break;
                
            case 2:
                cout<<"Reverse huruf"<<endl<<endl;
                print(s);
                break;
                
            case 3:
                return 0;
                break;
        }
    }
}
