// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\UnoCore\0.38.2\targets\android\uno\base\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.JNI.h>
#include <android/log.h>
#include <jni.h>
#include <Uno.h>
#include <XliPlatform/PlatformSpecific/Android.h>
namespace g{namespace Android{namespace Base{namespace Types{struct Arrays;}}}}

namespace g{
namespace Android{
namespace Base{
namespace Types{

// public static extern class Arrays :934
// {
uClassType* Arrays_typeof();
void Arrays__JavaToUnoByteArray1_fn(jobject* arr_, int64_t* len_, uArray** __retval);

struct Arrays : uObject
{
    static uArray* JavaToUnoByteArray1(jobject arr_, int64_t len_);
};
// }

}}}} // ::g::Android::Base::Types
