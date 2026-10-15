/*
 * FUN_10061e20 at 10061e20
 * undefined FUN_10061e20(void)
 * Address ranges: 10061e20-10062447
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10061e20(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  bool bVar8;
  code *pcVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  undefined1 auStack_44 [4];
  
  FUN_10096840(auStack_44);
  uVar13 = 0x88760005;
  if ((*(char *)(param_1 + 0x1efc) != '\0') ||
     (((uVar11 = FUN_10062e80(param_1), (uVar11 & 1) == 0 ||
       (((iVar12 = FUN_10081e90(param_2,&DAT_1009c3f0,0x10), iVar12 != 0 &&
         (iVar12 = FUN_10081e90(param_2,&DAT_1009c400,0x10), iVar12 != 0)) &&
        (iVar12 = FUN_10081e90(param_2,&DAT_1009c410,0x10), iVar12 != 0)))) &&
      ((uVar13 = 0x80004002, (uVar11 & 1) != 0 ||
       (iVar12 = FUN_10081e90(param_2,&DAT_1009c420,0x10), iVar12 != 0)))))) goto LAB_10062420;
  pcVar9 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar13 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar14 = (*extraout_w11)(uVar13);
  iVar12 = *(int *)(iVar14 + 0x7bc);
  uVar13 = (*pcVar9)();
  cVar10 = (*extraout_w11_00)(uVar13);
  if (cVar10 != '\0') {
    iVar12 = 0;
  }
  *(int *)(param_1 + 0x98) = iVar12;
  piVar1 = &DAT_100a4c30 + iVar12;
  uVar11 = 0;
  do {
    puVar3 = (undefined8 *)((undefined4 *)(param_1 + 0xe8) + uVar11 * 0x3f);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar4 = (undefined8 *)((undefined4 *)(param_1 + 0x7cc) + uVar11 * 0x3f);
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    puVar3[0x13] = 0;
    puVar3[0x12] = 0;
    puVar3[0x15] = 0;
    puVar3[0x14] = 0;
    puVar3[0x17] = 0;
    puVar3[0x16] = 0;
    puVar3[0x19] = 0;
    puVar3[0x18] = 0;
    puVar3[0x1b] = 0;
    puVar3[0x1a] = 0;
    puVar5 = (undefined8 *)((undefined4 *)(param_1 + 0xeb0) + uVar11 * 0x3f);
    puVar3[0x1d] = 0;
    puVar3[0x1c] = 0;
    puVar3[0x1e] = 0;
    *(undefined4 *)(puVar3 + 0x1f) = 0;
    puVar6 = (undefined8 *)(param_1 + 0x1594 + uVar11 * 0xec);
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0x13] = 0;
    puVar4[0x12] = 0;
    puVar4[0x15] = 0;
    puVar4[0x14] = 0;
    puVar4[0x17] = 0;
    puVar4[0x16] = 0;
    puVar4[0x19] = 0;
    puVar4[0x18] = 0;
    puVar4[0x1b] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1d] = 0;
    puVar4[0x1c] = 0;
    puVar4[0x1e] = 0;
    *(undefined4 *)(puVar4 + 0x1f) = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    puVar5[0xf] = 0;
    puVar5[0xe] = 0;
    puVar5[0x11] = 0;
    puVar5[0x10] = 0;
    puVar5[0x13] = 0;
    puVar5[0x12] = 0;
    puVar5[0x15] = 0;
    puVar5[0x14] = 0;
    puVar5[0x17] = 0;
    puVar5[0x16] = 0;
    puVar5[0x19] = 0;
    puVar5[0x18] = 0;
    puVar5[0x1b] = 0;
    puVar5[0x1a] = 0;
    puVar5[0x1d] = 0;
    puVar5[0x1c] = 0;
    puVar5[0x1e] = 0;
    *(undefined4 *)(puVar5 + 0x1f) = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0x13] = 0;
    puVar6[0x12] = 0;
    puVar6[0x15] = 0;
    puVar6[0x14] = 0;
    puVar6[0x17] = 0;
    puVar6[0x16] = 0;
    puVar6[0x19] = 0;
    puVar6[0x18] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1c] = 0;
    *(undefined4 *)(puVar6 + 0x1d) = 0;
    FUN_1004f990(*piVar1 + uVar11 * 0x298,puVar3);
    FUN_1004fa60(*piVar1 + uVar11 * 0x298,puVar4);
    FUN_1004fbb0(*piVar1 + uVar11 * 0x298,puVar5);
    FUN_1004fdd0(*piVar1 + uVar11 * 0x298,puVar6);
    iVar7 = *piVar1 + uVar11 * 0x298;
    iVar12 = iVar7 + 0x136;
    iVar7 = *(int *)(iVar7 + 0x28);
    if (iVar7 != iVar12 && iVar7 != 0) {
      FUN_10082d80(iVar12,iVar7);
      *(int *)(*piVar1 + uVar11 * 0x298 + 0x28) = iVar12;
    }
    iVar7 = *piVar1 + uVar11 * 0x298;
    iVar12 = iVar7 + 0x176;
    iVar7 = *(int *)(iVar7 + 0x24);
    if (iVar7 != iVar12 && iVar7 != 0) {
      FUN_10082d80(iVar12,iVar7);
      *(int *)(*piVar1 + uVar11 * 0x298 + 0x24) = iVar12;
    }
    iVar7 = *piVar1 + uVar11 * 0x298;
    iVar12 = iVar7 + 0x1b6;
    iVar7 = *(int *)(iVar7 + 0x2c);
    if (iVar7 != iVar12 && iVar7 != 0) {
      FUN_10082d80(iVar12,iVar7);
      *(int *)(*piVar1 + uVar11 * 0x298 + 0x2c) = iVar12;
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 7);
  *(undefined8 *)(param_1 + 0x1c10) = 0;
  *(undefined8 *)(param_1 + 0x1c08) = 0;
  *(undefined8 *)(param_1 + 0x1c20) = 0;
  *(undefined8 *)(param_1 + 0x1c18) = 0;
  *(undefined8 *)(param_1 + 0x1c30) = 0;
  *(undefined8 *)(param_1 + 0x1c28) = 0;
  *(undefined8 *)(param_1 + 0x1c40) = 0;
  *(undefined8 *)(param_1 + 0x1c38) = 0;
  *(undefined8 *)(param_1 + 0x1c50) = 0;
  *(undefined8 *)(param_1 + 0x1c48) = 0;
  *(undefined8 *)(param_1 + 0x1c60) = 0;
  *(undefined8 *)(param_1 + 0x1c58) = 0;
  *(undefined8 *)(param_1 + 0x1c70) = 0;
  *(undefined8 *)(param_1 + 0x1c68) = 0;
  *(undefined8 *)(param_1 + 0x1c80) = 0;
  *(undefined8 *)(param_1 + 0x1c78) = 0;
  *(undefined8 *)(param_1 + 0x1c90) = 0;
  *(undefined8 *)(param_1 + 0x1c88) = 0;
  *(undefined8 *)(param_1 + 0x1ca0) = 0;
  *(undefined8 *)(param_1 + 0x1c98) = 0;
  *(undefined8 *)(param_1 + 0x1cb0) = 0;
  *(undefined8 *)(param_1 + 0x1ca8) = 0;
  *(undefined8 *)(param_1 + 0x1cc0) = 0;
  *(undefined8 *)(param_1 + 0x1cb8) = 0;
  *(undefined8 *)(param_1 + 0x1cd0) = 0;
  *(undefined8 *)(param_1 + 0x1cc8) = 0;
  *(undefined8 *)(param_1 + 0x1ce0) = 0;
  *(undefined8 *)(param_1 + 0x1cd8) = 0;
  *(undefined8 *)(param_1 + 0x1cf0) = 0;
  *(undefined8 *)(param_1 + 0x1ce8) = 0;
  *(undefined8 *)(param_1 + 0x1cf8) = 0;
  *(undefined4 *)(param_1 + 0x1d00) = 0;
  *(undefined8 *)(param_1 + 0x1d0c) = 0;
  *(undefined8 *)(param_1 + 0x1d04) = 0;
  *(undefined8 *)(param_1 + 0x1d1c) = 0;
  *(undefined8 *)(param_1 + 0x1d14) = 0;
  *(undefined8 *)(param_1 + 0x1d2c) = 0;
  *(undefined8 *)(param_1 + 0x1d24) = 0;
  *(undefined8 *)(param_1 + 0x1d3c) = 0;
  *(undefined8 *)(param_1 + 0x1d34) = 0;
  *(undefined8 *)(param_1 + 0x1d4c) = 0;
  *(undefined8 *)(param_1 + 0x1d44) = 0;
  *(undefined8 *)(param_1 + 0x1d5c) = 0;
  *(undefined8 *)(param_1 + 0x1d54) = 0;
  *(undefined8 *)(param_1 + 0x1d6c) = 0;
  *(undefined8 *)(param_1 + 0x1d64) = 0;
  *(undefined8 *)(param_1 + 0x1d7c) = 0;
  *(undefined8 *)(param_1 + 0x1d74) = 0;
  *(undefined8 *)(param_1 + 0x1d8c) = 0;
  *(undefined8 *)(param_1 + 0x1d84) = 0;
  *(undefined8 *)(param_1 + 0x1d9c) = 0;
  *(undefined8 *)(param_1 + 0x1d94) = 0;
  *(undefined8 *)(param_1 + 0x1dac) = 0;
  *(undefined8 *)(param_1 + 0x1da4) = 0;
  *(undefined8 *)(param_1 + 0x1dbc) = 0;
  *(undefined8 *)(param_1 + 0x1db4) = 0;
  *(undefined8 *)(param_1 + 0x1dcc) = 0;
  *(undefined8 *)(param_1 + 0x1dc4) = 0;
  *(undefined8 *)(param_1 + 0x1ddc) = 0;
  *(undefined8 *)(param_1 + 0x1dd4) = 0;
  *(undefined8 *)(param_1 + 0x1dec) = 0;
  *(undefined8 *)(param_1 + 0x1de4) = 0;
  *(undefined8 *)(param_1 + 0x1df4) = 0;
  *(undefined4 *)(param_1 + 0x1dfc) = 0;
  *(undefined8 *)(param_1 + 0x1e08) = 0;
  *(undefined8 *)(param_1 + 0x1e00) = 0;
  *(undefined8 *)(param_1 + 0x1e18) = 0;
  *(undefined8 *)(param_1 + 0x1e10) = 0;
  *(undefined8 *)(param_1 + 0x1e28) = 0;
  *(undefined8 *)(param_1 + 0x1e20) = 0;
  *(undefined8 *)(param_1 + 0x1e38) = 0;
  *(undefined8 *)(param_1 + 0x1e30) = 0;
  *(undefined8 *)(param_1 + 0x1e48) = 0;
  *(undefined8 *)(param_1 + 0x1e40) = 0;
  *(undefined8 *)(param_1 + 0x1e58) = 0;
  *(undefined8 *)(param_1 + 0x1e50) = 0;
  *(undefined8 *)(param_1 + 0x1e68) = 0;
  *(undefined8 *)(param_1 + 0x1e60) = 0;
  *(undefined8 *)(param_1 + 0x1e78) = 0;
  *(undefined8 *)(param_1 + 0x1e70) = 0;
  *(undefined8 *)(param_1 + 0x1e88) = 0;
  *(undefined8 *)(param_1 + 0x1e80) = 0;
  *(undefined8 *)(param_1 + 0x1e98) = 0;
  *(undefined8 *)(param_1 + 0x1e90) = 0;
  *(undefined8 *)(param_1 + 0x1ea8) = 0;
  *(undefined8 *)(param_1 + 0x1ea0) = 0;
  *(undefined8 *)(param_1 + 0x1eb8) = 0;
  *(undefined8 *)(param_1 + 0x1eb0) = 0;
  *(undefined8 *)(param_1 + 0x1ec8) = 0;
  *(undefined8 *)(param_1 + 0x1ec0) = 0;
  *(undefined8 *)(param_1 + 0x1ed8) = 0;
  *(undefined8 *)(param_1 + 0x1ed0) = 0;
  *(undefined8 *)(param_1 + 0x1ee8) = 0;
  *(undefined8 *)(param_1 + 0x1ee0) = 0;
  *(undefined8 *)(param_1 + 0x1ef0) = 0;
  *(undefined4 *)(param_1 + 0x1ef8) = 0;
  *(undefined4 *)(param_1 + 0x1c08) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(param_1 + 0x1c24) = 0x10;
  *(undefined4 *)(param_1 + 0x1c34) = 0x38;
  *(undefined4 *)(param_1 + 0x1c6c) = 0x38;
  *(undefined4 *)(param_1 + 0x1d04) = *(undefined4 *)(param_1 + 0x7cc);
  *(undefined4 *)(param_1 + 0x1d20) = 0x10;
  *(undefined4 *)(param_1 + 0x1d30) = 0x38;
  *(undefined4 *)(param_1 + 0x1d68) = 0x38;
  uVar13 = 0x80004005;
  *(undefined4 *)(param_1 + 0x1e00) = *(undefined4 *)(param_1 + 0xeb0);
  *(undefined4 *)(param_1 + 0x1e1c) = 0x10;
  *(undefined4 *)(param_1 + 0x1e2c) = 0x38;
  *(undefined4 *)(param_1 + 0x1e64) = 0x38;
  uVar16 = FUN_10001450(param_1 + 0x7c);
  if ((uVar16 & 1) == 0) goto LAB_10062420;
  piVar1 = (int *)(param_1 + 0x94);
  piVar2 = (int *)(*piVar1 + 0xc);
  do {
    cVar10 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
    if (bVar8) {
      *piVar2 = *piVar2 + 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  DataMemoryBarrier(2,3);
  if (*(int *)(*piVar1 + 8) == 0) {
    uVar15 = (*pcVar9)();
    iVar12 = (*extraout_w11_01)(uVar15);
    if (iVar12 == 0) {
      iVar12 = *piVar1;
      uVar15 = FUN_10013580(*(undefined4 *)(iVar12 + 0x10));
LAB_10062364:
      *(undefined4 *)(iVar12 + 8) = uVar15;
    }
    else if (iVar12 == 1) {
      iVar12 = *piVar1;
      uVar15 = FUN_1001ce80(*(undefined4 *)(*piVar1 + 0x10),*(undefined1 *)(iVar14 + 0x95d));
      goto LAB_10062364;
    }
    if (*(int *)(*piVar1 + 8) != 0) {
      uVar15 = (*pcVar9)();
      cVar10 = (*extraout_w11_02)(uVar15);
      if (cVar10 == '\0') {
        if (*(int *)(*piVar1 + 8) != 0) {
          uVar15 = (*pcVar9)();
          (*extraout_w11_03)(uVar15,1);
        }
        *(undefined4 *)(*piVar1 + 8) = 0;
      }
    }
  }
  if (*(int *)(*piVar1 + 8) == 0) {
    piVar1 = (int *)(*piVar1 + 0xc);
    do {
      cVar10 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    DataMemoryBarrier(2,3);
  }
  else {
    *(undefined1 *)(param_1 + 0x1efc) = 1;
    uVar13 = 0;
  }
LAB_10062420:
  FUN_10096790(auStack_44);
  return uVar13;
}

