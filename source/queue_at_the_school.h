#include<iostream>
using namespace std;
//Link: https://codeforces.com/problemset/problem/266/B?locale=en


void boyAndGirlToNumb(int* queue, int len){
    for(int i = 0; i < len; i++){
        if(queue[i] == 'B'){
            queue[i] = 1;
        }
        else{
            queue[i] = -1;
        }
    }
}

void NumbToGirlAndBoy(int* queue, int len){
    for(int i = 0; i < len; i++){
        if(queue[i] > 0){
            queue[i] = 'B';
        }
        else{
            queue[i] = 'G';
        }
    }
}

void replaceBoyAndGirl(int* queue, int len, int time){
    for(int i = 0 ; i < len -1; i++){
        if (queue[i] > 0 && queue[i] < time + 1){
            queue[i]++;
            if(queue[i + 1] < 0){
                queue[i+1] = queue[i];
                queue[i] = -1;
            }
        }
    }
}

int main() {
    int len, times;
    char* string = new char[len];
    cin >> len >> times >> string;
    int* boyAndGirls = new int[len];
    for (int i = 0; i < len; i++){
        boyAndGirls[i] = string[i];
    }
    boyAndGirlToNumb(boyAndGirls, len);
    for(int time = 1; time<= times; time++){
        replaceBoyAndGirl(boyAndGirls, len, time);
    }
    NumbToGirlAndBoy(boyAndGirls, len);
    for(int pupil = 0; pupil < len;  pupil++){
        cout << (char)boyAndGirls[pupil];
    }

}