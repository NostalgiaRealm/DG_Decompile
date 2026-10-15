/*
 * FUN_100035e8 at 100035e8
 * undefined4 * __fastcall FUN_100035e8(int param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100035e8-10003624
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_100035e8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 * DAT_10058034 + param_1);
  FUN_100500b0(puVar1,(undefined4 *)PTR_LAB_10058030,DAT_10058034);
  *(undefined4 *)(DAT_10058038 + (int)puVar1) = param_4;
  *(undefined4 *)(DAT_1005803c + (int)puVar1) = param_3;
  return puVar1;
}

