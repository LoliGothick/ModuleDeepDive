export module Maybe:Customise;

import Maybe.def;
import Result.def;

export namespace mitama {
  template <class T, class E>
  auto transpose(maybe<result<T, E>>) -> result<maybe<T>, E>
  {
    return {};
  }
  template <class T>
  void transpose(T&&)
  {
    static_assert(
      [] { return false; }(),
      "`maybe<T>::transpose` can be used if and only if `T` is a `result<_, _>`.");
  }
}
