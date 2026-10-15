/*
 * FUN_100e1d40 at 100e1d40
 * undefined FUN_100e1d40(void)
 * Address ranges: 100e1d40-100e2143
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100e1d40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,int param_7)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  int iVar13;
  code *extraout_w11;
  uint local_54;
  uint local_50;
  int local_4c;
  
  if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar6 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar6 = true;
    iVar9 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar9 == 0) {
      FUN_100071d0(0);
    }
  }
  local_54 = 0;
  local_50 = 0;
  iVar4 = param_1 + -0x66b4;
  iVar9 = FUN_10007f80(iVar4,param_2,param_3,param_4,param_5,param_6,&local_54,&local_50);
  if (param_7 != 0) {
    iVar9 = -0x7789f794;
    goto LAB_100e20fc;
  }
  if (iVar9 < 0) goto LAB_100e20fc;
  iVar9 = -0x7ff8fff2;
  uVar8 = FUN_1000b6c0(iVar4);
  local_4c = *(int *)(param_1 + -0x58c8);
  puVar10 = (undefined4 *)FUN_101321c0(0x78);
  if (puVar10 == (undefined4 *)0x0) goto LAB_100e20fc;
  *(undefined8 *)(puVar10 + 0x1b) = 0;
  puVar10[0x1d] = puVar10 + 0x1a;
  *(undefined8 *)(puVar10 + 9) = 0;
  iVar13 = 0;
  if (iVar4 != 0) {
    iVar13 = param_1;
  }
  puVar10[0xb] = iVar13;
  puVar10[0xc] = 6;
  *(undefined8 *)(puVar10 + 1) = 0;
  puVar10[3] = 0;
  puVar10[4] = param_2;
  puVar10[5] = 0;
  puVar10[6] = param_2;
  *(undefined8 *)(puVar10 + 7) = 0;
  puVar10[0xd] = param_3;
  puVar10[0xe] = param_4;
  puVar10[0xf] = local_54;
  puVar10[0x10] = param_5;
  *(undefined8 *)(puVar10 + 0x11) = 0;
  *(undefined8 *)(puVar10 + 0x13) = 0;
  puVar10[0x15] = local_4c;
  *(undefined8 *)(puVar10 + 0x16) = 0xffffffff00000000;
  *(undefined1 *)(puVar10 + 0x18) = uVar8;
  *(undefined4 *)((int)puVar10 + 0x61) = 0;
  *puVar10 = &PTR_FUN_1015fd58;
  puVar10[0x1a] = &PTR_FUN_1015fd20;
  uVar12 = FUN_1003be90(puVar10);
  if ((uVar12 & 1) != 0) {
    if ((((uint)puVar10[0x10] < 2) && (((uint)puVar10[0xd] >> 4 & 1) == 0)) &&
       (*(char *)(puVar10 + 0x18) == '\0')) {
      uVar11 = 2;
      if (puVar10[0x10] == 1) {
        uVar11 = 0;
      }
      bVar7 = ((uint)puVar10[0xd] >> 9 & 1) != 0;
      if (bVar7) {
        uVar11 = 1;
      }
      iVar13 = 0x1000;
      if (!bVar7) {
        iVar13 = 0x10;
      }
      uVar11 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                         (puVar10[0x15],iVar13 + puVar10[4],uVar11);
      uVar11 = (*extraout_w11)(uVar11);
      puVar10[0x11] = uVar11;
    }
    puVar10[0x16] = 0;
    piVar5 = (int *)(param_1 + -0x5884);
    puVar1 = (uint *)(param_1 + -0x587c);
    puVar2 = (uint *)(param_1 + -0x5880);
    uVar3 = *puVar1;
    if (*puVar2 == uVar3) {
      local_54 = uVar3 << 1;
      if (uVar3 == 0) {
        local_54 = 0x10;
      }
      iVar13 = local_54 * 4;
      if (local_54 >> 0x1e != 0) {
        iVar13 = -1;
      }
      local_4c = FUN_101322b0(iVar13);
      if (local_4c != 0) {
        FUN_101325a0(local_4c,*piVar5,((ulonglong)*puVar1 & 0x3fffffff) << 2);
        FUN_101322d0(*piVar5);
        *piVar5 = local_4c;
        *puVar1 = local_54;
        goto LAB_100e2050;
      }
    }
    else {
LAB_100e2050:
      *(undefined4 **)(*piVar5 + *puVar2 * 4) = puVar10;
      *puVar2 = *puVar2 + 1;
      iVar9 = FUN_100eafb0(puVar10 + 0x1a,&DAT_1015e490,param_6);
      if (-1 < iVar9) {
        (&DAT_10171578)[*(int *)(param_1 + -0x58c4) * 0x45] =
             (&DAT_10171578)[*(int *)(param_1 + -0x58c4) * 0x45] - (ulonglong)local_50;
        goto LAB_100e20fc;
      }
      FUN_1000d4e0(iVar4,puVar10);
    }
    FUN_10021db0(puVar10);
  }
  FUN_100eaec0(puVar10);
  FUN_10132260(puVar10,0x78);
LAB_100e20fc:
  if (bVar6) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return iVar9;
}

