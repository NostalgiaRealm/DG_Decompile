/*
 * FUN_10096750 at 10096750
 * undefined FUN_10096750(void)
 * Address ranges: 10096750-10096a9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_10096750(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            undefined8 *param_8)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  code *pcVar10;
  char cVar11;
  undefined4 *puVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  pcVar10 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar6 = 0;
  if (param_7 != 0) {
    iVar6 = param_7 + -0xc0;
  }
  iVar4 = 0;
  if (param_6 != 0) {
    iVar4 = param_6 + -0xc0;
  }
  iVar5 = param_6 + -0xc0;
  if (*(int *)(param_6 + 4) == 0) {
    iVar5 = iVar4;
  }
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  cVar11 = (*extraout_w11)(iVar6);
  if (cVar11 != '\0') {
    (*pcVar10)();
    cVar11 = (*extraout_w11_00)(iVar5);
    if (cVar11 != '\0') {
      (*pcVar10)();
      fVar13 = (float)(*extraout_w11_01)(iVar6);
      (*pcVar10)();
      fVar14 = (float)(*extraout_w11_02)(iVar5);
      if (fVar13 <= fVar14) {
        (*pcVar10)();
        fVar13 = (float)(*extraout_w11_03)(iVar6);
        (*pcVar10)();
        fVar14 = (float)(*extraout_w11_04)(iVar5);
        if (fVar13 <= fVar14) goto LAB_100968c8;
      }
      FUN_100a2b80(iVar5);
    }
  }
LAB_100968c8:
  iVar6 = *(int *)(param_1 + 0x1cf04);
  uVar20 = param_8[1];
  uVar19 = *param_8;
  uVar17 = param_8[3];
  uVar15 = param_8[2];
  puVar2 = (undefined4 *)(iVar6 + 0x11c0);
  uVar18 = param_8[5];
  uVar16 = param_8[4];
  FUN_100fd300(puVar2);
  cVar11 = *(char *)(iVar6 + 0x12ec);
  bVar9 = true;
  if (cVar11 == '\0') {
LAB_100969f4:
    if (cVar11 != '\0') goto LAB_10096a58;
  }
  else {
    puVar12 = (undefined4 *)FUN_100fd1a8(puVar2,0x4c);
    if (puVar12 != (undefined4 *)0x0) {
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
      puVar12[1] = 0x4c;
      puVar12[2] = param_1;
      puVar12[3] = param_2;
      puVar12[4] = param_3;
      puVar12[5] = param_4;
      puVar12[6] = param_5;
      puVar12[7] = param_6;
      puVar12[8] = param_7;
      *(undefined8 *)(puVar12 + 0xb) = uVar20;
      *(undefined8 *)(puVar12 + 9) = uVar19;
      *(undefined8 *)(puVar12 + 0xf) = uVar17;
      *(undefined8 *)(puVar12 + 0xd) = uVar15;
      *(undefined8 *)(puVar12 + 0x13) = uVar18;
      *(undefined8 *)(puVar12 + 0x11) = uVar16;
      puVar3 = (undefined4 *)((int)puVar12 + 0x57U & 0xfffffffc);
      *puVar3 = 0;
      *puVar12 = FUN_10096ab0;
      puVar2[*(int *)(iVar6 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar6 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_101340fc)(*(undefined4 *)(iVar6 + 0x1220));
        bVar9 = false;
      }
      goto LAB_100969f4;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_10134114)(100);
    FUN_100fd300(puVar2);
  }
  piVar1 = *(int **)(iVar6 + 0x12d0);
  *piVar1 = param_1;
  piVar1[1] = param_2;
  piVar1[2] = param_3;
  piVar1[3] = param_4;
  piVar1[4] = param_5;
  piVar1[5] = param_6;
  piVar1[6] = param_7;
  *(undefined8 *)(piVar1 + 9) = uVar20;
  *(undefined8 *)(piVar1 + 7) = uVar19;
  *(undefined8 *)(piVar1 + 0xd) = uVar17;
  *(undefined8 *)(piVar1 + 0xb) = uVar15;
  *(undefined8 *)(piVar1 + 0x11) = uVar18;
  *(undefined8 *)(piVar1 + 0xf) = uVar16;
  FUN_10096ab0(piVar1);
LAB_10096a58:
  if (bVar9) {
    *puVar2 = 0;
  }
  return 1;
}

