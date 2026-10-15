/*
 * FUN_100e21a0 at 100e21a0
 * undefined FUN_100e21a0(void)
 * Address ranges: 100e21a0-100e2577
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100e21a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,int param_7)

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
  int local_44;
  
  if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar6 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar6 = true;
    iVar7 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar7 == 0) {
      FUN_100071d0(0);
    }
  }
  local_48 = param_1 + -0x66b4;
  local_4c = 0;
  iVar7 = FUN_100080e0(local_48,param_2,param_3,param_4,param_5,param_6,&local_4c);
  if (param_7 != 0) {
    iVar7 = -0x7789f794;
    goto LAB_100e2530;
  }
  if (iVar7 < 0) goto LAB_100e2530;
  local_44 = *(int *)(param_1 + -0x58c8);
  iVar7 = -0x7ff8fff2;
  puVar8 = (undefined4 *)FUN_101321c0(0x5c);
  if (puVar8 == (undefined4 *)0x0) goto LAB_100e2530;
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
  *puVar8 = &PTR_FUN_1015fb3c;
  puVar8[0x13] = &PTR_FUN_1015fb04;
  uVar10 = FUN_1003be90(puVar8);
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
    piVar5 = (int *)(param_1 + -0x5878);
    puVar1 = (uint *)(param_1 + -0x5870);
    puVar2 = (uint *)(param_1 + -0x5874);
    uVar3 = *puVar1;
    if (*puVar2 == uVar3) {
      uVar4 = uVar3 << 1;
      if (uVar3 == 0) {
        uVar4 = 0x10;
      }
      iVar11 = uVar4 * 4;
      if (uVar4 >> 0x1e != 0) {
        iVar11 = -1;
      }
      local_44 = FUN_101322b0(iVar11);
      if (local_44 != 0) {
        FUN_101325a0(local_44,*piVar5,((ulonglong)*puVar1 & 0x3fffffff) << 2);
        FUN_101322d0(*piVar5);
        *piVar5 = local_44;
        *puVar1 = uVar4;
        goto LAB_100e2484;
      }
    }
    else {
LAB_100e2484:
      *(undefined4 **)(*piVar5 + *puVar2 * 4) = puVar8;
      *puVar2 = *puVar2 + 1;
      iVar7 = FUN_100e5f50(puVar8 + 0x13,&DAT_1015e4a0,param_6);
      if (-1 < iVar7) {
        (&DAT_10171578)[*(int *)(param_1 + -0x58c4) * 0x45] =
             (&DAT_10171578)[*(int *)(param_1 + -0x58c4) * 0x45] - (ulonglong)local_4c;
        goto LAB_100e2530;
      }
      FUN_1000d5d0(local_48,puVar8);
    }
    FUN_1001cae0(puVar8);
  }
  FUN_100e5e60(puVar8);
  FUN_10132260(puVar8,0x5c);
LAB_100e2530:
  if (bVar6) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return iVar7;
}

