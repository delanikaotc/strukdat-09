/*
 Nama Program : Exercise-02
 Nama         : Delanika Olympiani
 NPM          : 140810180026
 Kelas        : B
 Tahun        : 2019
 Deskripsi    : Membalikkan sebuah kata menggunakan stack dengan linked list
 */

#include <iostream>

using namespace std;

const int maxElemen = 255;
struct stack{
    char isi[maxElemen];
    stack* next;
};
typedef stack* pointer;
typedef pointer list;

void createStack(list& top){
    top = NULL;
}

void createElemen(pointer& pBaru){
    pBaru = new stack;
    cout<<"Masukan satu huruf: "; cin>>pBaru->isi;
    pBaru->next = NULL;
    cout<<endl;
}

void push(list& top, pointer& pBaru){
    if (top == NULL){
        top = pBaru;
    }
    else{
        pBaru->next = top;
        top = pBaru;
    }
}

void pop(list& top, pointer& pHapus){
    if (top == NULL){
        cout<<"The stack is empty!"<<endl;
    }
    else if (top->next = NULL){
        pHapus = top;
        top = NULL;
    }
    else{
        pHapus = top;
        top = top->next;
        pHapus->next = NULL;
    }
}

void print(list top){
   pointer temp;
   while (top != NULL){
      temp = top;
      cout<<temp->isi;
      top=top->next;
   }
   cout<<endl;
}

int main() {
   list s;
   pointer p;
   int pilihan;
          
   createStack(s);
          
   while(1){
      cout<<"1. Input huruf"<<endl;
      cout<<"2. Reverse huruf"<<endl;
      cout<<"3. Exit"<<endl;
      cout<<"Pilih menu: "; cin>>pilihan;
      
      switch(pilihan){
         case 1:
            cout<<"Input huruf"<<endl;
            createElemen(p);
            push(s, p);
            break;
         
         case 2:
            cout<<"Reverse huruf"<<endl;
            print(s);
            cout<<endl;
            break;
            
         case 3:
            return 0;
            break;
      }
   }
}

