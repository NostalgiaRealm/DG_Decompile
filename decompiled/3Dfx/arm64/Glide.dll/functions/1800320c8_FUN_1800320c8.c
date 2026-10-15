/*
 * FUN_1800320c8 at 1800320c8
 * undefined8 __cdecl FUN_1800320c8(longlong param_1, byte param_2, byte param_3)
 * Address ranges: 1800320c8-1800321af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800320c8(longlong param_1,byte param_2,byte param_3)

{
  longlong lVar1;
  longlong lStack_40;
  longlong local_38;
  
  FUN_180045f40(*(longlong *)(param_1 + 0x90) + 0x40,&lStack_40,param_2 + 1,0,0);
  lVar1 = local_38;
  if (local_38 != 0) {
    FUN_180045f40(*(longlong *)(param_1 + 0x98) + 0x40,&lStack_40,param_3 + 1,0,0);
    if (local_38 != 0) {
      *(longlong *)(param_1 + 0x30) = lVar1;
      *(longlong *)(param_1 + 0x40) = lVar1;
      *(longlong *)(param_1 + 0x48) = local_38;
      if ((param_2 & 1) == 0) {
        *(ulonglong *)(param_1 + 0x40) =
             lVar1 + (ulonglong)(0x4000 - *(int *)(param_1 + 0x14)) * 0x3c;
      }
      else {
        *(undefined4 *)(param_1 + 0x14) = 0x4000;
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
      *(longlong *)(param_1 + 0x20) = local_38;
      if ((param_3 & 1) == 0) {
        local_38 = local_38 + (ulonglong)(0x4000 - *(int *)(param_1 + 0x18)) * 4;
        *(longlong *)(param_1 + 0x48) = local_38;
      }
      else {
        *(undefined4 *)(param_1 + 0x18) = 0x4000;
      }
      *(longlong *)(param_1 + 0x28) = local_38;
      return 1;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x90) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x34) = 0;
    }
  }
  return 0;
}

