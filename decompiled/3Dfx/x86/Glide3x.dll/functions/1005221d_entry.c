/*
 * entry at 1005221d
 * undefined4 __stdcall entry(undefined4 param_1, int param_2)
 * Address ranges: 1005221d-1005225e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 entry(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
    FUN_100527a7();
    __initterm((undefined4 *)&DAT_1005a000,(undefined4 *)&DAT_1005a004);
  }
  uVar1 = FUN_1000237f(param_1,param_2);
  if (param_2 == 0) {
    FUN_1005277f();
  }
  return uVar1;
}

