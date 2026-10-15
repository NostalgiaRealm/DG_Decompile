/*
 * FUN_100369e2 at 100369e2
 * byte __fastcall FUN_100369e2(int param_1)
 * Address ranges: 100369e2-10036a49
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_100369e2(int param_1)

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
  
  local_1c = *(undefined4 *)(param_1 + 0x14);
  puVar2 = (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x1510 + 0x510);
  local_18 = 0;
  if (*(int *)(param_1 + 0x1c) == 1) {
    local_18 = 2;
  }
  local_14 = 2;
  local_10 = 0;
  *(undefined4 **)(param_1 + 0xc) = puVar2;
  if (*(int *)(param_1 + 0x1c) == 1) {
    local_10 = 0x10000;
  }
  local_c = 0;
  local_8 = 0;
  piVar1 = (int *)*puVar2;
  (**(code **)(*piVar1 + 0xc))(piVar1,&local_1c,0,param_1 + 0x10);
  return extraout_var >> 7 ^ 1;
}

