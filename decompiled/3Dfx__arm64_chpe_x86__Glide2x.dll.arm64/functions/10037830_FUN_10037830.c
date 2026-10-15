/*
 * FUN_10037830 at 10037830
 * undefined FUN_10037830(void)
 * Address ranges: 10037830-10037a43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10037830(int param_1,undefined8 *param_2,undefined8 *param_3)

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
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  FUN_10032bf8(param_1 + 0x3440);
  uVar12 = param_3[6];
  uVar24 = param_3[1];
  uVar22 = *param_3;
  uVar18 = param_3[3];
  uVar14 = param_3[2];
  iVar5 = *(int *)(param_3 + 7);
  uVar19 = param_3[5];
  uVar15 = param_3[4];
  uVar13 = param_2[6];
  uVar25 = param_2[1];
  uVar23 = *param_2;
  uVar20 = param_2[3];
  uVar16 = param_2[2];
  iVar6 = *(int *)(param_2 + 7);
  uVar21 = param_2[5];
  uVar17 = param_2[4];
  iVar7 = *(int *)(param_1 + 0x3188);
  puVar2 = (undefined4 *)(iVar7 + 0x11c0);
  FUN_10054e70(puVar2);
  cVar4 = *(char *)(iVar7 + 0x12ec);
  bVar10 = true;
  if (cVar4 == '\0') {
LAB_100379ac:
    if (cVar4 != '\0') goto LAB_10037a0c;
  }
  else {
    puVar11 = (undefined4 *)FUN_10054d18(puVar2,0x7c);
    if (puVar11 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar7 + 0x12e8);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar9) {
          *piVar1 = *piVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      DataMemoryBarrier(2,3);
      puVar11[1] = 0x7c;
      puVar11[2] = param_1;
      *(undefined8 *)(puVar11 + 5) = uVar25;
      *(undefined8 *)(puVar11 + 3) = uVar23;
      *(undefined8 *)(puVar11 + 9) = uVar20;
      *(undefined8 *)(puVar11 + 7) = uVar16;
      *(undefined8 *)(puVar11 + 0xd) = uVar21;
      *(undefined8 *)(puVar11 + 0xb) = uVar17;
      *(undefined8 *)(puVar11 + 0xf) = uVar13;
      puVar11[0x11] = iVar6;
      *(undefined8 *)(puVar11 + 0x14) = uVar24;
      *(undefined8 *)(puVar11 + 0x12) = uVar22;
      *(undefined8 *)(puVar11 + 0x18) = uVar18;
      *(undefined8 *)(puVar11 + 0x16) = uVar14;
      *(undefined8 *)(puVar11 + 0x1c) = uVar19;
      *(undefined8 *)(puVar11 + 0x1a) = uVar15;
      *(undefined8 *)(puVar11 + 0x1e) = uVar12;
      puVar11[0x20] = iVar5;
      puVar3 = (undefined4 *)((int)puVar11 + 0x87U & 0xfffffffc);
      *puVar3 = 0;
      *puVar11 = FUN_10037a50;
      puVar2[*(int *)(iVar7 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar7 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_1009d0c4)(*(undefined4 *)(iVar7 + 0x1220));
        bVar10 = false;
      }
      goto LAB_100379ac;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_1009d0dc)(100);
    FUN_10054e70(puVar2);
  }
  piVar1 = *(int **)(iVar7 + 0x12d0);
  *piVar1 = param_1;
  *(undefined8 *)(piVar1 + 3) = uVar25;
  *(undefined8 *)(piVar1 + 1) = uVar23;
  *(undefined8 *)(piVar1 + 7) = uVar20;
  *(undefined8 *)(piVar1 + 5) = uVar16;
  *(undefined8 *)(piVar1 + 0xb) = uVar21;
  *(undefined8 *)(piVar1 + 9) = uVar17;
  *(undefined8 *)(piVar1 + 0xd) = uVar13;
  piVar1[0xf] = iVar6;
  *(undefined8 *)(piVar1 + 0x12) = uVar24;
  *(undefined8 *)(piVar1 + 0x10) = uVar22;
  *(undefined8 *)(piVar1 + 0x16) = uVar18;
  *(undefined8 *)(piVar1 + 0x14) = uVar14;
  *(undefined8 *)(piVar1 + 0x1a) = uVar19;
  *(undefined8 *)(piVar1 + 0x18) = uVar15;
  *(undefined8 *)(piVar1 + 0x1c) = uVar12;
  piVar1[0x1e] = iVar5;
  FUN_10037a50(piVar1);
LAB_10037a0c:
  if (bVar10) {
    *puVar2 = 0;
  }
  return;
}

