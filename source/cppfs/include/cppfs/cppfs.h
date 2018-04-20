
#pragma once


#include <cppfs/cppfs_api.h>


namespace cppfs
{


/**
*  @brief
*    File permission flags
*/
enum FilePermissions
{
    SetUid     = 0x4000,
    SetGid     = 0x2000,
    SetSticky  = 0x1000,
    UserRead   = 0x0400,
    UserWrite  = 0x0200,
    UserExec   = 0x0100,
    GroupRead  = 0x0040,
    GroupWrite = 0x0020,
    GroupExec  = 0x0010,
    OtherRead  = 0x0004,
    OtherWrite = 0x0002,
    OtherExec  = 0x0001
};


} // namespace cppfs
