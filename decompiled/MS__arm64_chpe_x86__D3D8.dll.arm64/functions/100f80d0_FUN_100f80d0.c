/*
 * FUN_100f80d0 at 100f80d0
 * undefined FUN_100f80d0(void)
 * Address ranges: 100f80d0-100f82ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100f80d0(int *param_1,int *param_2)

{
  ulonglong uVar1;
  uint *puVar2;
  uint *puVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  code *extraout_w11;
  ulonglong uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar2 = (uint *)(param_1 + 2);
  uVar10 = *puVar2;
  uVar13 = 0;
  uVar1 = ((ulonglong)(uint)param_2[2] | (ulonglong)(uint)param_2[1] + (longlong)param_2[3] << 0x20)
          + (longlong)*param_2;
  if (uVar10 != 0) {
    uVar11 = 0;
    uVar9 = uVar10;
    do {
      uVar13 = uVar9 + uVar11 >> 1;
      uVar12 = *(ulonglong *)(*param_1 + uVar13 * 0x20);
      uVar7 = uVar13;
      if (uVar12 <= uVar1) {
        if (uVar1 <= uVar12) break;
        uVar11 = uVar13 + 1;
        uVar13 = uVar11;
        uVar7 = uVar9;
      }
      uVar9 = uVar7;
    } while (uVar9 != uVar11);
    if ((uVar13 != uVar10) && (puVar4 = (ulonglong *)(*param_1 + uVar13 * 0x20), *puVar4 == uVar1))
    {
      iVar8 = FUN_100ff610(param_2,puVar4 + 1,0x10);
      if (iVar8 != 0) {
        uVar12 = puVar4[3];
        FUN_100ebf50(param_1[3],(int)uVar12,0,1);
        (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)((int)uVar12);
        FUN_100f82f0(param_1,uVar13,uVar1,param_2);
      }
      goto LAB_100f82c8;
    }
  }
  puVar3 = (uint *)(param_1 + 1);
  uVar11 = *puVar3;
  if (uVar10 == uVar11) {
    iVar8 = uVar11 << 6;
    if ((uVar11 & 0x7fffffff) >> 0x1a != 0) {
      iVar8 = -1;
    }
    iVar8 = FUN_100fece0(iVar8);
    if (iVar8 != 0) {
      uVar10 = 0;
      if (*puVar3 != 0) {
        do {
          puVar5 = (undefined8 *)(*param_1 + uVar10 * 0x20);
          puVar6 = (undefined8 *)(iVar8 + uVar10 * 0x20);
          uVar10 = uVar10 + 1;
          uVar16 = *puVar5;
          uVar15 = puVar5[3];
          uVar14 = puVar5[2];
          puVar6[1] = puVar5[1];
          *puVar6 = uVar16;
          puVar6[3] = uVar15;
          puVar6[2] = uVar14;
        } while (uVar10 < *puVar3);
      }
      FUN_100fed00(*param_1);
      *param_1 = iVar8;
      *puVar3 = *puVar3 << 1;
    }
  }
  for (uVar10 = *puVar2; uVar13 < uVar10; uVar10 = uVar10 - 1) {
    puVar5 = (undefined8 *)(*param_1 + uVar10 * 0x20);
    puVar5[1] = puVar5[-3];
    *puVar5 = puVar5[-4];
    puVar5[3] = puVar5[-1];
    puVar5[2] = puVar5[-2];
  }
  FUN_100f82f0(param_1,uVar13,uVar1,param_2);
  *puVar2 = *puVar2 + 1;
LAB_100f82c8:
  return *(undefined4 *)(*param_1 + uVar13 * 0x20 + 0x18);
}

