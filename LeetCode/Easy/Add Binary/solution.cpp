class Solution {
public:
    string addBinary(string a, string b) {
    int carry=0;
    string res="";
    int n1=a.size()-1;
    int n2=b.size()-1;

    while( n1>=0 && n2>=0 ){
        int c1 = (a[n1] - '0') + (b[n2] - '0') + carry;
    // c1 % 2 gives current bit, c1 / 2 gives the carry
        res.insert(0, to_string(c1 % 2));
        carry = c1 / 2;
        n1--;n2--;
    }
    while(n1>=0){
        int c1 = (a[n1] - '0') + carry;
        res.insert(0, to_string(c1 % 2));
        carry = c1 / 2;
        n1--;
    }
    while(n2>=0){
        int c1 = (b[n2] - '0') + carry;
        res.insert(0, to_string(c1 % 2));
        carry = c1 / 2;
        n2--;
    }
    if(carry==1) {res.insert( 0, "1" );}
    return res;
    }
};