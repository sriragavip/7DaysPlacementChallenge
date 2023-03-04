#include<algorithm>

int maxTeams(int n, string s){
    int x = 0, y = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == '0'){
            x++;
        }
        else{

            y++;
        }
    }
    return min(x,y);
} 