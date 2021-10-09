export module Maybe:Customise;

import Maybe.def;
import Result.def;

export namespace mitama {
  template <class T, class E>
  auto transpose(maybe<result<T, E>>) -> result<maybe<T>, E>
  {
    return {};
  }
}
