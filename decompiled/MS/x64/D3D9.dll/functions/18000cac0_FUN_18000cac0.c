/*
 * FUN_18000cac0 at 18000cac0
 * ulonglong __fastcall FUN_18000cac0(undefined4 * param_1, undefined8 param_2, ushort param_3)
 * Address ranges: 18000cac0-18000cafb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000cac0(undefined4 *param_1,undefined8 param_2,ushort param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 local_res10;
  
  uVar2 = 0;
  do {
    if (param_1[uVar2 + 6] == (uint)param_3) {
      return uVar2;
    }
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar1;
  } while (uVar1 < 0x10);
  local_res10._4_4_ = (uint)param_3 << 4;
  local_res10 = CONCAT44(local_res10._4_4_,*param_1) | 0x80000000;
  return local_res10;
}

