// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Fuse.Controls.Video\0.38.6\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.VideoSource.h>
namespace g{namespace Fuse{namespace Controls{struct UrlVideoSource;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class UrlVideoSource :108
// {
uType* UrlVideoSource_typeof();
void UrlVideoSource__ctor_1_fn(UrlVideoSource* __this);
void UrlVideoSource__New1_fn(UrlVideoSource** __retval);
void UrlVideoSource__get_Url_fn(UrlVideoSource* __this, uString** __retval);
void UrlVideoSource__set_Url_fn(UrlVideoSource* __this, uString* value);

struct UrlVideoSource : ::g::Fuse::Controls::VideoSource
{
    uStrong<uString*> _url;

    void ctor_1();
    uString* Url();
    void Url(uString* value);
    static UrlVideoSource* New1();
};
// }

}}} // ::g::Fuse::Controls
