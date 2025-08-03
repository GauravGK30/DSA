#include<bits/stdc++.h>
#include<string>
using namespace std;
//permutation
bool isFreqSame(int freq1[26], int freq2[26]){
    for(int i=0;i<26;i++){
        if(freq1[i] != freq2[i]){
            return false;
        }
    }
    return true;
}

bool checkInclusion(string s1,string s2){
    int freq[26]={0};
    int windFreq[26]={0};

    for(int i=0;i<s1.length();i++){
        int idx = s1[i] - 'a';
        freq[idx]++;
    }

    int windSize = s1.length();
    for (int i = 0; i < windSize; i++){

        windFreq[s2[i] - 'a']++;
    }
    for (int i = windSize; i < s2.length(); i++) {
        if (isFreqSame(freq, windFreq)) return true;

        windFreq[s2[i] - 'a']++;                 // add new char
        windFreq[s2[i - windSize] - 'a']--;      // remove old char
    }

    return isFreqSame(freq, windFreq);


    // for(int i=0;i<s2.length();i++){
    //     int winIdx =0, idx=1;
    //     int windFreq[26]={0};
    //     while(winIdx < windSize && idx < s2.length()){
    //         windFreq[s2[idx]-'a']++;
    //         idx++;
    //         winIdx++;
    //     }

    //     if( isFreqSame(freq,windFreq)){
    //         return true;
    //     }
    // }
    return false;
};

int main(){

    string s1="ab";
    string s2="eidbaooo";
    cout << (checkInclusion(s1, s2) ? "true" : "false");


}