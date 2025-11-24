#include <iostream>
#include <string>
#include <unordered_map>
#include <utility> 

using namespace std;

int main() {
    unordered_map<char, pair<int, int>> entry_indices;
    string arrangement;
    if (!(cin >> arrangement)) {
        return 1;
    }

    for (int i = 0; i < arrangement.size(); i++) {
        char cow = arrangement.at(i);
        
        if (entry_indices.find(cow) == entry_indices.end()) {
            entry_indices[cow] = {i, -1};
        } else {
            entry_indices[cow].second = i;
        }
    }

    int count = 0;

    for (const auto& pair1 : entry_indices) {
        char cow1 = pair1.first;
        int start1 = pair1.second.first;
        int end1 = pair1.second.second;

        for (const auto& pair2 : entry_indices) {
            char cow2 = pair2.first;
            
            if (cow1 == cow2) {
                continue;
            }
            
            int start2 = pair2.second.first;
            int end2 = pair2.second.second;

            if (cow1 < cow2) { 
                
                bool cow1_inside_cow2_start = (start1 > start2 && start1 < end2);
                bool cow1_inside_cow2_end = (end1 > start2 && end1 < end2);

                if (cow1_inside_cow2_start != cow1_inside_cow2_end) {
                    count++;
                }
            }
        }
    }

    cout<<count;
    return 0;
}