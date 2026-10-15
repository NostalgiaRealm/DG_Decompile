/*
 * FUN_1800577d0 at 1800577d0
 * undefined FUN_1800577d0(void)
 * Address ranges: 1800577d0-180057873
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800577d0(longlong *param_1,ulonglong param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = (uint)param_2;
  if ((((uVar1 - 0x80 < 0x30) && ((0xfdeffd9efaffU >> ((ulonglong)(uVar1 - 0x80) & 0x3f) & 1) != 0))
      || ((uVar1 < 0x3d && ((0x1ff1007c3fd8c380U >> (param_2 & 0x3f) & 1) != 0)))) ||
     ((uVar1 - 0xb2 < 0x20 && ((0xf003ffffU >> (ulonglong)(uVar1 - 0xb2 & 0x1f) & 1) != 0)))) {
    (**(code **)(*param_1 + 0x1d8))(param_1,0);
  }
  FUN_180054840(param_1,param_1 + 0x16,param_1 + 0x1ed0,param_2 & 0xffffffff,param_3);
  return;
}

