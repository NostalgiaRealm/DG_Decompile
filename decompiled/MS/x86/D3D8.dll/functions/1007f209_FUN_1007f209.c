/*
 * FUN_1007f209 at 1007f209
 * undefined4 __stdcall FUN_1007f209(int param_1, undefined4 * param_2)
 * Address ranges: 1007f209-1007f231
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007f209(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = FUN_10079f53(*(int *)(param_1 + 0x10) + 0x70,0x100af300,param_2);
  }
  return uVar1;
}

