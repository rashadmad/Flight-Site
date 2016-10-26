// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Fuse.Android\0.38.6\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct AndroidProperties;}}

namespace g{
namespace Fuse{

// public static extern class AndroidProperties :641
// {
uClassType* AndroidProperties_typeof();
void AndroidProperties__get_BuildVersion_fn(int* __retval);
void AndroidProperties__GetBuildVersion_fn(int* __retval);
void AndroidProperties__GetReleaseVersion_fn(uString** __retval);
void AndroidProperties__get_ReleaseVersion_fn(uString** __retval);

struct AndroidProperties : uObject
{
    static int GetBuildVersion();
    static uString* GetReleaseVersion();
    static int BuildVersion();
    static uString* ReleaseVersion();
};
// }

}} // ::g::Fuse
