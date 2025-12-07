//Author : https://leetcode.com/u/fmfuad/
//Title : Design Spreadsheet.cpp
//Submission id : 1848389897
//Problem url : https://leetcode.com/problems/design-spreadsheet/
//Submission url : https://leetcode.comhttps://leetcode.com/submissions/detail/1848389897/


class Spreadsheet {
public:
    map<char, vector<int>> sheet;

    Spreadsheet(int rows) {
        vector<int> tmp(rows);
        for(char ch='A'; ch<='Z'; ch++){
            sheet[ch] = tmp;
        }
    }
    
    void setCell(string cell, int value) {
        int index = stoi(cell.substr(1, cell.size()-1))-1;
        sheet[cell[0]][index] = value;
    }

    
    void resetCell(string cell) {
        int index = stoi(cell.substr(1, cell.size()-1))-1;
        sheet[cell[0]][index] = 0;
    }
    
    int getValue(string formula) {
        bool f=false,s=false, o=false;string tmp="", tmp2="";int i=1;
        while(i<formula.size()){
            if (isalpha((unsigned char)formula[i])) o ? (s=true, tmp2+=formula[i]) : (f=true, tmp+=formula[i]);
            else if (formula[i] != '+') o ? tmp2+=formula[i] : tmp+=formula[i];
            else o = true;
            i++;
        }
        int r1, r2;
        (f)? (r1=sheet[tmp[0]][stoi(tmp.substr(1, tmp.size()-1))-1]) : (r1=stoi(tmp));
        (s)? (r2=sheet[tmp2[0]][stoi(tmp2.substr(1, tmp2.size()-1))-1]) : (r2=stoi(tmp2));
        return r1+r2;
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */
