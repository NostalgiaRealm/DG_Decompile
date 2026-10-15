/*
 * FUN_100c54b0 at 100c54b0
 * undefined FUN_100c54b0(void)
 * Address ranges: 100c54b0-100c56c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100c54b0(int param_1)

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
  uVar13 = FUN_10131060(iVar8 + 0x1880);
  if ((uVar13 & 1) != 0) {
    FUN_101121c0(iVar7,iVar6,2,*(undefined4 *)(*(int *)(iVar8 + 0x19c0) + 0xc),
                 *(undefined8 *)(*(int *)(iVar8 + 0x19c4) + 0x938));
    goto LAB_100c5694;
  }
  puVar3 = (undefined4 *)(iVar8 + 0x1880);
  FUN_101308d0(puVar3);
  cVar5 = *(char *)(iVar8 + 0x19ac);
  bVar11 = true;
  if (cVar5 == '\0') {
LAB_100c55fc:
    if (cVar5 == '\0') goto LAB_100c5600;
  }
  else {
    puVar12 = (undefined4 *)FUN_10130778(puVar3,0x10);
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
      *puVar12 = FUN_100bab60;
      puVar3[*(int *)(iVar8 + 0x19a4) * 5 + 0x1a] = puVar4;
      if (*(char *)(iVar8 + 0x19ad) != '\0') {
        *puVar3 = 0;
        (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar8 + 0x18e0));
        bVar11 = false;
      }
      goto LAB_100c55fc;
    }
    *puVar3 = 0;
    (*(code *)PTR_FUN_1016c114)(100);
    FUN_101308d0(puVar3);
LAB_100c5600:
    piVar2 = *(int **)(iVar8 + 0x1990);
    *piVar2 = iVar8 + 0x6c0;
    piVar2[1] = iVar7;
    piVar2[2] = iVar6;
    piVar2[3] = 2;
    FUN_100bab60(piVar2);
  }
  if (bVar11) {
    *puVar3 = 0;
  }
LAB_100c5694:
  FUN_1012bc98(iVar8 + 0x1c40,*piVar1);
  *piVar1 = 0;
  return;
}

