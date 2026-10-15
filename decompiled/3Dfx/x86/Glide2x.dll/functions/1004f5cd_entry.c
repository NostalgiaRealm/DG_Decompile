/*
 * entry at 1004f5cd
 * undefined4 __stdcall entry(undefined4 param_1, int param_2)
 * Address ranges: 1004f5cd-1004f60e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 entry(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
    FUN_1004fb40();
    __initterm((undefined4 *)&DAT_10058000,(undefined4 *)&DAT_10058004);
  }
  uVar1 = FUN_100025eb(param_1,param_2);
  if (param_2 == 0) {
    FUN_1004fb18();
  }
  return uVar1;
}

