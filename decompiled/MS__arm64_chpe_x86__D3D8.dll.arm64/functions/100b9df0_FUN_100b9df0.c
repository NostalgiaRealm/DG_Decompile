/*
 * FUN_100b9df0 at 100b9df0
 * undefined FUN_100b9df0(void)
 * Address ranges: 100b9df0-100ba1b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100b9df0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  bool bVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  int iVar11;
  code *extraout_w11;
  uint local_4c;
  int local_48;
  uint local_44;
  
  if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar6 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar6 = true;
    iVar7 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar7 == 0) {
      FUN_10006560(0);
    }
  }
  local_48 = param_1 + -0x58e0;
  local_4c = 0;
  iVar7 = FUN_10007370(local_48,param_2,param_3,param_4,param_5,param_6,&local_4c);
  if (iVar7 < 0) goto LAB_100ba16c;
  local_44 = *(uint *)(param_1 + -0x4db8);
  iVar7 = -0x7ff8fff2;
  puVar8 = (undefined4 *)FUN_100febf0(0x5c);
  if (puVar8 == (undefined4 *)0x0) goto LAB_100ba16c;
  *(undefined8 *)(puVar8 + 0x14) = 0;
  puVar8[0x16] = puVar8 + 0x13;
  *(undefined8 *)(puVar8 + 9) = 0;
  iVar11 = 0;
  if (local_48 != 0) {
    iVar11 = param_1;
  }
  puVar8[0xb] = iVar11;
  puVar8[0xc] = 7;
  *(undefined8 *)(puVar8 + 1) = 0;
  puVar8[3] = 0;
  puVar8[4] = param_2;
  puVar8[5] = 0;
  puVar8[6] = param_2;
  *(undefined8 *)(puVar8 + 7) = 0;
  puVar8[0xd] = param_3;
  puVar8[0xe] = param_4;
  puVar8[0xf] = param_5;
  puVar8[0x10] = 0;
  puVar8[0x11] = local_44;
  puVar8[0x12] = 0;
  *puVar8 = &PTR_FUN_1012a51c;
  puVar8[0x13] = &PTR_FUN_1012a4e4;
  uVar10 = FUN_10031fc0(puVar8);
  if ((uVar10 & 1) != 0) {
    uVar3 = puVar8[0xf];
    if (uVar3 != 3) {
      uVar4 = puVar8[0xd];
      if (uVar3 == 2) {
        uVar9 = 3;
      }
      else {
        uVar9 = 2;
        if ((uVar3 < 2) && (uVar9 = 3, (uVar4 >> 4 & 1) == 0)) {
          uVar9 = 0;
        }
      }
      if ((uVar4 >> 9 & 1) != 0) {
        uVar9 = 1;
      }
      uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                        (puVar8[0x11],puVar8[4] + (uVar4 >> 9 & 1) * 0x1000,uVar9,
                         puVar8[0xe] == 0x66);
      uVar9 = (*extraout_w11)(uVar9);
      puVar8[0x10] = uVar9;
    }
    piVar5 = (int *)(param_1 + -0x4d68);
    puVar1 = (uint *)(param_1 + -0x4d60);
    puVar2 = (uint *)(param_1 + -0x4d64);
    uVar3 = *puVar1;
    if (*puVar2 == uVar3) {
      local_44 = uVar3 << 1;
      if (uVar3 == 0) {
        local_44 = 0x10;
      }
      iVar11 = local_44 * 4;
      if (local_44 >> 0x1e != 0) {
        iVar11 = -1;
      }
      iVar11 = FUN_100fece0(iVar11);
      if (iVar11 != 0) {
        FUN_100ff660(iVar11,*piVar5,((ulonglong)*puVar1 & 0x3fffffff) << 2);
        FUN_100fed00(*piVar5);
        *piVar5 = iVar11;
        *puVar1 = local_44;
        goto LAB_100ba0d0;
      }
    }
    else {
LAB_100ba0d0:
      *(undefined4 **)(*piVar5 + *puVar2 * 4) = puVar8;
      *puVar2 = *puVar2 + 1;
      iVar7 = FUN_100bdce0(puVar8 + 0x13,&DAT_10129130,param_6);
      if (-1 < iVar7) {
        (&DAT_101389b8)[*(int *)(param_1 + -0x4db4) * 0x45] =
             (&DAT_101389b8)[*(int *)(param_1 + -0x4db4) * 0x45] - (ulonglong)local_4c;
        goto LAB_100ba16c;
      }
      FUN_1000c550(local_48,puVar8);
    }
    FUN_100177f0(puVar8);
  }
  FUN_100bdbe0(puVar8);
  FUN_100fec90(puVar8,0x5c);
LAB_100ba16c:
  if (bVar6) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return iVar7;
}

