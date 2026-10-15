/*
 * FUN_10036910 at 10036910
 * undefined FUN_10036910(void)
 * Address ranges: 10036910-10036bab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10036910(int param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined1 param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  bool bVar11;
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
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  FUN_10032bf8(param_1 + 0x3440);
  uVar13 = param_4[6];
  uVar31 = param_4[1];
  uVar28 = *param_4;
  uVar22 = param_4[3];
  uVar16 = param_4[2];
  iVar5 = *(int *)(param_4 + 7);
  uVar23 = param_4[5];
  uVar17 = param_4[4];
  uVar14 = param_3[6];
  uVar32 = param_3[1];
  uVar29 = *param_3;
  uVar24 = param_3[3];
  uVar18 = param_3[2];
  iVar6 = *(int *)(param_3 + 7);
  uVar25 = param_3[5];
  uVar19 = param_3[4];
  uVar15 = param_2[6];
  uVar33 = param_2[1];
  uVar30 = *param_2;
  uVar26 = param_2[3];
  uVar20 = param_2[2];
  iVar7 = *(int *)(param_2 + 7);
  uVar27 = param_2[5];
  uVar21 = param_2[4];
  iVar8 = *(int *)(param_1 + 0x3188);
  puVar2 = (undefined4 *)(iVar8 + 0x11c0);
  FUN_10054e70(puVar2);
  cVar4 = *(char *)(iVar8 + 0x12ec);
  bVar11 = true;
  if (cVar4 == '\0') {
LAB_10036ae4:
    if (cVar4 != '\0') goto LAB_10036b70;
  }
  else {
    puVar12 = (undefined4 *)FUN_10054d18(puVar2,0xbc);
    if (puVar12 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar8 + 0x12e8);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar10) {
          *piVar1 = *piVar1 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      DataMemoryBarrier(2,3);
      puVar12[1] = 0xbc;
      puVar12[2] = param_1;
      *(undefined8 *)(puVar12 + 5) = uVar33;
      *(undefined8 *)(puVar12 + 3) = uVar30;
      *(undefined8 *)(puVar12 + 9) = uVar26;
      *(undefined8 *)(puVar12 + 7) = uVar20;
      *(undefined8 *)(puVar12 + 0xd) = uVar27;
      *(undefined8 *)(puVar12 + 0xb) = uVar21;
      *(undefined8 *)(puVar12 + 0xf) = uVar15;
      puVar12[0x11] = iVar7;
      *(undefined8 *)(puVar12 + 0x14) = uVar32;
      *(undefined8 *)(puVar12 + 0x12) = uVar29;
      *(undefined8 *)(puVar12 + 0x18) = uVar24;
      *(undefined8 *)(puVar12 + 0x16) = uVar18;
      *(undefined8 *)(puVar12 + 0x1c) = uVar25;
      *(undefined8 *)(puVar12 + 0x1a) = uVar19;
      *(undefined8 *)(puVar12 + 0x1e) = uVar14;
      puVar12[0x20] = iVar6;
      *(undefined8 *)(puVar12 + 0x23) = uVar31;
      *(undefined8 *)(puVar12 + 0x21) = uVar28;
      *(undefined8 *)(puVar12 + 0x27) = uVar22;
      *(undefined8 *)(puVar12 + 0x25) = uVar16;
      *(undefined8 *)(puVar12 + 0x2b) = uVar23;
      *(undefined8 *)(puVar12 + 0x29) = uVar17;
      *(undefined8 *)(puVar12 + 0x2d) = uVar13;
      puVar12[0x2f] = iVar5;
      *(undefined1 *)(puVar12 + 0x30) = param_5;
      puVar3 = (undefined4 *)((int)puVar12 + 199U & 0xfffffffc);
      *puVar3 = 0;
      *puVar12 = FUN_10036bb0;
      puVar2[*(int *)(iVar8 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar8 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_1009d0c4)(*(undefined4 *)(iVar8 + 0x1220));
        bVar11 = false;
      }
      goto LAB_10036ae4;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_1009d0dc)(100);
    FUN_10054e70(puVar2);
  }
  piVar1 = *(int **)(iVar8 + 0x12d0);
  *piVar1 = param_1;
  *(undefined8 *)(piVar1 + 3) = uVar33;
  *(undefined8 *)(piVar1 + 1) = uVar30;
  *(undefined8 *)(piVar1 + 7) = uVar26;
  *(undefined8 *)(piVar1 + 5) = uVar20;
  *(undefined8 *)(piVar1 + 0xb) = uVar27;
  *(undefined8 *)(piVar1 + 9) = uVar21;
  *(undefined8 *)(piVar1 + 0xd) = uVar15;
  piVar1[0xf] = iVar7;
  *(undefined8 *)(piVar1 + 0x12) = uVar32;
  *(undefined8 *)(piVar1 + 0x10) = uVar29;
  *(undefined8 *)(piVar1 + 0x16) = uVar24;
  *(undefined8 *)(piVar1 + 0x14) = uVar18;
  *(undefined8 *)(piVar1 + 0x1a) = uVar25;
  *(undefined8 *)(piVar1 + 0x18) = uVar19;
  *(undefined8 *)(piVar1 + 0x1c) = uVar14;
  piVar1[0x1e] = iVar6;
  *(undefined8 *)(piVar1 + 0x21) = uVar31;
  *(undefined8 *)(piVar1 + 0x1f) = uVar28;
  *(undefined8 *)(piVar1 + 0x25) = uVar22;
  *(undefined8 *)(piVar1 + 0x23) = uVar16;
  *(undefined8 *)(piVar1 + 0x29) = uVar23;
  *(undefined8 *)(piVar1 + 0x27) = uVar17;
  *(undefined8 *)(piVar1 + 0x2b) = uVar13;
  piVar1[0x2d] = iVar5;
  *(undefined1 *)(piVar1 + 0x2e) = param_5;
  FUN_10036bb0(piVar1);
LAB_10036b70:
  if (bVar11) {
    *puVar2 = 0;
  }
  return;
}

