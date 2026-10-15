/*
 * FUN_1002e760 at 1002e760
 * undefined FUN_1002e760(void)
 * Address ranges: 1002e760-1002ea2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002e760(int param_1,undefined8 *param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
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
  
  iVar5 = *(int *)(param_1 + 0x1d54);
  if (param_2 == (undefined8 *)0x0) {
    puVar2 = (undefined4 *)(iVar5 + 0x11c0);
    FUN_10081528(puVar2);
    cVar4 = *(char *)(iVar5 + 0x12ec);
    bVar8 = true;
    if (cVar4 == '\0') {
LAB_1002e9dc:
      if (cVar4 != '\0') goto LAB_1002e9f4;
    }
    else {
      puVar9 = (undefined4 *)FUN_100813d0(puVar2,4);
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
        puVar9[1] = 4;
        puVar9[2] = param_1;
        puVar3 = (undefined4 *)((int)puVar9 + 0xfU & 0xfffffffc);
        *puVar3 = 0;
        *puVar9 = FUN_1002ea60;
        puVar2[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = puVar3;
        if (*(char *)(iVar5 + 0x12ed) != '\0') {
          *puVar2 = 0;
          (*(code *)PTR_FUN_100a1064)(*(undefined4 *)(iVar5 + 0x1220));
          bVar8 = false;
        }
        goto LAB_1002e9dc;
      }
      *puVar2 = 0;
      (*(code *)PTR_FUN_100a1074)(100);
      FUN_10081528(puVar2);
    }
    piVar1 = *(int **)(iVar5 + 0x12d0);
    *piVar1 = param_1;
    FUN_1002ea60(piVar1);
LAB_1002e9f4:
    if (!bVar8) {
      return;
    }
    *puVar2 = 0;
    return;
  }
  uVar22 = param_2[1];
  uVar18 = *param_2;
  uVar14 = param_2[3];
  uVar10 = param_2[2];
  puVar2 = (undefined4 *)(iVar5 + 0x11c0);
  uVar23 = param_2[5];
  uVar19 = param_2[4];
  uVar15 = param_2[7];
  uVar11 = param_2[6];
  uVar24 = param_2[9];
  uVar20 = param_2[8];
  uVar16 = param_2[0xb];
  uVar12 = param_2[10];
  uVar25 = param_2[0xd];
  uVar21 = param_2[0xc];
  uVar17 = param_2[0xf];
  uVar13 = param_2[0xe];
  FUN_10081528(puVar2);
  cVar4 = *(char *)(iVar5 + 0x12ec);
  bVar8 = true;
  if (cVar4 == '\0') {
LAB_1002e8b4:
    if (cVar4 != '\0') goto LAB_1002e8f4;
  }
  else {
    puVar9 = (undefined4 *)FUN_100813d0(puVar2,0x84);
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
      puVar9[1] = 0x84;
      puVar9[2] = param_1;
      *(undefined8 *)(puVar9 + 5) = uVar22;
      *(undefined8 *)(puVar9 + 3) = uVar18;
      *(undefined8 *)(puVar9 + 9) = uVar14;
      *(undefined8 *)(puVar9 + 7) = uVar10;
      *(undefined8 *)(puVar9 + 0xd) = uVar23;
      *(undefined8 *)(puVar9 + 0xb) = uVar19;
      *(undefined8 *)(puVar9 + 0x11) = uVar15;
      *(undefined8 *)(puVar9 + 0xf) = uVar11;
      puVar3 = (undefined4 *)((int)puVar9 + 0x8fU & 0xfffffffc);
      *(undefined8 *)(puVar9 + 0x15) = uVar24;
      *(undefined8 *)(puVar9 + 0x13) = uVar20;
      *(undefined8 *)(puVar9 + 0x19) = uVar16;
      *(undefined8 *)(puVar9 + 0x17) = uVar12;
      *(undefined8 *)(puVar9 + 0x1d) = uVar25;
      *(undefined8 *)(puVar9 + 0x1b) = uVar21;
      *(undefined8 *)(puVar9 + 0x21) = uVar17;
      *(undefined8 *)(puVar9 + 0x1f) = uVar13;
      *puVar3 = 0;
      *puVar9 = FUN_1002ea40;
      puVar2[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_100a1064)(*(undefined4 *)(iVar5 + 0x1220));
        bVar8 = false;
      }
      goto LAB_1002e8b4;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_100a1074)(100);
    FUN_10081528(puVar2);
  }
  piVar1 = *(int **)(iVar5 + 0x12d0);
  *piVar1 = param_1;
  *(undefined8 *)(piVar1 + 3) = uVar22;
  *(undefined8 *)(piVar1 + 1) = uVar18;
  *(undefined8 *)(piVar1 + 7) = uVar14;
  *(undefined8 *)(piVar1 + 5) = uVar10;
  *(undefined8 *)(piVar1 + 0xb) = uVar23;
  *(undefined8 *)(piVar1 + 9) = uVar19;
  *(undefined8 *)(piVar1 + 0xf) = uVar15;
  *(undefined8 *)(piVar1 + 0xd) = uVar11;
  *(undefined8 *)(piVar1 + 0x13) = uVar24;
  *(undefined8 *)(piVar1 + 0x11) = uVar20;
  *(undefined8 *)(piVar1 + 0x17) = uVar16;
  *(undefined8 *)(piVar1 + 0x15) = uVar12;
  *(undefined8 *)(piVar1 + 0x1b) = uVar25;
  *(undefined8 *)(piVar1 + 0x19) = uVar21;
  *(undefined8 *)(piVar1 + 0x1f) = uVar17;
  *(undefined8 *)(piVar1 + 0x1d) = uVar13;
  FUN_1002ea40(piVar1);
LAB_1002e8f4:
  if (bVar8) {
    *puVar2 = 0;
  }
  return;
}

