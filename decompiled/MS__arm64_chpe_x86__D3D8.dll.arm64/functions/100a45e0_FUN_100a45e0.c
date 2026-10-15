/*
 * FUN_100a45e0 at 100a45e0
 * undefined FUN_100a45e0(void)
 * Address ranges: 100a45e0-100a479b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a45e0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  undefined4 *puVar12;
  
  iVar7 = *(int *)(param_1 + -0x80) + *(int *)(*(int *)(param_1 + 0x24) + 8) * 0x16c0;
  iVar11 = FUN_100a3b18(param_1 + -0xc0);
  iVar5 = *(int *)(param_1 + 0x20);
  puVar2 = (undefined4 *)(iVar7 + 0x1880);
  iVar6 = *(int *)(param_1 + -0x80);
  FUN_100fd300(puVar2);
  cVar4 = *(char *)(iVar7 + 0x19ac);
  bVar10 = true;
  if (cVar4 == '\0') {
LAB_100a4720:
    if (cVar4 != '\0') goto LAB_100a4758;
  }
  else {
    puVar12 = (undefined4 *)FUN_100fd1a8(puVar2,0x14);
    if (puVar12 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar7 + 0x19a8);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar9) {
          *piVar1 = *piVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      DataMemoryBarrier(2,3);
      puVar12[1] = 0x14;
      puVar12[2] = iVar6;
      puVar12[3] = iVar11;
      puVar12[4] = iVar5;
      puVar12[5] = param_2;
      puVar12[6] = param_3;
      puVar3 = (undefined4 *)((int)puVar12 + 0x1fU & 0xfffffffc);
      *puVar3 = 0;
      *puVar12 = FUN_100a47a0;
      puVar2[*(int *)(iVar7 + 0x19a4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar7 + 0x19ad) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_101340fc)(*(undefined4 *)(iVar7 + 0x18e0));
        bVar10 = false;
      }
      goto LAB_100a4720;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_10134114)(100);
    FUN_100fd300(puVar2);
  }
  piVar1 = *(int **)(iVar7 + 0x1990);
  *piVar1 = iVar6;
  piVar1[1] = iVar11;
  piVar1[2] = iVar5;
  piVar1[3] = param_2;
  piVar1[4] = param_3;
  FUN_100a47a0(piVar1);
LAB_100a4758:
  if (bVar10) {
    *puVar2 = 0;
  }
  return;
}

