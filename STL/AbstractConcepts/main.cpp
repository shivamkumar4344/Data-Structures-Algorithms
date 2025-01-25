#include<iostream>
#include "bird.h"
using namespace std;

void birdFun(Bird* &bird){
    bird->eat();
    bird->fly();
    bird->eat();
}

int main(){

    Bird *bird = new eagle();
    birdFun(bird);
    return 0;

}