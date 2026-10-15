/*
 * FUN_100035b2 at 100035b2
 * undefined4 * __fastcall FUN_100035b2(int param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100035b2-100035ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_100035b2(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 * DAT_1005e034 + param_1);
  FUN_10055d40(puVar1,(undefined4 *)PTR_LAB_1005e030,DAT_1005e034);
  *(undefined4 *)(DAT_1005e038 + (int)puVar1) = param_4;
  *(undefined4 *)(DAT_1005e03c + (int)puVar1) = param_3;
  return puVar1;
}

