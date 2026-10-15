/*
 * FUN_100a4e30 at 100a4e30
 * undefined FUN_100a4e30(void)
 * Address ranges: 100a4e30-100a5043
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a4e30(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  bool bVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  
  piVar1 = (int *)(param_1 + 0x34);
  if (*piVar1 == 0) {
    return;
  }
  iVar8 = *(int *)(*(int *)(param_1 + 0x30) + 0x1cf00) +
          *(int *)(*(int *)(param_1 + 0x30) + 0x14) * 0x16c0;
  iVar6 = *(int *)(param_1 + 0x38);
  iVar7 = *(int *)(iVar8 + 0x1c98);
  uVar13 = FUN_100fda90(iVar8 + 0x1880);
  if ((uVar13 & 1) != 0) {
    FUN_100df970(iVar7,iVar6,2,*(undefined4 *)(*(int *)(iVar8 + 0x19c0) + 0xc),
                 *(undefined8 *)(*(int *)(iVar8 + 0x19c4) + 0x938));
    goto LAB_100a5014;
  }
  puVar3 = (undefined4 *)(iVar8 + 0x1880);
  FUN_100fd300(puVar3);
  cVar5 = *(char *)(iVar8 + 0x19ac);
  bVar11 = true;
  if (cVar5 == '\0') {
LAB_100a4f7c:
    if (cVar5 == '\0') goto LAB_100a4f80;
  }
  else {
    puVar12 = (undefined4 *)FUN_100fd1a8(puVar3,0x10);
    if (puVar12 != (undefined4 *)0x0) {
      piVar2 = (int *)(iVar8 + 0x19a8);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
        if (bVar10) {
          *piVar2 = *piVar2 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      DataMemoryBarrier(2,3);
      puVar12[1] = 0x10;
      puVar12[2] = iVar8 + 0x6c0;
      puVar12[3] = iVar7;
      puVar12[4] = iVar6;
      puVar12[5] = 2;
      puVar4 = (undefined4 *)((int)puVar12 + 0x1bU & 0xfffffffc);
      *puVar4 = 0;
      *puVar12 = FUN_1009aa30;
      puVar3[*(int *)(iVar8 + 0x19a4) * 5 + 0x1a] = puVar4;
      if (*(char *)(iVar8 + 0x19ad) != '\0') {
        *puVar3 = 0;
        (*(code *)PTR_FUN_101340fc)(*(undefined4 *)(iVar8 + 0x18e0));
        bVar11 = false;
      }
      goto LAB_100a4f7c;
    }
    *puVar3 = 0;
    (*(code *)PTR_FUN_10134114)(100);
    FUN_100fd300(puVar3);
LAB_100a4f80:
    piVar2 = *(int **)(iVar8 + 0x1990);
    *piVar2 = iVar8 + 0x6c0;
    piVar2[1] = iVar7;
    piVar2[2] = iVar6;
    piVar2[3] = 2;
    FUN_1009aa30(piVar2);
  }
  if (bVar11) {
    *puVar3 = 0;
  }
LAB_100a5014:
  FUN_100f86c8(iVar8 + 0x1c40,*piVar1);
  *piVar1 = 0;
  return;
}

