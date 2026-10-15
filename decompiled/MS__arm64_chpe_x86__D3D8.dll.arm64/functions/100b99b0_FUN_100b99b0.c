/*
 * FUN_100b99b0 at 100b99b0
 * undefined FUN_100b99b0(void)
 * Address ranges: 100b99b0-100b9da7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100b99b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  int iVar13;
  code *extraout_w11;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  uint local_48;
  
  local_50 = param_6;
  if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar5 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar5 = true;
    iVar8 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar8 == 0) {
      FUN_10006560(0);
    }
  }
  local_4c = 0;
  iVar8 = param_1 + -0x58e0;
  local_54 = 0;
  iVar9 = FUN_10007210(iVar8,param_2,param_3,param_4,param_5,local_50,&local_54,&local_4c);
  if (iVar9 < 0) goto LAB_100b9d60;
  iVar9 = -0x7ff8fff2;
  uVar7 = FUN_1000a840(iVar8);
  local_48 = *(uint *)(param_1 + -0x4db8);
  puVar10 = (undefined4 *)FUN_100febf0(0x78);
  if (puVar10 == (undefined4 *)0x0) goto LAB_100b9d60;
  *(undefined8 *)(puVar10 + 0x1b) = 0;
  puVar10[0x1d] = puVar10 + 0x1a;
  *(undefined8 *)(puVar10 + 9) = 0;
  iVar13 = 0;
  if (iVar8 != 0) {
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
  puVar10[0x15] = local_48;
  *(undefined8 *)(puVar10 + 0x16) = 0xffffffff00000000;
  *(undefined1 *)(puVar10 + 0x18) = uVar7;
  *(undefined4 *)((int)puVar10 + 0x61) = 0;
  *puVar10 = &PTR_FUN_1012a68c;
  puVar10[0x1a] = &PTR_FUN_1012a654;
  uVar12 = FUN_10031fc0(puVar10);
  if ((uVar12 & 1) != 0) {
    if ((((uint)puVar10[0x10] < 2) && (((uint)puVar10[0xd] >> 4 & 1) == 0)) &&
       (*(char *)(puVar10 + 0x18) == '\0')) {
      uVar11 = 2;
      if (puVar10[0x10] == 1) {
        uVar11 = 0;
      }
      bVar6 = ((uint)puVar10[0xd] >> 9 & 1) != 0;
      if (bVar6) {
        uVar11 = 1;
      }
      iVar13 = 0x1000;
      if (!bVar6) {
        iVar13 = 0x10;
      }
      uVar11 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                         (puVar10[0x15],iVar13 + puVar10[4],uVar11);
      uVar11 = (*extraout_w11)(uVar11);
      puVar10[0x11] = uVar11;
    }
    puVar10[0x16] = 0;
    piVar4 = (int *)(param_1 + -0x4d74);
    puVar1 = (uint *)(param_1 + -0x4d6c);
    puVar2 = (uint *)(param_1 + -0x4d70);
    uVar3 = *puVar1;
    if (*puVar2 == uVar3) {
      local_48 = uVar3 << 1;
      if (uVar3 == 0) {
        local_48 = 0x10;
      }
      iVar13 = local_48 * 4;
      if (local_48 >> 0x1e != 0) {
        iVar13 = -1;
      }
      iVar13 = FUN_100fece0(iVar13);
      if (iVar13 != 0) {
        FUN_100ff660(iVar13,*piVar4,((ulonglong)*puVar1 & 0x3fffffff) << 2);
        FUN_100fed00(*piVar4);
        *piVar4 = iVar13;
        *puVar1 = local_48;
        goto LAB_100b9cc0;
      }
    }
    else {
LAB_100b9cc0:
      *(undefined4 **)(*piVar4 + *puVar2 * 4) = puVar10;
      *puVar2 = *puVar2 + 1;
      iVar9 = FUN_100c0420(puVar10 + 0x1a,&DAT_10129120,local_50);
      if (-1 < iVar9) {
        (&DAT_101389b8)[*(int *)(param_1 + -0x4db4) * 0x45] =
             (&DAT_101389b8)[*(int *)(param_1 + -0x4db4) * 0x45] - (ulonglong)local_4c;
        goto LAB_100b9d60;
      }
      FUN_1000c460(iVar8,puVar10);
    }
    FUN_1001c750(puVar10);
  }
  FUN_100c0320(puVar10);
  FUN_100fec90(puVar10,0x78);
LAB_100b9d60:
  if (bVar5) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return iVar9;
}

