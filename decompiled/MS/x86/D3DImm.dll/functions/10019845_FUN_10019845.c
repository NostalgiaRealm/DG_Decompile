/*
 * FUN_10019845 at 10019845
 * byte __fastcall FUN_10019845(int param_1)
 * Address ranges: 10019845-10019896
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_10019845(int param_1)

{
  int *piVar1;
  byte extraout_var;
  undefined4 *puVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = 1;
  local_1c = *(undefined4 *)(param_1 + 0x14);
  puVar2 = (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x10) * 0x1510 + 0x510);
  *(undefined4 **)(param_1 + 8) = puVar2;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  piVar1 = (int *)*puVar2;
  (**(code **)(*piVar1 + 0xc))(piVar1,&local_1c,0,param_1 + 0xc);
  return extraout_var >> 7 ^ 1;
}

