#include<iostream>
#include<vector>
#include<cmath>
#include<chrono>
using namespace std;


int main(){

    int n; cin >> n;

    int choice;
    int remove = -1;

    int switched = 0;
    int noSwitch = 0;

    auto start = std::chrono::high_resolution_clock::now();

    for(int i = 0; i < n; i++){

        vector<int> doors = {0,0,0};
        doors[rand()%3] = 1;
        for(auto i : doors) cout << i <<" ";
        choice = rand()%3;
        while(doors[remove] != 0){
            remove = rand()%3;
        }
        doors[remove] = -1;
        
        if(doors[choice] == 1) noSwitch++; else switched++;
        doors.clear();
        cout << endl << "choice: " << choice +1 << endl;
        cout <<"noswitch: " << noSwitch << " | switch "<< switched << endl;
        cout << endl;
    }

    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Elapsed time: " << elapsed.count() << " s\n";
   
}