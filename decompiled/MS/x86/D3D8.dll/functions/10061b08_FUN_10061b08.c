/*
 * FUN_10061b08 at 10061b08
 * undefined __stdcall FUN_10061b08(undefined4 param_1, undefined4 param_2, uint param_3, uint param_4, int param_5, undefined4 param_6, int param_7, int param_8, int param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, undefined4 param_14, char param_15, char param_16)
 * Address ranges: 10061b08-10061c05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10061b08(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,
                 undefined4 param_6,int param_7,int param_8,int param_9,undefined4 param_10,
                 undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,
                 char param_15,char param_16)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c [6];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  void *local_8;
  
  local_78 = param_1;
  local_74 = param_2;
  local_68 = param_6;
  local_5c = param_10;
  local_54 = param_12;
  local_70 = param_3;
  local_64 = param_5;
  local_60 = 0;
  local_58 = param_11;
  local_50 = param_13;
  local_6c = param_4;
  if ((param_5 == 1) || (param_16 == '\0')) {
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
  FUN_10061ab2(local_4c,param_11,param_4,param_7,(byte)param_11,param_15,bVar1);
  local_34 = param_9;
  local_18 = (param_5 != 1) + 5;
  local_1c = param_8;
  local_10 = 0;
  local_c = 0;
  local_30 = 3;
  if (param_5 != 1) {
    local_30 = 5;
  }
  local_14 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  piVar2 = &local_34;
  if (param_9 == 0) {
    piVar2 = (int *)0x0;
  }
  local_28 = 0;
  piVar3 = &local_1c;
  if (param_8 == 0) {
    piVar3 = (int *)0x0;
  }
  puVar4 = local_4c;
  if (param_7 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  FUN_100619c8(local_8,(int)&local_78,(uint)puVar4,(uint)piVar3,(int)piVar2,param_3,param_4,param_14
               ,param_16);
  return;
}

