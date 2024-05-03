class Solution {
public:
    int compareVersion(string version1, string version2) {
    
        int i=0,j=0;
        int x=0,y=0;
        while(i<version1.size() || j<version2.size())
        {
            while(i< version1.size() && version1[i]!='.')
            {
                x=10*x+(version1[i++]-'0');
            }
            while(j< version2.size() && version2[j]!='.')
            {
                y=10*y+(version2[j++]-'0');
            }
            if(x>y) return 1;
            else if(x<y) return -1;
            x=0;y=0;
            i++;j++;
        }
        return 0; 






        //     string v1="";
    //     string v2="";
    //     //remove all dot from ver1 and ver2
        
    //     //chech leftsize 0;
    //     int count1=0,count2=0;
    //     for(int i=version1.size()-1;i>=0;i--)
    //     {
    //         if(version1[i]=='0')
    //         {
    //             count1++;
    //         } else break;
    //     }
    //     for(int i=version2.size()-1;i>=0;i--)
    //     {
    //         if(version2[i]=='0')
    //         {
    //             count2++;
    //         } else break;
    //     }
    //     version1.erase(remove(version1.begin(), version1.end(),'0'),version1.end()-count1);

        
    //     version2.erase(remove(version2.begin(), version2.end()-count2,'0'),version2.end()-count2);

    //     version1.erase(remove(version1.begin(), version1.end(),'.'),version1.end());
    //     version2.erase(remove(version2.begin(), version2.end(),'.'),version2.end());


    //     cout<<version1<<endl;
    //     cout<<version2<<endl;

    //     int n=version1.size()> version2.size()?version1.size():version2.size();
    //     // for(int i=0;i<n;i++)
    //     // {
    //     //     // if(version[i]==version[i])
    //     //     // {
    //     //     //     continue;
    //     //     // }
    //     //     if(version1[i]>version2[i])
    //     //     return 1;
    //     //     else if(version1[i]<version2[i])
    //     //     return -1;
    //     // }

    //     if(count1==0 && count2==0)
    //     {
    //         if(version1==version2) return 0;
    //         else if(version1>version2) return 1;
    //         else return -1;
    //     }

    //    if(version1.size()==version2.size()) return 0;
    //    else if(version1.size()> version2.size()) return 1;
    //    else return -1;

        

        
    }
};