/*
 * FUN_1004189c at 1004189c
 * int * __thiscall FUN_1004189c(void * this, int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1004189c-10041944
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall
FUN_1004189c(void *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 local_5c [2];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_20 [5];
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = param_1;
  FUN_10041857(this,(int)param_1,local_20,&local_8);
  local_4c = param_2;
  local_2c = param_3;
  local_5c[0] = 1;
  local_44 = 1;
  local_40 = 1;
  local_3e = 1;
  local_38 = 1;
  local_30 = 1;
  local_54 = 0x10000;
  local_50 = 0;
  local_48 = 0;
  local_3c = 0;
  local_34 = 0;
  param_1 = (int *)0x0;
  uVar2 = FUN_1004180a(this,(int)piVar1,local_20,local_8,local_5c,0,1,1,&param_1);
  if ((((char)uVar2 != '\0') && (*(char *)((int)piVar1 * 0x18 + 0x10 + (int)this) != '\0')) &&
     ((char)param_4 != '\0')) {
    local_c = 0;
    local_8 = 0;
    param_4 = 0;
    (**(code **)(*param_1 + 0x20))(param_1,0,&local_c,&param_4);
  }
  return param_1;
}

