module;
#include <utility>
export module Maybe.def;

namespace mitama {
  namespace customisation_point::maybe {
    template <class T>
    auto _transpose(T&& may) {
      return transpose(std::forward<T>(may));
    }
  }

  export template <class T>
  struct maybe {
    auto transpose() {
      return customisation_point::maybe::_transpose(*this);
    }
  };
}

export namespace mitama {
  template <auto _ = false>
  void transpose(...) {
    static_assert(_, "DO NOT IMPORT `Maybe.def`, PLEASE IMPORT `Maybe` INSTEAD.");
  }
}
