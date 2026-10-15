/*
 * FUN_10067c80 at 10067c80
 * undefined FUN_10067c80(void)
 * Address ranges: 10067c80-10067e4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10067c80(int param_1,int param_2,undefined8 *param_3)

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
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar11 = param_3[0xc];
  uVar21 = param_3[1];
  uVar18 = *param_3;
  uVar15 = param_3[3];
  uVar12 = param_3[2];
  iVar5 = *(int *)(param_3 + 0xd);
  uVar22 = param_3[5];
  uVar19 = param_3[4];
  uVar16 = param_3[7];
  uVar13 = param_3[6];
  uVar23 = param_3[9];
  uVar20 = param_3[8];
  uVar17 = param_3[0xb];
  uVar14 = param_3[10];
  iVar6 = *(int *)(param_1 + 0xf6b8);
  puVar2 = (undefined4 *)(iVar6 + 0x11c0);
  FUN_101308d0(puVar2);
  cVar4 = *(char *)(iVar6 + 0x12ec);
  bVar9 = true;
  if (cVar4 == '\0') {
LAB_10067dc8:
    if (cVar4 != '\0') goto LAB_10067e14;
  }
  else {
    puVar10 = (undefined4 *)FUN_10130778(puVar2,0x74);
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
      puVar10[1] = 0x74;
      puVar10[2] = param_1;
      puVar10[3] = param_2;
      *(undefined8 *)(puVar10 + 6) = uVar21;
      *(undefined8 *)(puVar10 + 4) = uVar18;
      *(undefined8 *)(puVar10 + 10) = uVar15;
      *(undefined8 *)(puVar10 + 8) = uVar12;
      *(undefined8 *)(puVar10 + 0xe) = uVar22;
      *(undefined8 *)(puVar10 + 0xc) = uVar19;
      *(undefined8 *)(puVar10 + 0x12) = uVar16;
      *(undefined8 *)(puVar10 + 0x10) = uVar13;
      *(undefined8 *)(puVar10 + 0x16) = uVar23;
      *(undefined8 *)(puVar10 + 0x14) = uVar20;
      *(undefined8 *)(puVar10 + 0x1a) = uVar17;
      *(undefined8 *)(puVar10 + 0x18) = uVar14;
      *(undefined8 *)(puVar10 + 0x1c) = uVar11;
      puVar10[0x1e] = iVar5;
      puVar3 = (undefined4 *)((int)puVar10 + 0x7fU & 0xfffffffc);
      *puVar3 = 0;
      *puVar10 = FUN_10067e60;
      puVar2[*(int *)(iVar6 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar6 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar6 + 0x1220));
        bVar9 = false;
      }
      goto LAB_10067dc8;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_1016c114)(100);
    FUN_101308d0(puVar2);
  }
  piVar1 = *(int **)(iVar6 + 0x12d0);
  *piVar1 = param_1;
  piVar1[1] = param_2;
  *(undefined8 *)(piVar1 + 4) = uVar21;
  *(undefined8 *)(piVar1 + 2) = uVar18;
  *(undefined8 *)(piVar1 + 8) = uVar15;
  *(undefined8 *)(piVar1 + 6) = uVar12;
  *(undefined8 *)(piVar1 + 0xc) = uVar22;
  *(undefined8 *)(piVar1 + 10) = uVar19;
  *(undefined8 *)(piVar1 + 0x10) = uVar16;
  *(undefined8 *)(piVar1 + 0xe) = uVar13;
  *(undefined8 *)(piVar1 + 0x14) = uVar23;
  *(undefined8 *)(piVar1 + 0x12) = uVar20;
  *(undefined8 *)(piVar1 + 0x18) = uVar17;
  *(undefined8 *)(piVar1 + 0x16) = uVar14;
  *(undefined8 *)(piVar1 + 0x1a) = uVar11;
  piVar1[0x1c] = iVar5;
  FUN_10067e60(piVar1);
LAB_10067e14:
  if (bVar9) {
    *puVar2 = 0;
  }
  return;
}

