/*
 * FUN_100ba988 at 100ba988
 * undefined FUN_100ba988(void)
 * Address ranges: 100ba988-100bab53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ba988(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  undefined4 *puVar9;
  
  if (param_3 == -1) {
    return;
  }
  cVar8 = FUN_10131060(*(int *)(param_1 + 8) + 0x11c0);
  iVar4 = *(int *)(param_1 + 8);
  if (cVar8 != '\0') {
    FUN_101121c0(param_2,param_3,param_4,*(undefined4 *)(*(int *)(iVar4 + 0x1300) + 0xc),
                 *(undefined8 *)(*(int *)(iVar4 + 0x1304) + 0x938));
    return;
  }
  puVar2 = (undefined4 *)(iVar4 + 0x11c0);
  FUN_101308d0(puVar2);
  cVar8 = *(char *)(iVar4 + 0x12ec);
  bVar7 = true;
  if (cVar8 == '\0') {
LAB_100baaa8:
    if (cVar8 != '\0') goto LAB_100baad8;
  }
  else {
    puVar9 = (undefined4 *)FUN_10130778(puVar2,0x10);
    if (puVar9 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar4 + 0x12e8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
      puVar9[1] = 0x10;
      puVar9[2] = iVar4;
      puVar9[3] = param_2;
      puVar9[4] = param_3;
      puVar9[5] = param_4;
      puVar3 = (undefined4 *)((int)puVar9 + 0x1bU & 0xfffffffc);
      *puVar3 = 0;
      *puVar9 = FUN_100bab60;
      puVar2[*(int *)(iVar4 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar4 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar4 + 0x1220));
        bVar7 = false;
      }
      goto LAB_100baaa8;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_1016c114)(100);
    FUN_101308d0(puVar2);
  }
  piVar1 = *(int **)(iVar4 + 0x12d0);
  *piVar1 = iVar4;
  piVar1[1] = param_2;
  piVar1[2] = param_3;
  piVar1[3] = param_4;
  FUN_100bab60(piVar1);
LAB_100baad8:
  if (bVar7) {
    *puVar2 = 0;
  }
  return;
}

