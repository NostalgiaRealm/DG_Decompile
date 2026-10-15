/*
 * FUN_1801b24d0 at 1801b24d0
 * undefined FUN_1801b24d0(void)
 * Address ranges: 1801b24d0-1801b2643
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b24d0(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  code *extraout_x11;
  longlong lVar3;
  longlong lVar4;
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
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = *(longlong *)(*param_1 + 0x38);
  uVar2 = *(undefined8 *)(*param_1 + 0x40);
  lVar4 = *(longlong *)(lVar3 + 0x1cf10) + (ulonglong)*(uint *)(lVar3 + 0x28) * 0x1ac0;
  lVar3 = *(longlong *)(lVar4 + 0x1e08);
  FUN_18020e268(*(undefined8 *)(lVar3 + 0xb18),*(undefined8 *)((longlong)param_1 + 0x14),0,1,
                *(undefined8 *)(lVar3 + 0xb10),lVar3,0x800,*(undefined8 *)(lVar3 + 0xb78));
  FUN_180207cd0(lVar3,uVar2,(ulonglong)uVar1,0,0x400);
  FUN_180210140(lVar4 + 0x1fd0,*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined8 *)((longlong)param_1 + 0x1c),*(undefined8 *)((longlong)param_1 + 0x24),
                *(undefined8 *)(*(longlong *)(lVar3 + 0xb10) + 0x18),*(undefined8 *)(lVar3 + 0xb78))
  ;
  local_90 = *(undefined8 *)((longlong)param_1 + 0x14);
  local_58 = 0;
  local_88 = 1;
  uStack_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_80 = *(longlong *)((longlong)param_1 + 0x1c) - *(longlong *)((longlong)param_1 + 0x24);
  local_b0 = 0;
  iStack_a4 = (int)param_1[9] - *(int *)((longlong)param_1 + 0x3c);
  local_a8 = 0;
  _uStack_78 = CONCAT44(iStack_a4,*(undefined4 *)((longlong)param_1 + 0x34));
  local_68 = (ulonglong)*(uint *)(param_1 + 6);
  local_a0 = *(int *)((longlong)param_1 + 0x4c) - (int)param_1[8];
  iStack_9c = (int)param_1[10] - *(int *)((longlong)param_1 + 0x44);
  _local_70 = CONCAT44(iStack_9c,local_a0);
  local_60 = uVar2;
  local_50 = (ulonglong)uVar1;
  FUN_180206f40(lVar3);
  FUN_180206ff8(lVar3);
  uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180225000);
  (*extraout_x11)(uVar2,&local_60,*(undefined4 *)((longlong)param_1 + 0x3c),(int)param_1[8],
                  *(undefined4 *)((longlong)param_1 + 0x44),&local_90,&local_b0);
  FUN_180206fa8(lVar3);
  return;
}

