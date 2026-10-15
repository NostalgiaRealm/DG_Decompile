/*
 * FUN_10070d48 at 10070d48
 * undefined FUN_10070d48(void)
 * Address ranges: 10070d48-10070fdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10070d48(int param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int local_50;
  int local_4c;
  uint local_48;
  
  (*(code *)PTR_FUN_1016c074)(param_1 + 0x60);
  FUN_10070c78(param_1,*(undefined4 *)param_2);
  piVar1 = (int *)(param_1 + 0x38);
  local_50 = *piVar1;
  piVar2 = (int *)(param_1 + 0x28);
  if (local_50 == -1) {
LAB_10070e8c:
    puVar3 = (uint *)(param_1 + 0x30);
    iVar9 = *(int *)(param_1 + 0x2c);
    puVar4 = (uint *)(param_1 + 0x2c);
    uVar7 = *puVar3;
    local_4c = iVar9;
    if (*puVar4 == uVar7) {
      local_48 = uVar7 << 1;
      if (uVar7 == 0) {
        local_48 = 0x10;
      }
      uVar8 = (undefined4)((ulonglong)local_48 * 0x30);
      if ((ulonglong)local_48 * 0x30 >> 0x20 != 0) {
        uVar8 = 0xffffffff;
      }
      local_50 = FUN_101322b0(uVar8);
      if (local_50 == 0) goto LAB_10070fb0;
      FUN_101325a0(local_50,*piVar2,((ulonglong)(*puVar3 * 3) & 0xfffffff) << 4);
      FUN_101322d0(*piVar2);
      *piVar2 = local_50;
      *puVar3 = local_48;
    }
    uVar12 = *param_2;
    uVar11 = param_2[3];
    uVar10 = param_2[2];
    puVar6 = (undefined8 *)(*piVar2 + *puVar4 * 0x30);
    puVar6[1] = param_2[1];
    *puVar6 = uVar12;
    puVar6[3] = uVar11;
    puVar6[2] = uVar10;
    uVar10 = param_2[4];
    puVar6[5] = param_2[5];
    puVar6[4] = uVar10;
    *puVar4 = *puVar4 + 1;
    if (*(char *)((int)param_2 + 0x2c) != '\0') {
      FUN_10071538(param_1 + 0x50,param_2,&local_4c);
      iVar9 = local_4c;
    }
    if (*piVar1 != -1) {
      *(int *)(*piVar2 + *piVar1 * 0x30 + 0x28) = iVar9;
    }
    *piVar1 = iVar9;
    if (*(int *)(param_1 + 0x34) == -1) {
      *(int *)(param_1 + 0x34) = iVar9;
    }
  }
  else {
    piVar5 = (int *)(*piVar2 + local_50 * 0x30);
    if (*piVar5 != 0) {
      local_50 = piVar5[10];
    }
    if (local_50 == -1) goto LAB_10070e8c;
    if (*(char *)((int)param_2 + 0x2c) != '\0') {
      FUN_10071538(param_1 + 0x50,param_2,&local_50);
    }
    *(undefined4 *)(*piVar2 + local_50 * 0x30) = *(undefined4 *)param_2;
    *(undefined8 *)(*piVar2 + local_50 * 0x30 + 8) = param_2[1];
    *(undefined8 *)(*piVar2 + local_50 * 0x30 + 0x10) = param_2[2];
    uVar10 = param_2[3];
    iVar9 = *piVar2 + local_50 * 0x30;
    *(undefined8 *)(iVar9 + 0x20) = param_2[4];
    *(undefined8 *)(iVar9 + 0x18) = uVar10;
    *(char *)(*piVar2 + local_50 * 0x30 + 0x2c) = *(char *)((int)param_2 + 0x2c);
    *(undefined1 *)(*piVar2 + local_50 * 0x30 + 0x2d) = *(undefined1 *)((int)param_2 + 0x2d);
    *piVar1 = local_50;
  }
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
LAB_10070fb0:
  (*(code *)PTR_FUN_1016c0c0)(param_1 + 0x60);
  return;
}

