/*
 * FUN_1004f928 at 1004f928
 * undefined FUN_1004f928(void)
 * Address ranges: 1004f928-1004fbdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004f928(uint param_1,ulonglong param_2,ulonglong param_3)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong extraout_x1;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  code *extraout_w11;
  undefined8 uVar16;
  ulonglong local_58;
  ulonglong uStack_50;
  
  uVar14 = (ulonglong)param_1;
  piVar1 = (int *)(param_1 + 0x10);
  param_2 = *(ulonglong *)(param_1 + 8) & param_2;
  local_58 = param_2;
  uStack_50 = param_3;
  uVar10 = FUN_1004fbe0(piVar1,&local_58);
  puVar2 = (uint *)(param_1 + 0x18);
  piVar3 = (int *)(param_1 + 0x14);
  if ((((uVar10 == *puVar2) || (puVar6 = (ulonglong *)(*piVar3 + uVar10 * 0x18), *puVar6 != param_2)
       ) || (puVar6[1] != param_3)) || (puVar6 + 2 == (ulonglong *)0x0)) {
    uVar13 = (ulonglong)*(uint *)((int)uVar14 + 0x24);
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar11 = (*extraout_w11)(uVar14 & 0xffffffff,extraout_x1 & 0xffffffff,uVar13 & 0xffffffff,
                             param_2,param_3);
    if (iVar11 != 0) {
      local_58 = param_2;
      uStack_50 = param_3;
      uVar10 = FUN_1004fbe0(piVar1,&local_58);
      if (((uVar10 == *puVar2) ||
          (puVar6 = (ulonglong *)(*piVar3 + uVar10 * 0x18), *puVar6 != param_2)) ||
         (puVar6[1] != param_3)) {
        puVar4 = (uint *)(param_1 + 0x1c);
        uVar15 = *puVar4;
        if (uVar15 == *puVar2) {
          uVar9 = 0x10;
          if (uVar15 != 0) {
            uVar9 = uVar15 << 1;
          }
          iVar12 = FUN_101322b0(uVar9 * 0x18);
          if (iVar12 != 0) {
            uVar15 = 0;
            if (*puVar2 != 0) {
              do {
                uVar5 = uVar15 + 1;
                puVar7 = (undefined8 *)(*piVar3 + uVar15 * 0x18);
                puVar8 = (undefined8 *)(iVar12 + uVar15 * 0x18);
                uVar16 = *puVar7;
                puVar8[1] = puVar7[1];
                *puVar8 = uVar16;
                puVar8[2] = puVar7[2];
                uVar15 = uVar5;
              } while (uVar5 < *puVar2);
            }
            FUN_101322d0(*piVar1);
            *piVar1 = iVar12;
            *piVar3 = iVar12;
            *puVar4 = uVar9;
          }
        }
        uVar15 = *puVar2;
        if (*puVar4 == uVar15) {
          return iVar11;
        }
        for (; uVar10 < uVar15; uVar15 = uVar15 - 1) {
          puVar7 = (undefined8 *)(*piVar3 + uVar15 * 0x18);
          puVar7[1] = puVar7[-2];
          *puVar7 = puVar7[-3];
          puVar7[2] = puVar7[-1];
        }
        *puVar2 = *puVar2 + 1;
        puVar6 = (ulonglong *)(*piVar3 + uVar10 * 0x18);
        puVar6[1] = param_3;
        *puVar6 = param_2;
        puVar6 = (ulonglong *)(*piVar3 + uVar10 * 0x18);
      }
      *(int *)(puVar6 + 2) = iVar11;
    }
  }
  else {
    iVar11 = (int)puVar6[2];
  }
  return iVar11;
}

