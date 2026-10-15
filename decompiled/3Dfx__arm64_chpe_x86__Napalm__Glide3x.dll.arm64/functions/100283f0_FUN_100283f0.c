/*
 * FUN_100283f0 at 100283f0
 * undefined FUN_100283f0(void)
 * Address ranges: 100283f0-1002878f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100283f0(int param_1,int param_2,uint param_3,undefined8 *param_4,int param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
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
  undefined8 uVar26;
  
  FUN_100226d8(param_1 + 0x3940);
  if (1 < param_3) {
    if (1 < param_3 - 2) {
      return;
    }
    iVar5 = *(int *)(param_1 + 0x3688);
    puVar12 = (undefined4 *)(iVar5 + 0x11c0);
    FUN_1004b290(puVar12);
    iVar2 = (int)param_4 + param_5 * 4;
    if (*(char *)(iVar5 + 0x12ec) != '\0') {
      iVar6 = (param_6 - param_5) * 4;
      puVar11 = (undefined4 *)FUN_1004b138(puVar12,iVar6 + 0x18);
      if (puVar11 != (undefined4 *)0x0) {
        piVar1 = (int *)(iVar5 + 0x12e8);
        do {
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
          if (bVar9) {
            *piVar1 = *piVar1 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        DataMemoryBarrier(2,3);
        puVar11[1] = iVar6 + 0x18;
        puVar11[3] = param_1;
        puVar11[4] = param_2;
        puVar11[5] = param_3;
        puVar11[6] = param_5;
        puVar11[7] = param_6;
        uVar3 = (int)puVar11 + 0x23U & 0xfffffffc;
        puVar11[2] = uVar3;
        FUN_10083b40(uVar3,iVar2,iVar6);
        *(undefined4 *)(uVar3 + iVar6) = 0;
        *puVar11 = FUN_100287e0;
        puVar12[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = (undefined4 *)(uVar3 + iVar6);
        if (*(char *)(iVar5 + 0x12ed) != '\0') {
          *puVar12 = 0;
          (*(code *)PTR_FUN_100a80c4)(*(undefined4 *)(iVar5 + 0x1220));
          return;
        }
        goto LAB_10028750;
      }
      *puVar12 = 0;
      (*(code *)PTR_FUN_100a80dc)(100);
      FUN_1004b290(puVar12);
    }
    piVar1 = *(int **)(iVar5 + 0x12d0);
    *piVar1 = iVar2;
    piVar1[1] = param_1;
    piVar1[2] = param_2;
    piVar1[3] = param_3;
    piVar1[4] = param_5;
    piVar1[5] = param_6;
    FUN_100287e0(piVar1);
    goto LAB_10028750;
  }
  uVar24 = param_4[1];
  uVar21 = *param_4;
  uVar17 = param_4[3];
  uVar13 = param_4[2];
  iVar2 = *(int *)(param_1 + 0x3688);
  uVar25 = param_4[5];
  uVar22 = param_4[4];
  uVar18 = param_4[7];
  uVar14 = param_4[6];
  puVar12 = (undefined4 *)(iVar2 + 0x11c0);
  uVar26 = param_4[9];
  uVar23 = param_4[8];
  uVar19 = param_4[0xb];
  uVar15 = param_4[10];
  uVar20 = param_4[0xd];
  uVar16 = param_4[0xc];
  FUN_1004b290(puVar12);
  cVar7 = *(char *)(iVar2 + 0x12ec);
  bVar9 = true;
  if (cVar7 == '\0') {
LAB_100286f0:
    if (cVar7 == '\0') goto LAB_100286f4;
  }
  else {
    puVar11 = (undefined4 *)FUN_1004b138(puVar12,0x84);
    if (puVar11 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar2 + 0x12e8);
      do {
        cVar8 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar10) {
          *piVar1 = *piVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      DataMemoryBarrier(2,3);
      puVar11[1] = 0x84;
      puVar11[2] = param_1;
      puVar11[3] = param_2;
      puVar11[4] = param_3;
      puVar11[5] = param_5;
      puVar11[6] = param_6;
      *(undefined8 *)(puVar11 + 9) = uVar24;
      *(undefined8 *)(puVar11 + 7) = uVar21;
      *(undefined8 *)(puVar11 + 0xd) = uVar17;
      *(undefined8 *)(puVar11 + 0xb) = uVar13;
      *(undefined8 *)(puVar11 + 0x11) = uVar25;
      *(undefined8 *)(puVar11 + 0xf) = uVar22;
      *(undefined8 *)(puVar11 + 0x15) = uVar18;
      *(undefined8 *)(puVar11 + 0x13) = uVar14;
      *(undefined8 *)(puVar11 + 0x19) = uVar26;
      *(undefined8 *)(puVar11 + 0x17) = uVar23;
      *(undefined8 *)(puVar11 + 0x1d) = uVar19;
      *(undefined8 *)(puVar11 + 0x1b) = uVar15;
      *(undefined8 *)(puVar11 + 0x21) = uVar20;
      *(undefined8 *)(puVar11 + 0x1f) = uVar16;
      puVar4 = (undefined4 *)((int)puVar11 + 0x8fU & 0xfffffffc);
      *puVar4 = 0;
      *puVar11 = FUN_100287a0;
      puVar12[*(int *)(iVar2 + 0x12e4) * 5 + 0x1a] = puVar4;
      if (*(char *)(iVar2 + 0x12ed) != '\0') {
        *puVar12 = 0;
        (*(code *)PTR_FUN_100a80c4)(*(undefined4 *)(iVar2 + 0x1220));
        bVar9 = false;
      }
      goto LAB_100286f0;
    }
    *puVar12 = 0;
    (*(code *)PTR_FUN_100a80dc)(100);
    FUN_1004b290(puVar12);
LAB_100286f4:
    piVar1 = *(int **)(iVar2 + 0x12d0);
    *piVar1 = param_1;
    piVar1[1] = param_2;
    piVar1[2] = param_3;
    piVar1[3] = param_5;
    piVar1[4] = param_6;
    *(undefined8 *)(piVar1 + 7) = uVar24;
    *(undefined8 *)(piVar1 + 5) = uVar21;
    *(undefined8 *)(piVar1 + 0xb) = uVar17;
    *(undefined8 *)(piVar1 + 9) = uVar13;
    *(undefined8 *)(piVar1 + 0xf) = uVar25;
    *(undefined8 *)(piVar1 + 0xd) = uVar22;
    *(undefined8 *)(piVar1 + 0x13) = uVar18;
    *(undefined8 *)(piVar1 + 0x11) = uVar14;
    *(undefined8 *)(piVar1 + 0x17) = uVar26;
    *(undefined8 *)(piVar1 + 0x15) = uVar23;
    *(undefined8 *)(piVar1 + 0x1b) = uVar19;
    *(undefined8 *)(piVar1 + 0x19) = uVar15;
    *(undefined8 *)(piVar1 + 0x1f) = uVar20;
    *(undefined8 *)(piVar1 + 0x1d) = uVar16;
    FUN_100287a0(piVar1);
  }
  if (!bVar9) {
    return;
  }
LAB_10028750:
  *puVar12 = 0;
  return;
}

