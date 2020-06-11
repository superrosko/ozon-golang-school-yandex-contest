#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int len;
    int sum;
    int temp;
    int target;
    int indexLeft;
    int indexRight;
    std::vector<int> data;

    ifstream fileInput("input.txt");
    fileInput >> target;
    while (fileInput >> temp) {
        if (temp < target) {
            data.push_back(temp);
        }
    }
    fileInput.close();
    std::sort(data.begin(), data.end());
    len = data.size();
    ofstream fileOutput("output.txt");
    if (len != 0) {
        indexLeft = 0;
        indexRight = len - 1;
        while (indexLeft != indexRight) {
            sum = data[indexLeft] + data[indexRight];
            if (sum < target) {
                indexLeft++;
            } else if (sum > target) {
                indexRight--;
            } else {
                fileOutput << 1;
                fileOutput.close();
                return 0;
            }
        }
    }
    fileOutput << 0;
    fileOutput.close();
    return 0;
}
