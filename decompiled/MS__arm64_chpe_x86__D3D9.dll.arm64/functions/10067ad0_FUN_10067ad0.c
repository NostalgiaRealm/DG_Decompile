/*
 * FUN_10067ad0 at 10067ad0
 * undefined FUN_10067ad0(void)
 * Address ranges: 10067ad0-10067c53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10067ad0(int param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  iVar5 = *(int *)(param_2 + 8);
  uVar17 = param_2[1];
  uVar15 = *param_2;
  uVar13 = param_2[3];
  uVar11 = param_2[2];
  uVar18 = param_2[5];
  uVar16 = param_2[4];
  uVar14 = param_2[7];
  uVar12 = param_2[6];
  iVar6 = *(int *)(param_1 + 0xf6b8);
  puVar2 = (undefined4 *)(iVar6 + 0x11c0);
  FUN_101308d0(puVar2);
  cVar4 = *(char *)(iVar6 + 0x12ec);
  bVar9 = true;
  if (cVar4 == '\0') {
LAB_10067be8:
    if (cVar4 != '\0') goto LAB_10067c1c;
  }
  else {
    puVar10 = (undefined4 *)FUN_10130778(puVar2,0x48);
    if (puVar10 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar6 + 0x12e8);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar8) {
          *piVar1 = *piVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      DataMemoryBarrier(2,3);
      puVar10[1] = 0x48;
      puVar10[2] = param_1;
      *(undefined8 *)(puVar10 + 5) = uVar17;
      *(undefined8 *)(puVar10 + 3) = uVar15;
      *(undefined8 *)(puVar10 + 9) = uVar13;
      *(undefined8 *)(puVar10 + 7) = uVar11;
      *(undefined8 *)(puVar10 + 0xd) = uVar18;
      *(undefined8 *)(puVar10 + 0xb) = uVar16;
      *(undefined8 *)(puVar10 + 0x11) = uVar14;
      *(undefined8 *)(puVar10 + 0xf) = uVar12;
      puVar10[0x13] = iVar5;
      puVar3 = (undefined4 *)((int)puVar10 + 0x53U & 0xfffffffc);
      *puVar3 = 0;
      *puVar10 = FUN_10067c60;
      puVar2[*(int *)(iVar6 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar6 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar6 + 0x1220));
        bVar9 = false;
      }
      goto LAB_10067be8;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_1016c114)(100);
    FUN_101308d0(puVar2);
  }
  piVar1 = *(int **)(iVar6 + 0x12d0);
  *piVar1 = param_1;
  *(undefined8 *)(piVar1 + 3) = uVar17;
  *(undefined8 *)(piVar1 + 1) = uVar15;
  *(undefined8 *)(piVar1 + 7) = uVar13;
  *(undefined8 *)(piVar1 + 5) = uVar11;
  *(undefined8 *)(piVar1 + 0xb) = uVar18;
  *(undefined8 *)(piVar1 + 9) = uVar16;
  *(undefined8 *)(piVar1 + 0xf) = uVar14;
  *(undefined8 *)(piVar1 + 0xd) = uVar12;
  piVar1[0x11] = iVar5;
  FUN_10067c60(piVar1);
LAB_10067c1c:
  if (bVar9) {
    *puVar2 = 0;
  }
  return;
}

