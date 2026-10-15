/*
 * FUN_100ccdc5 at 100ccdc5
 * undefined4 * __fastcall FUN_100ccdc5(int param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100ccdc5-100cce01
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_100ccdc5(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 * DAT_100db024 + param_1);
  FUN_100cff00(puVar1,(undefined4 *)PTR_LAB_100db020,DAT_100db024);
  *(undefined4 *)(DAT_100db028 + (int)puVar1) = param_4;
  *(undefined4 *)(DAT_100db02c + (int)puVar1) = param_3;
  return puVar1;
}

