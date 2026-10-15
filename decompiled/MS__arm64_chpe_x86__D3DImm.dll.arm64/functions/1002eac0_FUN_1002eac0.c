/*
 * FUN_1002eac0 at 1002eac0
 * undefined FUN_1002eac0(void)
 * Address ranges: 1002eac0-1002ec9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002eac0(int param_1,int param_2,int *param_3)

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
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar10 = param_3[3];
  iVar11 = param_3[2];
  iVar12 = param_3[1];
  iVar5 = *(int *)(param_1 + 0x1d54);
  iVar13 = *param_3;
  puVar2 = (undefined4 *)(iVar5 + 0x11c0);
  FUN_10081528(puVar2);
  cVar4 = *(char *)(iVar5 + 0x12ec);
  bVar8 = true;
  if (cVar4 == '\0') {
LAB_1002ec10:
    if (cVar4 != '\0') goto LAB_1002ec60;
  }
  else {
    puVar9 = (undefined4 *)FUN_100813d0(puVar2,0x18);
    if (puVar9 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar5 + 0x12e8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      DataMemoryBarrier(2,3);
      puVar9[1] = 0x18;
      puVar9[2] = param_1;
      puVar9[3] = param_2;
      puVar9[4] = iVar13;
      puVar9[5] = iVar12;
      puVar9[6] = iVar11;
      puVar9[7] = iVar10;
      puVar3 = (undefined4 *)((int)puVar9 + 0x23U & 0xfffffffc);
      *puVar3 = 0;
      *puVar9 = FUN_1002eca0;
      puVar2[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_100a1064)(*(undefined4 *)(iVar5 + 0x1220));
        bVar8 = false;
      }
      goto LAB_1002ec10;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_100a1074)(100);
    FUN_10081528(puVar2);
  }
  piVar1 = *(int **)(iVar5 + 0x12d0);
  *piVar1 = param_1;
  piVar1[1] = param_2;
  piVar1[2] = iVar13;
  piVar1[3] = iVar12;
  piVar1[4] = iVar11;
  piVar1[5] = iVar10;
  FUN_1002eca0(piVar1);
LAB_1002ec60:
  if (bVar8) {
    *puVar2 = 0;
  }
  return;
}

