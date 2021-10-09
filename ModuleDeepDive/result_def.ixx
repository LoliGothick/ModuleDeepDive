module;
#include <utility>
export module Result.def;

namespace mitama {
  namespace customisation_point::result {
    template <class T>
    auto _transpose(T&& res) {
      return transpose(std::forward<T>(res));
    }
  }

  export template <class T, class E>
  struct result {
    auto transpose() {
      return customisation_point::result::_transpose(*this);
    }
  };

}

export namespace mitama {
  template <auto _ = false>
  void transpose(...) {
    static_assert(_, "DO NOT IMPORT `Result.def`, PLEASE IMPORT `Result` INSTEAD.");
  }
}
