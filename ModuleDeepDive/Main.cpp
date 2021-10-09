import Maybe;
import Result;
#include <concepts>

int main() {
  using namespace mitama;
  { std::same_as<result <maybe<int>, int>> auto _ = maybe<result<int, int>>{}.transpose(); }
  { std::same_as<maybe<result<int, int>>> auto _ = result <maybe<int>, int>{}.transpose(); }
}
