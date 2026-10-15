/*
 * FUN_10068a60 at 10068a60
 * undefined FUN_10068a60(void)
 * Address ranges: 10068a60-10068d4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10068a60(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  undefined4 *puVar9;
  
  iVar4 = param_3;
  if (0x200 < (uint)(param_3 - param_2)) {
    iVar4 = param_2 + 0x200;
  }
  iVar5 = *(int *)(param_1 + 0xf6b8);
  puVar2 = (undefined4 *)(iVar5 + 0x11c0);
  FUN_101308d0(puVar2);
  if (*(char *)(iVar5 + 0x12ec) == '\0') {
LAB_10068bb8:
    piVar1 = *(int **)(iVar5 + 0x12d0);
    *piVar1 = param_4;
    piVar1[1] = param_1;
    piVar1[2] = param_2;
    piVar1[3] = iVar4;
    FUN_10068d50(piVar1);
LAB_10068be4:
    *puVar2 = 0;
  }
  else {
    iVar6 = (iVar4 - param_2) * 0x10;
    puVar9 = (undefined4 *)FUN_10130778(puVar2,iVar6 + 0x10);
    if (puVar9 == (undefined4 *)0x0) {
      *puVar2 = 0;
      (*(code *)PTR_FUN_1016c114)(100);
      FUN_101308d0(puVar2);
      goto LAB_10068bb8;
    }
    piVar1 = (int *)(iVar5 + 0x12e8);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    DataMemoryBarrier(2,3);
    puVar9[1] = iVar6 + 0x10;
    puVar9[3] = param_1;
    puVar9[4] = param_2;
    puVar9[5] = iVar4;
    uVar3 = (int)puVar9 + 0x1bU & 0xfffffffc;
    puVar9[2] = uVar3;
    FUN_101325a0(uVar3,param_4,iVar6);
    *(undefined4 *)(uVar3 + iVar6) = 0;
    *puVar9 = FUN_10068d50;
    puVar2[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = (undefined4 *)(uVar3 + iVar6);
    if (*(char *)(iVar5 + 0x12ed) == '\0') goto LAB_10068be4;
    *puVar2 = 0;
    (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar5 + 0x1220));
  }
  if (iVar4 == param_3) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0xf6b8);
  puVar2 = (undefined4 *)(iVar5 + 0x11c0);
  FUN_101308d0(puVar2);
  param_4 = param_4 + iVar4 * 0x10;
  if (*(char *)(iVar5 + 0x12ec) != '\0') {
    iVar6 = (param_3 - iVar4) * 0x10;
    puVar9 = (undefined4 *)FUN_10130778(puVar2,iVar6 + 0x10);
    if (puVar9 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar5 + 0x12e8);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar8) {
          *piVar1 = *piVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      DataMemoryBarrier(2,3);
      puVar9[1] = iVar6 + 0x10;
      puVar9[3] = param_1;
      puVar9[4] = iVar4;
      puVar9[5] = param_3;
      uVar3 = (int)puVar9 + 0x1bU & 0xfffffffc;
      puVar9[2] = uVar3;
      FUN_101325a0(uVar3,param_4,iVar6);
      *(undefined4 *)(uVar3 + iVar6) = 0;
      *puVar9 = FUN_10068d50;
      puVar2[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = (undefined4 *)(uVar3 + iVar6);
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar5 + 0x1220));
        return;
      }
      goto LAB_10068d2c;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_1016c114)(100);
    FUN_101308d0(puVar2);
  }
  piVar1 = *(int **)(iVar5 + 0x12d0);
  *piVar1 = param_4;
  piVar1[1] = param_1;
  piVar1[2] = iVar4;
  piVar1[3] = param_3;
  FUN_10068d50(piVar1);
LAB_10068d2c:
  *puVar2 = 0;
  return;
}

