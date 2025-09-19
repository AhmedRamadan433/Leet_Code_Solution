class Spreadsheet {
public:
    vector<vector<int> > v;


    Spreadsheet(int rows) {
        v.resize(rows, vector<int>(27, 0));
    }

    void setCell(string cell, int value) {
        int index = stoi(cell.substr(1))-1;
        char ch = cell[0];
        v[index][ch - 'A'] = value;
    }

    void resetCell(string cell) {
        int index = stoi(cell.substr(1))-1;
        char ch = cell[0];
        v[index][ch - 'A'] = 0;
    }

 int getValue(string formula) {
    int idx = formula.find('+');
    string left = formula.substr(1, idx - 1); 
    string right = formula.substr(idx + 1);   

    int v1, v2;

    if (isalpha(left[0])) { 
        int row = stoi(left.substr(1)) - 1;
        int col = left[0] - 'A';
        v1 = v[row][col];
    } else { 
        v1 = stoi(left);
    }

    if (isalpha(right[0])) {
        int row = stoi(right.substr(1)) - 1;
        int col = right[0] - 'A';
        v2 = v[row][col];
    } else {
        v2 = stoi(right);
    }

    return v1 + v2;
}

};
