/*
 * FUN_1007d4d8 at 1007d4d8
 * undefined FUN_1007d4d8(void)
 * Address ranges: 1007d4d8-1007d81b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007d4d8(int param_1,uint *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  code *extraout_w11;
  code *extraout_w11_00;
  ulonglong uVar17;
  uint uVar18;
  int *piVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  uint *local_60;
  uint local_5c;
  uint *local_58;
  int local_50;
  int iStack_4c;
  ulonglong uStack_48;
  
  uVar20 = *(ulonglong *)(param_1 + 0x938);
  iVar11 = *(int *)(param_1 + 0x8e0);
  iVar5 = *(int *)(param_1 + 0x8e4);
  local_60 = param_2;
  local_58 = param_2;
  (*(code *)PTR_FUN_100ba0a0)(iVar5 + 0x1c);
  piVar19 = (int *)(iVar5 + 0xc);
  piVar9 = (int *)FUN_10078de0(piVar19,&local_60);
  pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (piVar9 == (int *)0x0) {
    puVar1 = (uint *)(iVar5 + 0x14);
    uVar15 = *puVar1;
    uVar12 = (ulonglong)(int)param_2;
    uVar18 = 0;
    local_50 = iVar11;
    iStack_4c = param_1;
    uStack_48 = uVar20;
    if (uVar15 != 0) {
      uVar16 = 0;
      uVar14 = uVar15;
      do {
        uVar18 = uVar14 + uVar16 >> 1;
        uVar17 = *(ulonglong *)(*(int *)(iVar5 + 0x10) + uVar18 * 0x20);
        uVar8 = uVar18;
        if (uVar17 <= uVar12) {
          if (uVar12 <= uVar17) break;
          uVar16 = uVar18 + 1;
          uVar18 = uVar16;
          uVar8 = uVar14;
        }
        uVar14 = uVar8;
      } while (uVar14 != uVar16);
      if ((uVar18 != uVar15) &&
         (puVar2 = (ulonglong *)(*(int *)(iVar5 + 0x10) + uVar18 * 0x20), *puVar2 == uVar12)) {
        puVar2[3] = uVar20;
        puVar2[2] = CONCAT44(param_1,iVar11);
        goto LAB_1007d7f0;
      }
    }
    local_60 = (uint *)(iVar5 + 0x18);
    uVar16 = *local_60;
    if (uVar16 == uVar15) {
      local_5c = 0x10;
      if (uVar16 != 0) {
        local_5c = uVar16 << 1;
      }
      iVar11 = FUN_100914b0(local_5c << 5);
      if (iVar11 != 0) {
        uVar15 = 0;
        if (*puVar1 != 0) {
          do {
            puVar3 = (undefined8 *)(*(int *)(iVar5 + 0x10) + uVar15 * 0x20);
            puVar4 = (undefined8 *)(iVar11 + uVar15 * 0x20);
            uVar15 = uVar15 + 1;
            uVar23 = *puVar3;
            uVar22 = puVar3[3];
            uVar21 = puVar3[2];
            puVar4[1] = puVar3[1];
            *puVar4 = uVar23;
            puVar4[3] = uVar22;
            puVar4[2] = uVar21;
          } while (uVar15 < *(uint *)(iVar5 + 0x14));
        }
        FUN_100914d0(*piVar19);
        *piVar19 = iVar11;
        *(int *)(iVar5 + 0x10) = iVar11;
        *local_60 = local_5c;
      }
    }
    piVar19 = (int *)(iVar5 + 0x10);
    uVar15 = *puVar1;
    if (*local_60 != uVar15) {
      for (; uVar18 < uVar15; uVar15 = uVar15 - 1) {
        puVar3 = (undefined8 *)(*piVar19 + uVar15 * 0x20);
        puVar3[1] = puVar3[-3];
        *puVar3 = puVar3[-4];
        puVar3[3] = puVar3[-1];
        puVar3[2] = puVar3[-2];
      }
      *puVar1 = *puVar1 + 1;
      *(uint **)(*piVar19 + uVar18 * 0x20 + 8) = local_58;
      iVar11 = *piVar19 + uVar18 * 0x20;
      *(ulonglong *)(iVar11 + 0x18) = uStack_48;
      *(ulonglong *)(iVar11 + 0x10) = CONCAT44(iStack_4c,local_50);
      *(ulonglong *)(*piVar19 + uVar18 * 0x20) = uVar12;
    }
  }
  else {
    uVar10 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar12 = (*extraout_w11)(uVar10);
    puVar2 = (ulonglong *)(piVar9 + 2);
    if (uVar12 < *puVar2) {
      iVar6 = piVar9[1];
      if (iVar11 == *piVar9) {
        if (param_1 != iVar6 && iVar6 != -1) {
          FUN_1007cfb0(iVar6 + 4,0);
        }
      }
      else {
        if (iVar6 != -1) {
          FUN_1007cfb0(iVar6 + 4,0);
        }
        if (param_1 != -1) {
          FUN_1007cfb0(param_1 + 4,0);
        }
        puVar13 = (undefined4 *)(*piVar9 + 0xc);
        uVar10 = (*pcVar7)();
        (*extraout_w11_00)(uVar10,*puVar13,*puVar2);
      }
    }
    *piVar9 = iVar11;
    piVar9[1] = param_1;
    *puVar2 = uVar20;
  }
LAB_1007d7f0:
  (*(code *)PTR_FUN_100ba0f0)(iVar5 + 0x1c);
  return;
}

