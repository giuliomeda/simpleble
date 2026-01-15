#include <simpleble/Config.h>

namespace SimpleBLE {
namespace Config {
    namespace SimpleBluez {
        bool use_legacy_bluez_backend = true;
        std::chrono::steady_clock::duration connection_timeout = Defaults::k_default_connection_timeout;
        std::chrono::steady_clock::duration disconnection_timeout = Defaults::k_default_disconnection_timeout;
    }  // namespace SimpleBluez

    namespace WinRT {
        bool experimental_use_own_mta_apartment = true;
        bool experimental_reinitialize_winrt_apartment_on_main_thread = false;
    }  // namespace WinRT

    namespace Android {
        ConnectionPriorityRequest connection_priority_request = ConnectionPriorityRequest::DISABLED;
    }  // namespace Android

    namespace Dongl {
        bool use_dongl_backend = false;
    }  // namespace Dongl

}  // namespace Config
}  // namespace SimpleBLE