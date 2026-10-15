/*
 * FUN_1800462a4 at 1800462a4
 * longlong * __fastcall FUN_1800462a4(longlong param_1, ulonglong param_2, ulonglong param_3, undefined4 param_4, char param_5)
 * Address ranges: 1800462a4-1800463a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong *
FUN_1800462a4(longlong param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4,char param_5)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong *local_res8 [4];
  undefined8 in_stack_ffffffffffffff48;
  undefined8 in_stack_ffffffffffffff50;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  uint local_7c;
  uint local_78;
  undefined8 local_74;
  undefined4 local_68 [2];
  undefined8 local_60;
  ulonglong local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  
  lVar3 = (param_2 & 0xffffffff) * 0x20;
  local_74 = 0;
  local_68[0] = 1;
  cVar1 = *(char *)(lVar3 + 0x18 + param_1);
  local_60 = 0x10000;
  local_50 = 1;
  local_4c = 0x10001;
  local_44 = 1;
  local_3c = 1;
  local_80 = (-(uint)(cVar1 != '\0') & 3) + 1;
  local_res8[0] = (longlong *)0x0;
  local_7c = -(uint)(cVar1 != '\0') & 2;
  local_78 = (uint)(cVar1 != '\0');
  local_58 = param_3 & 0xffffffff;
  local_38 = param_4;
  bVar2 = FUN_180046244(param_1,param_2,&local_80,0,local_68,0,in_stack_ffffffffffffff48,
                        in_stack_ffffffffffffff50,local_res8);
  if (((bVar2 != 0) && (*(char *)(lVar3 + 0x18 + param_1) != '\0')) && (param_5 != '\0')) {
    local_90 = 0;
    local_88 = 0;
    local_98 = 0;
    (**(code **)(*local_res8[0] + 0x40))(local_res8[0],0,&local_90,&local_98);
  }
  return local_res8[0];
}

