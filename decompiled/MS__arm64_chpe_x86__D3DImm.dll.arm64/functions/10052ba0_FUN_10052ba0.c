/*
 * FUN_10052ba0 at 10052ba0
 * undefined FUN_10052ba0(void)
 * Address ranges: 10052ba0-10052be7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10052ba0(int param_1,undefined4 param_2)

{
  ulonglong uVar1;
  undefined4 local_20 [4];
  
  local_20[0] = 0;
  uVar1 = FUN_10059240(param_1 + 0x9dc,param_2,local_20,0);
  if ((uVar1 & 1) != 0) {
    FUN_10052bf0(param_1,1);
  }
  return local_20[0];
}

