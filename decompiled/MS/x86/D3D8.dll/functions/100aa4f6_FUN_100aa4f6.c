/*
 * FUN_100aa4f6 at 100aa4f6
 * undefined4 * __fastcall FUN_100aa4f6(int param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100aa4f6-100aa532
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_100aa4f6(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 * DAT_100b7044 + param_1);
  FUN_100adac0(puVar1,(undefined4 *)PTR_LAB_100b7040,DAT_100b7044);
  *(undefined4 *)(DAT_100b7048 + (int)puVar1) = param_4;
  *(undefined4 *)(DAT_100b704c + (int)puVar1) = param_3;
  return puVar1;
}

