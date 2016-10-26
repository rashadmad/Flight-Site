// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\FuseCore\0.38.6\input\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerWheelMovedArgs;}}}

namespace g{
namespace Fuse{
namespace Input{

// public abstract interface IPointerEventResponder :947
// {
uInterfaceType* IPointerEventResponder_typeof();

struct IPointerEventResponder
{
    void(*fp_OnPointerMoved)(uObject*, ::g::Fuse::Input::PointerMovedArgs*);
    void(*fp_OnPointerPressed)(uObject*, ::g::Fuse::Input::PointerPressedArgs*);
    void(*fp_OnPointerReleased)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*);
    void(*fp_OnPointerWheelMoved)(uObject*, ::g::Fuse::Input::PointerWheelMovedArgs*);
    static void OnPointerMoved(const uInterface& __this, ::g::Fuse::Input::PointerMovedArgs* args) { __this.VTable<IPointerEventResponder>()->fp_OnPointerMoved(__this, args); }
    static void OnPointerPressed(const uInterface& __this, ::g::Fuse::Input::PointerPressedArgs* args) { __this.VTable<IPointerEventResponder>()->fp_OnPointerPressed(__this, args); }
    static void OnPointerReleased(const uInterface& __this, ::g::Fuse::Input::PointerReleasedArgs* args) { __this.VTable<IPointerEventResponder>()->fp_OnPointerReleased(__this, args); }
    static void OnPointerWheelMoved(const uInterface& __this, ::g::Fuse::Input::PointerWheelMovedArgs* args) { __this.VTable<IPointerEventResponder>()->fp_OnPointerWheelMoved(__this, args); }
};
// }

}}} // ::g::Fuse::Input
