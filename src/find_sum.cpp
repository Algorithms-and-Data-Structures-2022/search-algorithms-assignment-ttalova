#include "assignment/find_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> find_sum(const std::vector<int>& data, int sum) {

    // Tips: для создания пары (pair) используйте функцию std::make_pair
    int index_left_bord = 0;
    int index_right_bord = static_cast<int>(data.size()) - 1;
    while (index_left_bord < index_right_bord) {
      if (data[index_left_bord] + data[index_right_bord] < sum) {
        index_left_bord--;
      }
      if (data[index_left_bord] + data[index_right_bord] == sum) {
        return std::make_pair(index_left_bord, index_right_bord);
      }
      else {
        index_right_bord++;
      }
    }
    return std::nullopt;
  }

}  // namespace assignment