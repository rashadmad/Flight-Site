// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Fuse.Controls.WebView\0.38.6\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{

// internal abstract interface BufferedWebViewCall :379
// {
uInterfaceType* BufferedWebViewCall_typeof();

struct BufferedWebViewCall
{
    void(*fp_Apply)(uObject*, uObject*);
    static void Apply(const uInterface& __this, uObject* wv) { __this.VTable<BufferedWebViewCall>()->fp_Apply(__this, wv); }
};
// }

}}} // ::g::Fuse::Controls
