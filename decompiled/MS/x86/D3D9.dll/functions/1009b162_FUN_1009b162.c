/*
 * FUN_1009b162 at 1009b162
 * undefined4 __stdcall FUN_1009b162(int param_1, undefined4 * param_2)
 * Address ranges: 1009b162-1009b190
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009b162(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x5bd4) == 0) {
    *param_2 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1009e858(*(int *)(param_1 + 0x5bd4),0x100d13b0,param_2);
  }
  return uVar1;
}

