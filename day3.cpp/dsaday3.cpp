class Solution {
    public:
        int numEquivDominoPairs(vector<vector<int>>& dominoes) {
            for(auto &d:dominoes){
                sort(d.begin(), d.end());
            }
            sort(dominoes.begin(), dominoes.end());
            int count=0;
            int cons=1;
            for(int i=1; i<dominoes.size();i++){
                if(dominoes[i]==dominoes[i-1]){
                    count=count+cons;
                    cons++;
                }
                else{
                    cons=1;
                }
            }
            return count;
            
        }
    };



    class Solution {
        public:
            vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
                int n=image.size();
                for(int i=0; i<n;i++){
                    int j=0;
                    int k=image[i].size()-1;
                    while(j<=k){
                        if(j!=k){
                        swap(image[i][j], image[i][k]);
                        
                        image[i][j]=image[i][j]^1;
                        image[i][k]=image[i][k]^1;}
                        else{
                            image[i][j]=image[i][j]^1;
                        }
                        
                        
        
                        j++;
                        k--;}
                        
        
                    }
                    
                
                return image;
                
            }
        };