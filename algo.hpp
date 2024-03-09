#include <cmath>
#include <unordered_map>

using std::unordered_map;
using std::pair;

class memo_table {
  public:
    bool &operator[] (int i) {
        map[i].first++;
        return map[i].second;
    }

  private:
    unordered_map<int, pair<int, bool>> map;
};



bool is_prime(int n)
{
    for (int i = 2; i <= std::sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}
