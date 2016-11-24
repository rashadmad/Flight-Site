// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\UnoCore\0.38.2\source\uno\graphics\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Recti.h>
#include <Uno/GraphicsContext.h>
namespace g{namespace Uno{namespace Graphics{struct GraphicsContext;}}}
namespace g{namespace Uno{namespace Graphics{struct RenderTarget;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Uno{
namespace Graphics{

// public sealed class GraphicsContext :360
// {
uType* GraphicsContext_typeof();
void GraphicsContext__ctor__fn(GraphicsContext* __this);
void GraphicsContext__get_Backbuffer_fn(GraphicsContext* __this, ::g::Uno::Graphics::RenderTarget** __retval);
void GraphicsContext__Clear_fn(GraphicsContext* __this, ::g::Uno::Float4* color, float* depth);
void GraphicsContext__ForceResetState_fn(GraphicsContext* __this);
void GraphicsContext__New1_fn(GraphicsContext** __retval);
void GraphicsContext__get_RenderTarget_fn(GraphicsContext* __this, ::g::Uno::Graphics::RenderTarget** __retval);
void GraphicsContext__get_Scissor_fn(GraphicsContext* __this, ::g::Uno::Recti* __retval);
void GraphicsContext__set_Scissor_fn(GraphicsContext* __this, ::g::Uno::Recti* value);
void GraphicsContext__SetRenderTarget_fn(GraphicsContext* __this, ::g::Uno::Graphics::RenderTarget* renderTarget);
void GraphicsContext__SetRenderTarget1_fn(GraphicsContext* __this, ::g::Uno::Graphics::RenderTarget* renderTarget, ::g::Uno::Recti* viewport, ::g::Uno::Recti* scissor);
void GraphicsContext__UpdateBackbuffer_fn(GraphicsContext* __this);
void GraphicsContext__get_Viewport_fn(GraphicsContext* __this, ::g::Uno::Recti* __retval);
void GraphicsContext__set_Viewport_fn(GraphicsContext* __this, ::g::Uno::Recti* value);

struct GraphicsContext : uObject
{
    uStrong< ::g::Uno::Graphics::RenderTarget*> _backbuffer;
    uGraphicsContext _handle;
    uStrong< ::g::Uno::Graphics::RenderTarget*> _renderTarget;
    ::g::Uno::Recti _scissor;
    bool _scissorEnabled;
    ::g::Uno::Recti _viewport;

    void ctor_();
    ::g::Uno::Graphics::RenderTarget* Backbuffer();
    void Clear(::g::Uno::Float4 color, float depth);
    void ForceResetState();
    ::g::Uno::Graphics::RenderTarget* RenderTarget();
    ::g::Uno::Recti Scissor();
    void Scissor(::g::Uno::Recti value);
    void SetRenderTarget(::g::Uno::Graphics::RenderTarget* renderTarget);
    void SetRenderTarget1(::g::Uno::Graphics::RenderTarget* renderTarget, ::g::Uno::Recti viewport, ::g::Uno::Recti scissor);
    void UpdateBackbuffer();
    ::g::Uno::Recti Viewport();
    void Viewport(::g::Uno::Recti value);
    static GraphicsContext* New1();
};
// }

}}} // ::g::Uno::Graphics