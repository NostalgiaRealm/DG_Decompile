/*
 * FUN_1004982e at 1004982e
 * undefined4 __stdcall FUN_1004982e(int * param_1, int param_2)
 * Address ranges: 1004982e-100498b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1004982e(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_30 = 0x43425844;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_1c = 1;
  local_14 = 3;
  FUN_100a14c1(param_1,&local_30,0x2c);
  *(int *)(*param_1 + 0x20) = param_1[1] - *param_1;
  uVar1 = FUN_1004932a(param_1,param_2);
  if ((char)uVar1 != '\0') {
    *(int *)(*param_1 + 0x24) = param_1[1] - *param_1;
    uVar1 = FUN_10049697(param_1,param_2);
    if ((char)uVar1 != '\0') {
      *(int *)(*param_1 + 0x28) = param_1[1] - *param_1;
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}

