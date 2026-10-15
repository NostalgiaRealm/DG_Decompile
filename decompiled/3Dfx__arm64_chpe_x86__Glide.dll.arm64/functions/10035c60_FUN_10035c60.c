/*
 * FUN_10035c60 at 10035c60
 * undefined FUN_10035c60(void)
 * Address ranges: 10035c60-10035ffb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10035c60(int param_1,int param_2,uint param_3,undefined8 *param_4,int param_5,int param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
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
  
  FUN_10033078(param_1 + 0x3440);
  if (param_3 == 2) {
    iVar6 = *(int *)(param_1 + 0x3188);
    puVar12 = (undefined4 *)(iVar6 + 0x11c0);
    FUN_100552f0(puVar12);
    iVar5 = (int)param_4 + param_5 * 4;
    if (*(char *)(iVar6 + 0x12ec) != '\0') {
      iVar7 = (param_6 - param_5) * 4;
      puVar11 = (undefined4 *)FUN_10055198(puVar12,iVar7 + 0x18);
      if (puVar11 != (undefined4 *)0x0) {
        piVar1 = (int *)(iVar6 + 0x12e8);
        do {
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
          if (bVar10) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
        puVar11[1] = iVar7 + 0x18;
        puVar11[3] = param_1;
        puVar11[4] = param_2;
        puVar11[5] = 2;
        puVar11[6] = param_5;
        puVar11[7] = param_6;
        uVar3 = (int)puVar11 + 0x23U & 0xfffffffc;
        puVar11[2] = uVar3;
        FUN_1007ac00(uVar3,iVar5,iVar7);
        *(undefined4 *)(uVar3 + iVar7) = 0;
        *puVar11 = FUN_10036040;
        puVar12[*(int *)(iVar6 + 0x12e4) * 5 + 0x1a] = (undefined4 *)(uVar3 + iVar7);
        if (*(char *)(iVar6 + 0x12ed) != '\0') {
          *puVar12 = 0;
          (*(code *)PTR_FUN_1009d0c4)(*(undefined4 *)(iVar6 + 0x1220));
          return;
        }
        goto LAB_10035fdc;
      }
      *puVar12 = 0;
      (*(code *)PTR_FUN_1009d0dc)(100);
      FUN_100552f0(puVar12);
    }
    piVar1 = *(int **)(iVar6 + 0x12d0);
    *piVar1 = iVar5;
    piVar1[1] = param_1;
    piVar1[2] = param_2;
    piVar1[3] = 2;
    piVar1[4] = param_5;
    piVar1[5] = param_6;
    FUN_10036040(piVar1);
    goto LAB_10035fdc;
  }
  if (1 < param_3) {
    return;
  }
  uVar24 = param_4[1];
  uVar21 = *param_4;
  uVar17 = param_4[3];
  uVar13 = param_4[2];
  iVar5 = *(int *)(param_1 + 0x3188);
  uVar25 = param_4[5];
  uVar22 = param_4[4];
  uVar18 = param_4[7];
  uVar14 = param_4[6];
  puVar12 = (undefined4 *)(iVar5 + 0x11c0);
  uVar26 = param_4[9];
  uVar23 = param_4[8];
  uVar19 = param_4[0xb];
  uVar15 = param_4[10];
  uVar20 = param_4[0xd];
  uVar16 = param_4[0xc];
  FUN_100552f0(puVar12);
  cVar4 = *(char *)(iVar5 + 0x12ec);
  bVar10 = true;
  if (cVar4 == '\0') {
LAB_10035de4:
    if (cVar4 == '\0') goto LAB_10035de8;
  }
  else {
    puVar11 = (undefined4 *)FUN_10055198(puVar12,0x84);
    if (puVar11 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar5 + 0x12e8);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar9) {
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
      puVar2 = (undefined4 *)((int)puVar11 + 0x8fU & 0xfffffffc);
      *puVar2 = 0;
      *puVar11 = FUN_10036000;
      puVar12[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = puVar2;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *puVar12 = 0;
        (*(code *)PTR_FUN_1009d0c4)(*(undefined4 *)(iVar5 + 0x1220));
        bVar10 = false;
      }
      goto LAB_10035de4;
    }
    *puVar12 = 0;
    (*(code *)PTR_FUN_1009d0dc)(100);
    FUN_100552f0(puVar12);
LAB_10035de8:
    piVar1 = *(int **)(iVar5 + 0x12d0);
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
    FUN_10036000(piVar1);
  }
  if (!bVar10) {
    return;
  }
LAB_10035fdc:
  *puVar12 = 0;
  return;
}

