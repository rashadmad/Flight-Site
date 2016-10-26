// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\UnoCore\0.38.2\source\uno\content\models\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelDrawable;}}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelNode;}}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelParameter1;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Models{

// public sealed class ModelNode :117
// {
uType* ModelNode_typeof();
void ModelNode__get_Children_fn(ModelNode* __this, uObject** __retval);
void ModelNode__get_Drawables_fn(ModelNode* __this, uObject** __retval);
void ModelNode__get_Transforms_fn(ModelNode* __this, uObject** __retval);

struct ModelNode : uObject
{
    uStrong< ::g::Uno::Collections::List*> _children;
    uStrong< ::g::Uno::Collections::List*> _drawables;
    uStrong< ::g::Uno::Collections::List*> _transforms;

    uObject* Children();
    uObject* Drawables();
    uObject* Transforms();
};
// }

}}}} // ::g::Uno::Content::Models
