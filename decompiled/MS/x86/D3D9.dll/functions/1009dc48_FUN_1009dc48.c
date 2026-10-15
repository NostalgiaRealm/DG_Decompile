/*
 * FUN_1009dc48 at 1009dc48
 * undefined4 __stdcall FUN_1009dc48(int param_1, undefined4 * param_2)
 * Address ranges: 1009dc48-1009dc67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009dc48(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0xd0);
    uVar1 = 0;
  }
  return uVar1;
}

