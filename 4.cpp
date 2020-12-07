#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> mala_slova(26,0);
    vector<int> velika_slova(26,0);

    string rec;
    int maxmala=0;
    int maxvelika=0;
    while(cin >> rec){
        for(char c : rec){
            if(c>='a' && c<='z'){
                mala_slova[c-'a']++;
                if(mala_slova[c-'a']>maxmala){
                    maxmala=mala_slova[c-'a'];
                }
            }else{
                velika_slova[c-'A']++;
                if(velika_slova[c-'A']>maxvelika){
                    maxvelika=velika_slova[c-'A'];
                }
            }
        }
    }

    for(int i=0; i<26; i++){
        if(maxmala>0 && mala_slova[i]==maxmala){
            cout << (char)('a'+i);
        }
    }
    cout << endl;
    for(int i=0; i<26;i++){
        if(maxvelika>0 && velika_slova[i]==maxvelika){
            cout << (char)('A'+i);
        }

    }
    cout << endl;



    return 0;
}
