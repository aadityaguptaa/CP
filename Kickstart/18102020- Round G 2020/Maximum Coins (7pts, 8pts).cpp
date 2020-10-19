int main(void){
    long long int t;
    cin >> t;
    for(long long int i = 0; i < t; i++){
        long long int n;
        cin >> n;
        long long int arr[n][n];
        for(long long int r = 0; r < n; r++){
            for(long long int c = 0; c < n; c++){
                cin >> arr[r][c];
            }
        }
        vector<long long int> sum;
        
            for(long long int j = 0; j < n; j++){
                long long int tempSum = 0;
                long long int k = 0;
                while(k < n - j){
                    tempSum += arr[j+k][k];
                    k++;
                }
                sum.push_back(tempSum);
            }
            for(long long int j = 1; j < n; j++){
                long long int tempSum = 0;
                long long int k = 0;
                while(k < n - j){
                    tempSum += arr[k][j+k];
                    k++;
                }
                sum.push_back(tempSum);
            }
        cout << "Case #" << i+1 << ": " << *max_element(sum.begin(), sum.end()) << endl;
        
        
    }
}
