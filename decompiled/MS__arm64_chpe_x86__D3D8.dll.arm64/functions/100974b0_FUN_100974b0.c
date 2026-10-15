/*
 * FUN_100974b0 at 100974b0
 * undefined FUN_100974b0(void)
 * Address ranges: 100974b0-100975cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100974b0(int param_1,int param_2,int param_3,ulonglong param_4,ulonglong param_5)

{
  int *piVar1;
  int *piVar2;
  undefined4 local_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  piVar1 = (int *)(param_1 + 0x1cf04);
  local_48 = param_5 & 0xffffffff;
  *(int *)(*(int *)(*piVar1 + 0x1304) + 0x948) = param_1;
  piVar2 = (int *)(*(int *)(*piVar1 + 0x1304) + 0x634);
  *piVar2 = *piVar2 + 1;
  local_50 = *(undefined4 *)(param_3 + 0xc);
  uStack_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_80 = *(undefined4 *)(param_2 + 0xc);
  uStack_4c = 0;
  uStack_7c = 0;
  uStack_38 = 0;
  local_40 = 0;
  local_30 = 0;
  local_78 = param_4 & 0xffffffff;
  FUN_100e1588(*(undefined4 *)(*piVar1 + 0x1304),local_50,local_48,0,0x400);
  FUN_100e1588(*(undefined4 *)(*piVar1 + 0x1304),*(undefined4 *)(param_2 + 0xc),param_4 & 0xffffffff
               ,0,0x800);
  FUN_100e3740(*(undefined4 *)(*piVar1 + 0x1304),&local_50,0,0,0,&local_80,0);
  FUN_100e14f0(*(int *)(*piVar1 + 0x1304) + 4,0);
  return;
}

