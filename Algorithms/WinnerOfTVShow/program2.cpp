#include "CustomHeap.h"
using namespace std;

/* 
I have done this assignment completely on my own. I have not
copied it, nor have I given my solution to anyone else. I understand that if I am involved
in plagiarism or cheating I will have to sign an official form to admit that I have cheated
and that this form will be stored in my official university record. I also understand that I
will receive a grade of 0 for the involved assignment for the first offense and that I will
receive a grade of “F” for the course for any additional offense
*/


int main(int argc, char* argv[]){ 
    CustomHeap m1 = *new CustomHeap(argv[1], argv[2]);
    m1.startGame();
}