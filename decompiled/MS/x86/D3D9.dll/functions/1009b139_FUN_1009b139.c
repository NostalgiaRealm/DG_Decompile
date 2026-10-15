/*
 * FUN_1009b139 at 1009b139
 * undefined4 __stdcall FUN_1009b139(int param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 1009b139-1009b161
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009b139(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if ((param_2 < 0x10) && (param_3 != (undefined4 *)0x0)) {
    *param_3 = *(undefined4 *)(param_1 + 0x5bdc + param_2 * 4);
    uVar1 = 0;
  }
  return uVar1;
}

