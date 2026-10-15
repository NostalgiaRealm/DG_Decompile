/*
 * FUN_100c50f0 at 100c50f0
 * undefined FUN_100c50f0(void)
 * Address ranges: 100c50f0-100c5237
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100c50f0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  undefined4 *puVar9;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x14) + 0x1cf00) +
          *(int *)(*(int *)(param_1 + 0x14) + 0x14) * 0x16c0;
  puVar2 = (undefined4 *)(iVar5 + 0x1880);
  FUN_101308d0(puVar2);
  cVar4 = *(char *)(iVar5 + 0x19ac);
  bVar8 = true;
  if (cVar4 == '\0') {
LAB_100c51e8:
    if (cVar4 != '\0') goto LAB_100c5200;
  }
  else {
    puVar9 = (undefined4 *)FUN_10130778(puVar2,4);
    if (puVar9 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar5 + 0x19a8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      DataMemoryBarrier(2,3);
      puVar9[1] = 4;
      puVar9[2] = param_1 + -0x1c;
      puVar3 = (undefined4 *)((int)puVar9 + 0xfU & 0xfffffffc);
      *puVar3 = 0;
      *puVar9 = FUN_100c5240;
      puVar2[*(int *)(iVar5 + 0x19a4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar5 + 0x19ad) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar5 + 0x18e0));
        bVar8 = false;
      }
      goto LAB_100c51e8;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_1016c114)(100);
    FUN_101308d0(puVar2);
  }
  piVar1 = *(int **)(iVar5 + 0x1990);
  *piVar1 = param_1 + -0x1c;
  FUN_100c5240(piVar1);
LAB_100c5200:
  if (bVar8) {
    *puVar2 = 0;
  }
  return;
}

