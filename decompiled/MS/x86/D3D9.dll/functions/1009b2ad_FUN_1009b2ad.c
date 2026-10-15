/*
 * FUN_1009b2ad at 1009b2ad
 * undefined4 __stdcall FUN_1009b2ad(int param_1, undefined4 * param_2)
 * Address ranges: 1009b2ad-1009b2db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009b2ad(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x5bd0) == 0) {
    *param_2 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1009c9fe(*(int *)(param_1 + 0x5bd0),0x100d13c0,param_2);
  }
  return uVar1;
}

