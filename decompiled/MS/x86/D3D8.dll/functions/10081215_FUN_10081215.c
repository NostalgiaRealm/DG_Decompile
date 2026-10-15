/*
 * FUN_10081215 at 10081215
 * undefined4 __stdcall FUN_10081215(int param_1, undefined4 * param_2)
 * Address ranges: 10081215-1008123f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10081215(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = FUN_1007b3ec(*(int *)(param_1 + 0x10) + 0x58e0,0x100af310,param_2);
  }
  return uVar1;
}

