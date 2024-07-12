/**
 * 4153: 직각삼각형
 * 주어진 세 변의 길이로 삼각형의 직각 여부 판단
 * 맞으면 "right", 아니면 "wrong" 출력
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> inputs(3);
    vector<string> results;

    while (1) {
        for (int i = 0; i < 3; i++) {
            cin >> inputs[i];
        }
        if (inputs[0] == 0 && inputs[1] == 0 && inputs[2] == 0) break;

        // 가장 긴 변의 길이
        sort(inputs.begin(), inputs.end());

        if (inputs[0]*inputs[0] + inputs[1]*inputs[1] == inputs[2]*inputs[2]) {
            // 직각인 경우
            results.push_back("right");
        } else {
            // 직각이 아닌 경우
            results.push_back("wrong");
        }
    }

    // 전체 요소 출력
    for (int i = 0; i < results.size(); i++) {
        cout << results[i] << endl;
    }

    return 0;
}