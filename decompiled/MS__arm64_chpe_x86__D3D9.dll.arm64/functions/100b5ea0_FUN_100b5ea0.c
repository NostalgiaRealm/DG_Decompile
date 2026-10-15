/*
 * FUN_100b5ea0 at 100b5ea0
 * undefined FUN_100b5ea0(void)
 * Address ranges: 100b5ea0-100b603b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b5ea0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  ulonglong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  iVar5 = param_1[0xb];
  iVar6 = param_1[0xc];
  iVar7 = param_1[0xd];
  puVar2 = (undefined4 *)&DAT_00000034;
  if (param_1[4] != 0) {
    puVar2 = (undefined4 *)(param_1[4] + 0x18);
  }
  uVar8 = *puVar2;
  puVar2 = (undefined4 *)&DAT_00000034;
  if (param_1[3] != 0) {
    puVar2 = (undefined4 *)(param_1[3] + 0x18);
  }
  uVar9 = *puVar2;
  piVar1 = (int *)(*param_1 + 0x1cf04);
  FUN_10113dd8(*(undefined4 *)(*piVar1 + 0x1304),uVar9,(ulonglong)uVar3,0,0x400);
  FUN_10113dd8(*(undefined4 *)(*piVar1 + 0x1304),uVar8,(ulonglong)uVar4,0,0x800);
  uStack_9c = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_80 = 0;
  uStack_6c = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_50 = 0;
  iStack_ac = (param_1[8] - param_1[5]) + iVar5;
  local_a8 = (param_1[9] - param_1[6]) + iVar6;
  iStack_a4 = (param_1[10] - param_1[7]) + iVar7;
  local_b8 = iVar5;
  iStack_b4 = iVar6;
  local_b0 = iVar7;
  local_a0 = uVar8;
  local_98 = (ulonglong)uVar4;
  local_70 = uVar9;
  local_68 = (ulonglong)uVar3;
  FUN_10115f90(*(undefined4 *)(*piVar1 + 0x1304),&local_70,param_1[5],param_1[6],param_1[7],
               &local_a0,&local_b8);
  return;
}

