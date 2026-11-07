class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int countB = 0,countA = 0,countL = 0,countO = 0,countN = 0;
        for(char ch : text)
        {
            if(ch == 'b')
                countB++;
            if(ch == 'a')
                countA++;
            if(ch == 'l')
                countL++;
            if(ch == 'o')
                countO++;
            if(ch == 'n')
                countN++;
        }
        return min({countB,countA,countL/2,countO/2,countN});
    }

};