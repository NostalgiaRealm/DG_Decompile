/*
 * FUN_180025a30 at 180025a30
 * undefined8 __cdecl FUN_180025a30(longlong param_1, byte param_2, byte param_3)
 * Address ranges: 180025a30-180025b17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180025a30(longlong param_1,byte param_2,byte param_3)

{
  longlong lVar1;
  longlong lStack_40;
  longlong local_38;
  
  FUN_180048c80(*(longlong *)(param_1 + 0x2c0) + 0x40,&lStack_40,param_2 + 1,0,0);
  lVar1 = local_38;
  if (local_38 != 0) {
    FUN_180048c80(*(longlong *)(param_1 + 0x2c8) + 0x40,&lStack_40,param_3 + 1,0,0);
    if (local_38 != 0) {
      *(longlong *)(param_1 + 0x250) = lVar1;
      *(longlong *)(param_1 + 0x260) = lVar1;
      *(longlong *)(param_1 + 0x268) = local_38;
      if ((param_2 & 1) == 0) {
        *(ulonglong *)(param_1 + 0x260) =
             lVar1 + (ulonglong)(0x4000 - *(int *)(param_1 + 0x234)) * 0x50;
      }
      else {
        *(undefined4 *)(param_1 + 0x234) = 0x4000;
        *(undefined4 *)(param_1 + 0x270) = 0;
      }
      *(longlong *)(param_1 + 0x240) = local_38;
      if ((param_3 & 1) == 0) {
        local_38 = local_38 + (ulonglong)(0x4000 - *(int *)(param_1 + 0x238)) * 4;
        *(longlong *)(param_1 + 0x268) = local_38;
      }
      else {
        *(undefined4 *)(param_1 + 0x238) = 0x4000;
      }
      *(longlong *)(param_1 + 0x248) = local_38;
      return 1;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x2c0) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x2c0) + 0x34) = 0;
    }
  }
  return 0;
}

