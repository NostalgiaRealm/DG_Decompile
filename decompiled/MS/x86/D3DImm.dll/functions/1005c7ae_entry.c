/*
 * entry at 1005c7ae
 * undefined4 __stdcall entry(undefined4 param_1, int param_2)
 * Address ranges: 1005c7ae-1005c7ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 entry(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
    FUN_1005c818();
    __initterm((undefined4 *)&DAT_10061000,(undefined4 *)&DAT_10061020);
  }
  uVar1 = FUN_1004addf(param_1,param_2);
  if (param_2 == 0) {
    FUN_1005c7f0();
  }
  return uVar1;
}

