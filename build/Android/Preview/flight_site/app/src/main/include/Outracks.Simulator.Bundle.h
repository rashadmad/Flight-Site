// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{struct Bundle;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public static class Bundle :2181
// {
uClassType* Bundle_typeof();
void Bundle__AddOrUpdateFile_fn(uString* projectRelativeFilePath, uArray* data);

struct Bundle : uObject
{
    static void AddOrUpdateFile(uString* projectRelativeFilePath, uArray* data);
};
// }

}}} // ::g::Outracks::Simulator
