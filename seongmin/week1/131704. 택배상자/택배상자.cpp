#include string
#include vector

using namespace std;

int solution(vectorint order) {
    int answer = 0;
    vectorint box;
    int current = 1;

    for (int i = 0; i  order.size(); i++) {
        int target = order[i];
        
        while (current = target) {
            box.push_back(current);
            current++;
        }

        if (!box.empty() && box.back() == target) {
            box.pop_back();
            answer++;
        } else {
            break;
        }
    }

    return answer;
}
