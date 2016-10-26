// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Fuse.Controls.Native\0.38.6\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.INativeViewRenderer.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface IOffscreenRenderer :497
// {
uInterfaceType* IOffscreenRenderer_typeof();

struct IOffscreenRenderer
{
    void(*fp_DisableOffscreen)(uObject*);
    void(*fp_EnableOffscreen)(uObject*);
    static void DisableOffscreen(const uInterface& __this) { __this.VTable<IOffscreenRenderer>()->fp_DisableOffscreen(__this); }
    static void EnableOffscreen(const uInterface& __this) { __this.VTable<IOffscreenRenderer>()->fp_EnableOffscreen(__this); }
};
// }

}}}} // ::g::Fuse::Controls::Native
