export module Result:Customise;

import Maybe.def;
import Result.def;

export namespace mitama {
  template <class T, class E>
  auto transpose(result<maybe<T>, E>) -> maybe<result<T, E>>
  {
    return {};
  }
  template <class T>
  void transpose(T&&)
  {
    static_assert(
      [] { return false; }(),
      "`result<T, E>::transpose` can only be used if and only if `T` is a `maybe<_>`.");
  }
}
