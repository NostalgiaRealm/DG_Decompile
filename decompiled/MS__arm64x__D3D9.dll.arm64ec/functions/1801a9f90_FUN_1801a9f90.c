/*
 * FUN_1801a9f90 at 1801a9f90
 * undefined FUN_1801a9f90(void)
 * Address ranges: 1801a9f90-1801aa0e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801a9f90(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  code *extraout_x11;
  undefined8 uVar4;
  undefined8 local_b0;
  undefined4 local_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  undefined4 uStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  ulonglong local_68;
  longlong local_60;
  undefined4 local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  uVar3 = *(uint *)(param_1 + 2);
  uVar4 = *(undefined8 *)((longlong)param_1 + 0x14);
  FUN_18020e268(*(undefined8 *)(lVar1 + 0xb18),*(undefined8 *)((longlong)param_1 + 0x24),0,1,
                *(undefined8 *)(lVar1 + 0xb10),lVar1,0x800,*(undefined8 *)(lVar1 + 0xb78));
  FUN_180207cd0(lVar1,lVar2,(ulonglong)uVar3,0,0x400);
  FUN_180210140(uVar4,*(undefined4 *)((longlong)param_1 + 0x3c),
                *(undefined8 *)((longlong)param_1 + 0x2c),*(undefined8 *)((longlong)param_1 + 0x34),
                *(undefined8 *)(*(longlong *)(lVar1 + 0xb10) + 0x18),*(undefined8 *)(lVar1 + 0xb78))
  ;
  local_90 = *(undefined8 *)((longlong)param_1 + 0x24);
  local_58 = 0;
  local_88 = 1;
  uStack_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_80 = *(longlong *)((longlong)param_1 + 0x2c) - *(longlong *)((longlong)param_1 + 0x34);
  local_b0 = 0;
  iStack_a4 = (int)param_1[0xb] - *(int *)((longlong)param_1 + 0x4c);
  local_a8 = 0;
  _uStack_78 = CONCAT44(iStack_a4,*(undefined4 *)((longlong)param_1 + 0x44));
  local_68 = (ulonglong)*(uint *)(param_1 + 8);
  local_a0 = *(int *)((longlong)param_1 + 0x5c) - (int)param_1[10];
  iStack_9c = (int)param_1[0xc] - *(int *)((longlong)param_1 + 0x54);
  _local_70 = CONCAT44(iStack_9c,local_a0);
  local_60 = lVar2;
  local_50 = (ulonglong)uVar3;
  FUN_180206f40(lVar1);
  FUN_180206ff8(lVar1);
  uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180225000);
  (*extraout_x11)(uVar4,&local_60,*(undefined4 *)((longlong)param_1 + 0x4c),(int)param_1[10],
                  *(undefined4 *)((longlong)param_1 + 0x54),&local_90,&local_b0);
  FUN_180206fa8(lVar1);
  return;
}

