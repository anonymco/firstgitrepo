//
//  main.cpp
//  1.2
//
//  Created by anonym_co on 2018/3/20.
//  Copyright © 2018年 anonym_co. All rights reserved.
//

#include <iostream>
#include<vector>
using namespace std;
int main(int argc, const char * argv[])
{
    vector<float>nums;
    vector<float>origin;
    float f1=0;
    cout<<"put some float numbers"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>f1;
        nums.push_back(f1*f1);
        origin.push_back(f1);
    }
    for(int i=0;i<5;i++)
        cout<<origin[i]<<" ";
    cout<<endl;
    for(int i=0;i<5;i++)
        cout<<nums[i]<<" ";
    return 0;
}
