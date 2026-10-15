/*
 * FUN_1005d4e8 at 1005d4e8
 * undefined FUN_1005d4e8(void)
 * Address ranges: 1005d4e8-1005d7a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong * FUN_1005d4e8(uint param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  code *extraout_w11;
  undefined8 uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  ulonglong local_50;
  int local_48;
  
  uVar11 = (ulonglong)param_1;
  uVar13 = *(ulonglong *)(param_1 + 8);
  piVar1 = (int *)(param_1 + 0x10);
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[4] = 0;
  *(int *)(param_2 + 5) = 0;
  uVar13 = uVar13 & param_3;
  local_88 = uVar13;
  uStack_80 = param_4;
  uVar9 = FUN_1005d7a8(piVar1,&local_88);
  puVar2 = (uint *)(param_1 + 0x18);
  piVar3 = (int *)(param_1 + 0x14);
  if ((((uVar9 == *puVar2) || (puVar5 = (ulonglong *)(*piVar3 + uVar9 * 0x40), *puVar5 != uVar13))
      || (puVar5[1] != param_4)) || (puVar5 + 2 == (ulonglong *)0x0)) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar10 = (*extraout_w11)(uVar11 & 0xffffffff,uVar13,param_4);
    *(int *)param_2 = iVar10;
    if (iVar10 != 0) {
      local_50 = param_2[4];
      uStack_68 = param_2[1];
      local_70 = *param_2;
      uStack_58 = param_2[3];
      uStack_60 = param_2[2];
      local_48 = (int)param_2[5];
      local_88 = uVar13;
      uStack_80 = param_4;
      uVar9 = FUN_1005d7a8(piVar1,&local_88);
      if (((uVar9 == *puVar2) || (puVar5 = (ulonglong *)(*piVar3 + uVar9 * 0x40), *puVar5 != uVar13)
          ) || (puVar5[1] != param_4)) {
        puVar4 = (uint *)(param_1 + 0x1c);
        uVar12 = *puVar4;
        if (uVar12 == *puVar2) {
          uVar8 = 0x10;
          if (uVar12 != 0) {
            uVar8 = uVar12 << 1;
          }
          iVar10 = FUN_100fece0(uVar8 << 6);
          if (iVar10 != 0) {
            uVar12 = 0;
            if (*puVar2 != 0) {
              do {
                puVar6 = (undefined8 *)(*piVar3 + uVar12 * 0x40);
                puVar7 = (undefined8 *)(iVar10 + uVar12 * 0x40);
                uVar12 = uVar12 + 1;
                uVar17 = *puVar6;
                uVar15 = puVar6[3];
                uVar14 = puVar6[2];
                puVar7[1] = puVar6[1];
                *puVar7 = uVar17;
                puVar7[3] = uVar15;
                puVar7[2] = uVar14;
                uVar17 = puVar6[4];
                uVar15 = puVar6[7];
                uVar14 = puVar6[6];
                puVar7[5] = puVar6[5];
                puVar7[4] = uVar17;
                puVar7[7] = uVar15;
                puVar7[6] = uVar14;
              } while (uVar12 < *puVar2);
            }
            FUN_100fed00(*piVar1);
            *piVar1 = iVar10;
            *piVar3 = iVar10;
            *puVar4 = uVar8;
          }
        }
        uVar12 = *puVar2;
        if (*puVar4 == uVar12) {
          return param_2;
        }
        for (; uVar9 < uVar12; uVar12 = uVar12 - 1) {
          puVar6 = (undefined8 *)(*piVar3 + uVar12 * 0x40);
          puVar6[1] = puVar6[-7];
          *puVar6 = puVar6[-8];
          puVar6[3] = puVar6[-5];
          puVar6[2] = puVar6[-6];
          puVar6[5] = puVar6[-3];
          puVar6[4] = puVar6[-4];
          puVar6[7] = puVar6[-1];
          puVar6[6] = puVar6[-2];
        }
        *puVar2 = *puVar2 + 1;
        puVar5 = (ulonglong *)(*piVar3 + uVar9 * 0x40);
        puVar5[1] = param_4;
        *puVar5 = uVar13;
        puVar5 = (ulonglong *)(*piVar3 + uVar9 * 0x40);
      }
      puVar5[3] = uStack_68;
      puVar5[2] = local_70;
      puVar5[5] = uStack_58;
      puVar5[4] = uStack_60;
      puVar5[6] = local_50;
      *(int *)(puVar5 + 7) = local_48;
    }
  }
  else {
    uVar16 = puVar5[2];
    uVar13 = puVar5[5];
    uVar11 = puVar5[4];
    param_2[1] = puVar5[3];
    *param_2 = uVar16;
    param_2[3] = uVar13;
    param_2[2] = uVar11;
    param_2[4] = puVar5[6];
    *(int *)(param_2 + 5) = (int)puVar5[7];
  }
  return param_2;
}

