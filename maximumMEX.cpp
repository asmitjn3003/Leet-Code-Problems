int maximumMEX(vector<int> arr, int x) {
    vector<int> ctModX(x, 0);
    for (auto& num: arr) {
        ctModX[num % x]++;
    }
    
    int ret = 0;
    while (ctModX[ret % x] > 0) {
        ctModX[ret % x]--;
        ret++;
    }
    return ret;
}
