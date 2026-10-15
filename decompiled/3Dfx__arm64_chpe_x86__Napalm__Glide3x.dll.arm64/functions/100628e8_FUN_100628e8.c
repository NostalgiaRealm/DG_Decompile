/*
 * FUN_100628e8 at 100628e8
 * undefined FUN_100628e8(void)
 * Address ranges: 100628e8-10062c1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100628e8(int param_1,uint param_2,int param_3,int param_4,ulonglong param_5)

{
  uint *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  code *extraout_w11;
  code *extraout_w11_00;
  ulonglong uVar16;
  uint uVar17;
  int *piVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  uint local_60;
  int local_5c;
  uint local_58;
  int local_50;
  int iStack_4c;
  ulonglong uStack_48;
  
  local_60 = param_2;
  local_5c = param_1;
  local_58 = param_2;
  (*(code *)PTR_FUN_100a803c)(param_1 + 0x1c);
  piVar18 = (int *)(param_1 + 0xc);
  piVar8 = (int *)FUN_10062fa0(piVar18,&local_60);
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (piVar8 == (int *)0x0) {
    puVar1 = (uint *)(param_1 + 0x14);
    uVar14 = *puVar1;
    uVar11 = (ulonglong)(int)param_2;
    uVar17 = 0;
    local_50 = param_3;
    iStack_4c = param_4;
    uStack_48 = param_5;
    if (uVar14 != 0) {
      uVar15 = 0;
      uVar13 = uVar14;
      do {
        uVar17 = uVar13 + uVar15 >> 1;
        uVar16 = *(ulonglong *)(*(int *)(param_1 + 0x10) + uVar17 * 0x20);
        uVar7 = uVar17;
        if (uVar16 <= uVar11) {
          if (uVar11 <= uVar16) break;
          uVar15 = uVar17 + 1;
          uVar17 = uVar15;
          uVar7 = uVar13;
        }
        uVar13 = uVar7;
      } while (uVar13 != uVar15);
      if ((uVar17 != uVar14) &&
         (puVar3 = (ulonglong *)(*(int *)(param_1 + 0x10) + uVar17 * 0x20), *puVar3 == uVar11)) {
        puVar3[3] = param_5;
        puVar3[2] = CONCAT44(param_4,param_3);
        goto LAB_10062bf0;
      }
    }
    puVar2 = (uint *)(param_1 + 0x18);
    uVar15 = *puVar2;
    if (uVar15 == uVar14) {
      local_60 = 0x10;
      if (uVar15 != 0) {
        local_60 = uVar15 << 1;
      }
      iVar10 = FUN_10083400(local_60 << 5);
      if (iVar10 != 0) {
        uVar14 = 0;
        if (*puVar1 != 0) {
          do {
            puVar4 = (undefined8 *)(*(int *)(local_5c + 0x10) + uVar14 * 0x20);
            puVar5 = (undefined8 *)(iVar10 + uVar14 * 0x20);
            uVar14 = uVar14 + 1;
            uVar21 = *puVar4;
            uVar20 = puVar4[3];
            uVar19 = puVar4[2];
            puVar5[1] = puVar4[1];
            *puVar5 = uVar21;
            puVar5[3] = uVar20;
            puVar5[2] = uVar19;
          } while (uVar14 < *(uint *)(local_5c + 0x14));
        }
        FUN_10083420(*piVar18);
        *piVar18 = iVar10;
        *(int *)(param_1 + 0x10) = iVar10;
        *puVar2 = local_60;
      }
    }
    piVar18 = (int *)(param_1 + 0x10);
    uVar14 = *puVar1;
    if (*puVar2 != uVar14) {
      for (; uVar17 < uVar14; uVar14 = uVar14 - 1) {
        puVar4 = (undefined8 *)(*piVar18 + uVar14 * 0x20);
        puVar4[1] = puVar4[-3];
        *puVar4 = puVar4[-4];
        puVar4[3] = puVar4[-1];
        puVar4[2] = puVar4[-2];
      }
      *puVar1 = *puVar1 + 1;
      *(uint *)(*piVar18 + uVar17 * 0x20 + 8) = local_58;
      iVar10 = *piVar18 + uVar17 * 0x20;
      *(ulonglong *)(iVar10 + 0x18) = uStack_48;
      *(ulonglong *)(iVar10 + 0x10) = CONCAT44(iStack_4c,local_50);
      *(ulonglong *)(*piVar18 + uVar17 * 0x20) = uVar11;
    }
  }
  else {
    uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar11 = (*extraout_w11)(uVar9);
    puVar3 = (ulonglong *)(piVar8 + 2);
    if (uVar11 < *puVar3) {
      iVar10 = piVar8[1];
      if (param_3 == *piVar8) {
        if (param_4 != iVar10 && iVar10 != -1) {
          FUN_10068fa0(iVar10 + 4,0);
        }
      }
      else {
        if (iVar10 != -1) {
          FUN_10068fa0(iVar10 + 4,0);
        }
        if (param_4 != -1) {
          FUN_10068fa0(param_4 + 4,0);
        }
        puVar12 = (undefined4 *)(*piVar8 + 0xc);
        uVar9 = (*pcVar6)();
        (*extraout_w11_00)(uVar9,*puVar12,*puVar3);
      }
    }
    *piVar8 = param_3;
    piVar8[1] = param_4;
    *puVar3 = param_5;
  }
LAB_10062bf0:
  (*(code *)PTR_FUN_100a8090)(param_1 + 0x1c);
  return;
}

