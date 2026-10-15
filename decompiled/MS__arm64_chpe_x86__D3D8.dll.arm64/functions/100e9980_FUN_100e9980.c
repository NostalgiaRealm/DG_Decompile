/*
 * FUN_100e9980 at 100e9980
 * undefined FUN_100e9980(void)
 * Address ranges: 100e9980-100e9c53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100e9980(int param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 in_x7;
  uint uVar11;
  int iVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80 [2];
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  
  local_50 = 0;
  local_80[0] = 1;
  uStack_98 = 0;
  uStack_88 = 0;
  local_90 = 0;
  lStack_70 = ((ulonglong)(*(int *)(param_1 + 0x28) + 0xffU & 0xffffff00) & 0x3fffff) << 10;
  local_78 = 0x10000;
  local_58 = 0x100000000;
  local_68 = 0x1000100000001;
  uStack_60 = 0x100000000;
  uVar9 = FUN_100e00f8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),0x1012ec00,0,
                       local_80,0xac3,0,in_x7,(int)&uStack_98 + 4);
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar10 = (*extraout_w11)(uVar7);
  uVar7 = (*pcVar6)();
  iVar8 = (*extraout_w11_00)(uVar7,0,0,&uStack_98);
  if (iVar8 < 0) goto LAB_100e9b78;
  piVar1 = (int *)(param_1 + 0x48);
  puVar2 = (uint *)(param_1 + 0x50);
  uVar5 = *puVar2;
  if (*(int *)(param_1 + 0x4c) == 0) {
    puVar3 = (uint *)(param_1 + 0x4c);
    if (*puVar3 == uVar5) {
      uVar11 = uVar5 << 1;
      if (uVar5 == 0) {
        uVar11 = 0x10;
      }
      iVar8 = uVar11 * 0x20;
      if (uVar11 >> 0x1b != 0) {
        iVar8 = -1;
      }
      iVar8 = FUN_100fece0(iVar8);
      if (iVar8 == 0) goto LAB_100e9b78;
      FUN_100ff660(iVar8,*piVar1,((ulonglong)*puVar2 & 0x7ffffff) << 5);
      FUN_100fed00(*piVar1);
      *piVar1 = iVar8;
      *puVar2 = uVar11;
    }
    puVar4 = (undefined8 *)(*piVar1 + *puVar3 * 0x20);
    puVar4[1] = uStack_98;
    *puVar4 = uVar10;
    puVar4[3] = uStack_88;
    puVar4[2] = local_90;
    *puVar3 = *puVar3 + 1;
    return 1;
  }
  puVar3 = (uint *)(param_1 + 0x4c);
  iVar8 = *(int *)(param_1 + 0x54);
  if (*puVar3 == uVar5) {
    uVar11 = uVar5 << 1;
    if (uVar5 == 0) {
      uVar11 = 0x10;
    }
    iVar12 = uVar11 * 0x20;
    if (uVar11 >> 0x1b != 0) {
      iVar12 = -1;
    }
    iVar12 = FUN_100fece0(iVar12);
    if (iVar12 != 0) {
      FUN_100ff660(iVar12,*piVar1,((ulonglong)*puVar2 & 0x7ffffff) << 5);
      FUN_100fed00(*piVar1);
      *piVar1 = iVar12;
      *puVar2 = uVar11;
      goto LAB_100e9b0c;
    }
    iVar8 = 0;
  }
  else {
LAB_100e9b0c:
    uVar5 = iVar8 + 1;
    for (uVar11 = *puVar3; uVar5 < uVar11; uVar11 = uVar11 - 1) {
      puVar4 = (undefined8 *)(*piVar1 + uVar11 * 0x20);
      puVar4[1] = puVar4[-3];
      *puVar4 = puVar4[-4];
      puVar4[3] = puVar4[-1];
      puVar4[2] = puVar4[-2];
    }
    iVar8 = 1;
    puVar4 = (undefined8 *)(*piVar1 + uVar5 * 0x20);
    puVar4[1] = uStack_98;
    *puVar4 = uVar10;
    puVar4[3] = uStack_88;
    puVar4[2] = local_90;
    *puVar3 = *puVar3 + 1;
  }
  if (iVar8 != 0) {
    return iVar8;
  }
LAB_100e9b78:
  uVar7 = (*pcVar6)();
  (*extraout_w11_01)(uVar7);
  return 0;
}

