// n meetings in one room 
// given n number of meetings' start and end times, compute which of the meetings are to be held 
// so as to make sure that maximum meetings can take place 

// Somdev Basu
// Circa '99


#include <bits/stdc++.h>

using namespace std;

struct meeting {
    int start;
    int end;
    int pos; // records the position of the meeting 
};

bool comparator(struct meeting m1, struct meeting m2) {
    if(m1.end < m2.end) return true;
    else if(m1.end > m2.end) return false;
    else if(m1.pos < m2.pos) return true;
    return false;
}

void maxMeetings(int s[], int e[], int n) {
    struct meeting meets[n];
    for(int i = 0; i < n; i++) {
        meets[i].start = s[i];
        meets[i].end = e[i];
        meets[i].pos = i + 1; // 1 based positioning
    }
    sort(meets, meets+n, comparator);
    vector<int> answer;
    int limit = meets[0].end; // initial limit of each meeting 
    answer.push_back(meets[0].pos);
    for(int i = 1; i < n; i++) {
        if(meet[i].start > limit){
            limit = meet[i].end;
            answer.push_back(meet[i].pos);
        }
    }    
    for(int i = 1; i < answer.size(); i++) {
        cout << answer[i] << "\t";
    }
}



