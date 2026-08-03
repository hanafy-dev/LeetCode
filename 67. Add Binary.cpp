class Solution {
public:
    string addBinary(string a, string b) {
        if(a.size() < b.size()){
            swap(a, b);
        }
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        while(i >= 0 || carry > 0){
            int sum = carry;
            if(i >= 0){
                sum += (a[i] - '0');
            }
            if(j >= 0){
                sum += (b[j--] - '0');
            }
            carry = sum / 2;
            if(i >= 0){
                a[i--] = (sum%2) + '0';
            }
            else{
                a.insert(a.begin(), '1');
                carry = 0;
            }
        }
        return a;
    }
};