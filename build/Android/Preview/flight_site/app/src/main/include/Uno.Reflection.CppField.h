// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\UnoCore\0.38.2\source\uno\reflection\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Reflection.IField.h>

namespace g{
namespace Uno{
namespace Reflection{

// public extern struct CppField :34
// {
struct CppField_type : uStructType
{
    ::g::Uno::Reflection::IField interface0;
};

CppField_type* CppField_typeof();
void CppField__GetValue_fn(uField** __this, uObject* obj, uObject** __retval);
void CppField__get_IsNull_fn(uField** __this, bool* __retval);
void CppField__get_Name_fn(uField** __this, uString** __retval);
void CppField__get_Null_fn(uField** __retval);
void CppField__SetValue_fn(uField** __this, uObject* obj, uObject* value);

struct CppField
{
    static uObject* GetValue(uField* __this, uObject* obj);
    static bool IsNull(uField* __this);
    static uString* Name(uField* __this);
    static void SetValue(uField* __this, uObject* obj, uObject* value);
    static uField* Null();
};
// }

}}} // ::g::Uno::Reflection
