#include <iostream>
#include <vector>

using namespace std;






int count(string s)
{
    vector<int>count9;
    vector<int>count7;
    vector<int>count0;
    vector<int>count6;
    int  len = s.size();
    for(int i=0;i<len;i++)
    {
        if(s[i]=='9') count9.push_back(i);
        if(!count9.empty() && s[i]=='7' && i>*(count9.end()-1)){ count7.push_back(i);count9.erase(count9.end()-1);}
        if(!count7.empty() && s[i]=='0'&& i>*(count7.end()-1)) {count0.push_back(i);count7.erase(count7.end()-1);}
        if(!count0.empty() && s[i]=='6'&& i>*(count0.end()-1)) {count6.push_back(i);count0.erase(count0.end()-1);}
    }

    return count6.size();


}











int main()
{
   /*string line1 ="6097";
   string line2 ="97069706";
   string line3 ="997776600069";
   string line4="123901370997606";
   string line5="9706706";

   cout<<count(line1)<<endl;
   cout<<count(line2)<<endl;
   cout<<count(line3)<<endl;
   cout<<count(line4)<<endl;
   cout<<count(line5)<<endl;
   */
   string line;
   int n =0;
   cin>>n;
   vector<int>res;
   for(int i=0;i<n;i++){
    cin>>line;
    res.push_back(count(line));
   }


   for(int p:res)
    cout<<p<<endl;

   return 0;
}
