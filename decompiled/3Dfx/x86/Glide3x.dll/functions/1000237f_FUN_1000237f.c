/*
 * FUN_1000237f at 1000237f
 * undefined4 __stdcall FUN_1000237f(undefined4 param_1, int param_2)
 * Address ranges: 1000237f-100023b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000237f(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 == 0) {
    puVar1 = FUN_1000504c();
    FUN_10005cfe(puVar1);
  }
  else if (param_2 == 1) {
    DAT_1005b820 = param_1;
    DAT_1005b828 = param_1;
  }
  return 1;
}

