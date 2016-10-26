// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\UnoCore\0.38.2\source\uno\runtime\implementation\shaderbackends\opengl\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{struct GLException;}}}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{
namespace ShaderBackends{
namespace OpenGL{

// public sealed extern class GLException :621
// {
::g::Uno::Exception_type* GLException_typeof();
void GLException__ctor_3_fn(GLException* __this, uString* message);
void GLException__New4_fn(uString* message, GLException** __retval);

struct GLException : ::g::Uno::Exception
{
    void ctor_3(uString* message);
    static GLException* New4(uString* message);
};
// }

}}}}}} // ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL
