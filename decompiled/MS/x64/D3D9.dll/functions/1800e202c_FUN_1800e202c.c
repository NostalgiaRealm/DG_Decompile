/*
 * FUN_1800e202c at 1800e202c
 * longlong * __fastcall FUN_1800e202c(longlong param_1, ulonglong param_2, ulonglong param_3, undefined4 param_4, char param_5)
 * Address ranges: 1800e202c-1800e212f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong *
FUN_1800e202c(longlong param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4,char param_5)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong *local_res8;
  undefined8 in_stack_ffffffffffffff60;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  uint local_6c;
  uint local_68;
  undefined8 local_64;
  undefined4 local_58 [2];
  undefined8 local_50;
  ulonglong local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  
  lVar3 = (param_2 & 0xffffffff) * 0x20;
  local_58[0] = 1;
  local_50 = 0x10000;
  cVar1 = *(char *)(lVar3 + 0x18 + param_1);
  local_40 = 1;
  local_3c = 0x10001;
  local_34 = 1;
  local_2c = 1;
  local_70 = (-(uint)(cVar1 != '\0') & 3) + 1;
  local_6c = -(uint)(cVar1 != '\0') & 2;
  local_64 = 0;
  local_res8 = (longlong *)0x0;
  local_68 = (uint)(cVar1 != '\0');
  local_48 = param_3 & 0xffffffff;
  local_28 = param_4;
  bVar2 = FUN_1800e1fc8(param_1,param_2,&local_70,0,local_58,0,0,in_stack_ffffffffffffff60,
                        &local_res8);
  if (((bVar2 != 0) && (*(char *)(lVar3 + 0x18 + param_1) != '\0')) && (param_5 != '\0')) {
    local_80 = 0;
    local_78 = 0;
    local_88 = 0;
    (**(code **)(*local_res8 + 0x40))(local_res8,0,&local_80,&local_88);
  }
  return local_res8;
}

