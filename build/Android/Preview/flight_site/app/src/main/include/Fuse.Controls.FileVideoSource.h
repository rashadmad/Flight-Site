// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Fuse.Controls.Video\0.38.6\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.VideoSource.h>
namespace g{namespace Fuse{namespace Controls{struct FileVideoSource;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class FileVideoSource :94
// {
uType* FileVideoSource_typeof();
void FileVideoSource__ctor_1_fn(FileVideoSource* __this);
void FileVideoSource__get_File_fn(FileVideoSource* __this, ::g::Uno::UX::FileSource** __retval);
void FileVideoSource__set_File_fn(FileVideoSource* __this, ::g::Uno::UX::FileSource* value);
void FileVideoSource__New1_fn(FileVideoSource** __retval);

struct FileVideoSource : ::g::Fuse::Controls::VideoSource
{
    uStrong< ::g::Uno::UX::FileSource*> _file;

    void ctor_1();
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    static FileVideoSource* New1();
};
// }

}}} // ::g::Fuse::Controls
