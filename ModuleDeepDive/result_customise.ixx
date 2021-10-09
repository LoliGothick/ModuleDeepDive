export module Result:Customise;

import Maybe.def;
import Result.def;

export namespace mitama {
  template <class T, class E>
  auto transpose(result<maybe<T>, E>) -> maybe<result<T, E>>
  {
    return {};
  }
}
