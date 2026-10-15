/*
 * FUN_100360e5 at 100360e5
 * undefined4 __stdcall FUN_100360e5(int param_1, undefined4 * param_2)
 * Address ranges: 100360e5-1003610c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100360e5(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if ((param_2 != (undefined4 *)0x0) && ((*(byte *)(*(int *)(param_1 + 4) + 0x1bc) & 0x10) != 0)) {
    uVar1 = 0;
    *param_2 = 0;
  }
  return uVar1;
}

