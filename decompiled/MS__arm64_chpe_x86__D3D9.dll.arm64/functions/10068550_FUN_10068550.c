/*
 * FUN_10068550 at 10068550
 * undefined FUN_10068550(void)
 * Address ranges: 10068550-1006878f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10068550(int param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  
  iVar13 = param_1 + 0xc000;
  piVar11 = (int *)FUN_100684c0(param_1 + 0xf734,param_2);
  if (piVar11 == (int *)0x0) {
    iVar18 = 0;
  }
  else {
    iVar18 = *piVar11;
  }
  uVar5 = *(uint *)(iVar13 + 0x373c);
  if (uVar5 != 0) {
    uVar6 = *param_2;
    uVar15 = 0;
    uVar14 = uVar5;
    do {
      uVar16 = uVar14 + uVar15 >> 1;
      uVar17 = *(ulonglong *)(*(int *)(param_1 + 0xf738) + uVar16 * 0x10);
      uVar10 = uVar16;
      if (uVar17 <= uVar6) {
        if (uVar6 <= uVar17) break;
        uVar15 = uVar16 + 1;
        uVar16 = uVar15;
        uVar10 = uVar14;
      }
      uVar14 = uVar10;
    } while (uVar14 != uVar15);
    if ((uVar16 != uVar5) &&
       (*(ulonglong *)(*(int *)(param_1 + 0xf738) + uVar16 * 0x10) == (ulonglong)uVar6)) {
      uVar16 = uVar16 + 1;
      if (uVar16 < uVar5) {
        do {
          puVar1 = (undefined8 *)(*(int *)(param_1 + 0xf738) + uVar16 * 0x10);
          uVar16 = uVar16 + 1;
          puVar1[-1] = puVar1[1];
          puVar1[-2] = *puVar1;
        } while (uVar16 < *(uint *)(iVar13 + 0x373c));
      }
      *(int *)(iVar13 + 0x373c) = *(int *)(iVar13 + 0x373c) + -1;
    }
  }
  iVar13 = *(int *)(iVar13 + 0x36b8);
  *(undefined8 *)(param_1 + 0xfd04) = 0;
  uVar5 = *param_2;
  puVar2 = (undefined4 *)(iVar13 + 0x11c0);
  FUN_101308d0(puVar2);
  cVar4 = *(char *)(iVar13 + 0x12ec);
  bVar9 = true;
  if (cVar4 == '\0') {
LAB_1006872c:
    if (cVar4 != '\0') goto LAB_10068754;
  }
  else {
    puVar12 = (undefined4 *)FUN_10130778(puVar2,0xc);
    if (puVar12 != (undefined4 *)0x0) {
      piVar11 = (int *)(iVar13 + 0x12e8);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar11),0x10);
        if (bVar8) {
          *piVar11 = *piVar11 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      DataMemoryBarrier(2,3);
      puVar12[1] = 0xc;
      puVar12[2] = param_1;
      puVar12[3] = iVar18;
      puVar12[4] = uVar5;
      puVar3 = (undefined4 *)((int)puVar12 + 0x17U & 0xfffffffc);
      *puVar3 = 0;
      *puVar12 = FUN_100687a0;
      puVar2[*(int *)(iVar13 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar13 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar13 + 0x1220));
        bVar9 = false;
      }
      goto LAB_1006872c;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_1016c114)(100);
    FUN_101308d0(puVar2);
  }
  piVar11 = *(int **)(iVar13 + 0x12d0);
  *piVar11 = param_1;
  piVar11[1] = iVar18;
  piVar11[2] = uVar5;
  FUN_100687a0(piVar11);
LAB_10068754:
  if (bVar9) {
    *puVar2 = 0;
  }
  return;
}

