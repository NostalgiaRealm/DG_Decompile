/*
 * FUN_180096cd4 at 180096cd4
 * undefined __fastcall FUN_180096cd4(longlong * param_1)
 * Address ranges: 180096cd4-180096e42
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180096cd4(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong *puVar9;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  ulonglong local_a0;
  undefined4 local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined4 local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 1);
  lVar7 = param_1[7];
  iVar3 = *(int *)((longlong)param_1 + 0x3c);
  lVar8 = param_1[8];
  lVar4 = *param_1;
  puVar9 = (ulonglong *)(param_1[3] + 0x20);
  if (param_1[3] == 0) {
    puVar9 = (ulonglong *)&DAT_00000040;
  }
  uVar5 = *puVar9;
  puVar9 = (ulonglong *)(param_1[2] + 0x20);
  if (param_1[2] == 0) {
    puVar9 = (ulonglong *)&DAT_00000040;
  }
  uVar6 = *puVar9;
  FUN_1800e2d18(*(longlong *)(*(longlong *)(lVar4 + 0x1cf18) + 0x1508),uVar6,(ulonglong)uVar2,0,
                0x400);
  FUN_1800e2d18(*(longlong *)(*(longlong *)(lVar4 + 0x1cf18) + 0x1508),uVar5,(ulonglong)uVar1,0,
                0x800);
  local_ac = (*(int *)((longlong)param_1 + 0x2c) - (int)param_1[4]) + (int)lVar7;
  local_a8 = ((int)param_1[6] - *(int *)((longlong)param_1 + 0x24)) + iVar3;
  local_a4 = (*(int *)((longlong)param_1 + 0x34) - (int)param_1[5]) + (int)lVar8;
  local_90 = (ulonglong)uVar1;
  local_78 = 0;
  local_68 = 0;
  local_60 = (ulonglong)uVar2;
  local_48 = 0;
  local_98 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_b8 = (int)lVar7;
  local_b4 = iVar3;
  local_b0 = (int)lVar8;
  local_a0 = uVar5;
  local_70 = uVar6;
  FUN_1800e3ee8(*(longlong *)(*(longlong *)(lVar4 + 0x1cf18) + 0x1508),&local_70,(int)param_1[4],
                *(int *)((longlong)param_1 + 0x24),(int)param_1[5],&local_a0,&local_b8);
  return;
}

