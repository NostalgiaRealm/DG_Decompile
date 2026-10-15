/*
 * FUN_18008d91c at 18008d91c
 * undefined __fastcall FUN_18008d91c(longlong * param_1, ulonglong param_2, undefined8 param_3, undefined4 * param_4)
 * Address ranges: 18008d91c-18008d9b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008d91c(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  undefined8 local_res8;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  
  uVar1 = param_2 & 0xffffffff;
  local_1c = 3;
  local_14 = 0x10000;
  *(undefined8 *)(*param_1 + uVar1 * 0x18) = param_3;
  local_30 = 1;
  local_2c = 1;
  *(undefined4 *)(*param_1 + 8 + uVar1 * 0x18) = *param_4;
  local_38 = 0x400;
  local_34 = 0x400;
  local_28 = *param_4;
  local_res8 = 0;
  local_24 = 1;
  (**(code **)(**(longlong **)param_1[2] + 0x28))(*(longlong **)param_1[2],&local_38,0,&local_res8);
  *(undefined8 *)(*param_1 + 0x10 + uVar1 * 0x18) = local_res8;
  return;
}

