#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h> 
#include <vector>
using namespace std;


int main(){
    
    int timem;
    int timema;
    int task;
    int sorters;
    int temp;
    int total;
    int time;
    int randz;
    cout << "tasks: ";
    cin >> task;
    cout << "time min: ";
    cin >> timem;
    cout << "time max: ";
    cin >> timema;
    cout << "sorters: ";
    cin >> sorters;
    cout << "rand num: ";
    cin >> randz;

    srand(randz);

    temp = task/sorters;
    time = timema - timem;
    int sort[sorters];

    for (int i = 0; i < sorters; ++i){
        total = 0;
        for (int j = 0; j < temp; ++j){
            total = total + rand()%time + timem;
        }
        sort[i] = total;
    }

    cout <<"incrementally assign tasks" << endl;

    for (int i = 0; i < sorters; ++i){
        cout << "sorter " << i+1 << ": " << sort[i] << endl;
    }

    
    vector<int> tasks(sorters, 0);
    unsigned which;
    for(int i = 0; i < task; ++i){
        which = rand()%10;
        tasks.at(which) += (rand()%time + timem);
    }

    cout << "random assign" << endl;

    for (int i = 0; i < sorters; ++i){
        cout << "sorter " << i+1 << ": " << tasks.at(i) << endl;
    }

}