class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int size = board.size();
        for(int i = 0; i < size ; i ++){
            unordered_map<char , int>freq;
          for(int j = 0 ; j < size ; j ++){
            char value = board[i][j];
             if(board[i][j] != '.'){
                freq[value]++;
                if(freq[value] > 1 ){
                    return false;
                }

             }
          }
        }
        for(int j = 0;j<size;j++){
           unordered_map<char , int>freq;
           for(int i = 0 ; i < size; i ++){
            char value = board[i][j];
             if(value != '.'){
                freq[value]++;
                if(freq[value] > 1 ){
                    return false;
                }
           }
        }
    }
    for(int i = 0 ; i < size ; i+=3){
        for(int j = 0 ; j < size; j+=3){
          unordered_map<char , int>freq;  
          for(int r = 0 ; r< 3;r++){
            for(int c = 0 ; c<3;c++){
                char value = board[r+i][c+j];
                if(value != '.'){
                    freq[value]++;
                    if(freq[value] > 1){
                        return false;
                    }
                }
            }
          }
        }
    }
    return true;

    }   
};
