// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Fuse.Elements\0.38.6\resources\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Resources{struct HttpImageSourceCache;}}}
namespace g{namespace Fuse{namespace Resources{struct HttpImageSourceImpl;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{struct WeakReference;}}

namespace g{
namespace Fuse{
namespace Resources{

// internal static class HttpImageSourceCache :341
// {
uClassType* HttpImageSourceCache_typeof();
void HttpImageSourceCache__GetUrl_fn(uString* url, ::g::Fuse::Resources::HttpImageSourceImpl** __retval);

struct HttpImageSourceCache : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _cache_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _cache() { return HttpImageSourceCache_typeof()->Init(), _cache_; }

    static ::g::Fuse::Resources::HttpImageSourceImpl* GetUrl(uString* url);
};
// }

}}} // ::g::Fuse::Resources
