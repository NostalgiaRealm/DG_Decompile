/*
 * FUN_180057898 at 180057898
 * undefined FUN_180057898(void)
 * Address ranges: 180057898-18005790f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057898(longlong *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  if ((param_3 < 0x1d) && ((0x1dc00ffeU >> (ulonglong)(param_3 & 0x1f) & 1) != 0)) {
    (**(code **)(*param_1 + 0x1d8))(param_1,0);
  }
  FUN_180055fa0(param_1,param_1 + 0x16,param_1 + 0x1ed0,param_2,param_3,param_4);
  return;
}

