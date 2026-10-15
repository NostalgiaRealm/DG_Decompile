/*
 * FUN_1001bb80 at 1001bb80
 * undefined FUN_1001bb80(void)
 * Address ranges: 1001bb80-1001be43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong * FUN_1001bb80(int param_1,ulonglong param_2)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  code *extraout_w11;
  ulonglong uVar15;
  undefined8 uVar16;
  ulonglong local_48;
  
  iVar11 = *(int *)(param_1 + 0xc);
  uVar7 = *(uint *)(iVar11 + 8);
  if (uVar7 != 0) {
    uVar12 = 0;
    uVar13 = uVar7;
    do {
      uVar14 = uVar13 + uVar12 >> 1;
      uVar15 = *(ulonglong *)(*(int *)(iVar11 + 4) + uVar14 * 0x18);
      uVar9 = uVar14;
      if (uVar15 <= param_2) {
        if (param_2 <= uVar15) break;
        uVar12 = uVar14 + 1;
        uVar14 = uVar12;
        uVar9 = uVar13;
      }
      uVar13 = uVar9;
    } while (uVar13 != uVar12);
    if (((uVar14 != uVar7) &&
        (puVar4 = (ulonglong *)(*(int *)(iVar11 + 4) + uVar14 * 0x18), *puVar4 == param_2)) &&
       (puVar4 = puVar4 + 2, puVar4 != (ulonglong *)0x0)) {
      return puVar4;
    }
  }
  uVar10 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar10,&local_48,param_2);
  piVar8 = *(int **)(param_1 + 0xc);
  uVar12 = 0;
  puVar1 = (uint *)(piVar8 + 2);
  uVar7 = *puVar1;
  if (uVar7 != 0) {
    uVar13 = 0;
    uVar14 = uVar7;
    do {
      uVar12 = uVar14 + uVar13 >> 1;
      uVar15 = *(ulonglong *)(piVar8[1] + uVar12 * 0x18);
      uVar9 = uVar12;
      if (uVar15 <= param_2) {
        if (param_2 <= uVar15) break;
        uVar13 = uVar12 + 1;
        uVar12 = uVar13;
        uVar9 = uVar14;
      }
      uVar14 = uVar9;
    } while (uVar14 != uVar13);
  }
  piVar2 = piVar8 + 1;
  if ((uVar12 == uVar7) || (puVar4 = (ulonglong *)(*piVar2 + uVar12 * 0x18), *puVar4 != param_2)) {
    puVar3 = (uint *)(piVar8 + 3);
    uVar13 = *puVar3;
    if (uVar13 == uVar7) {
      uVar7 = 0x10;
      if (uVar13 != 0) {
        uVar7 = uVar13 << 1;
      }
      iVar11 = FUN_10081da0(uVar7 * 0x18);
      if (iVar11 != 0) {
        uVar13 = 0;
        if (*puVar1 != 0) {
          do {
            uVar14 = uVar13 + 1;
            puVar5 = (undefined8 *)(*piVar2 + uVar13 * 0x18);
            puVar6 = (undefined8 *)(iVar11 + uVar13 * 0x18);
            uVar16 = *puVar5;
            puVar6[1] = puVar5[1];
            *puVar6 = uVar16;
            puVar6[2] = puVar5[2];
            uVar13 = uVar14;
          } while (uVar14 < *puVar1);
        }
        FUN_10081dc0(*piVar8);
        *piVar8 = iVar11;
        *piVar2 = iVar11;
        *puVar3 = uVar7;
      }
    }
    uVar7 = *puVar1;
    if (*puVar3 != uVar7) {
      for (; uVar12 < uVar7; uVar7 = uVar7 - 1) {
        puVar5 = (undefined8 *)(*piVar2 + uVar7 * 0x18);
        puVar5[1] = puVar5[-2];
        *puVar5 = puVar5[-3];
        puVar5[2] = puVar5[-1];
      }
      *puVar1 = *puVar1 + 1;
      *(ulonglong *)(*piVar2 + uVar12 * 0x18 + 8) = param_2;
      *(ulonglong *)(*piVar2 + uVar12 * 0x18 + 0x10) = local_48;
      *(ulonglong *)(*piVar2 + uVar12 * 0x18) = param_2;
    }
  }
  else {
    puVar4[2] = local_48;
  }
  return (ulonglong *)(*piVar2 + uVar12 * 0x18 + 0x10);
}

