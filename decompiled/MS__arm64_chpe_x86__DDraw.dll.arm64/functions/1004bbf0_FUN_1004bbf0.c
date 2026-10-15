/*
 * FUN_1004bbf0 at 1004bbf0
 * undefined FUN_1004bbf0(void)
 * Address ranges: 1004bbf0-1004c09f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1004bbf0(int param_1,int param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *extraout_w8;
  undefined4 *extraout_w8_00;
  int iVar12;
  int extraout_w10;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  uint local_c0 [32];
  
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_c0[0] = 0;
  local_c0[1] = 1;
  uVar11 = 1;
  iVar12 = 0;
  if (1 < param_3) {
    do {
      iVar15 = *(int *)(param_2 + -4 + uVar11 * 4);
      iVar3 = *(int *)(param_2 + uVar11 * 4);
      if ((*(int *)(iVar15 + 0x15c) == *(int *)(iVar3 + 0x15c) * 2) &&
         (*(int *)(iVar15 + 0x158) == *(int *)(iVar3 + 0x158) * 2 && uVar11 != param_4)) {
        local_c0[iVar12 * 2 + 1] = local_c0[iVar12 * 2 + 1] + 1;
      }
      else {
        iVar12 = iVar12 + 1;
        local_c0[iVar12 * 2] = 0;
        local_c0[iVar12 * 2 + 1] = 1;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_3);
  }
  iVar15 = 0;
  uVar11 = 0;
  if (iVar12 != -1) {
    do {
      piVar1 = (int *)(param_2 + iVar15 * 4);
      if (*(int *)(*(int *)(*piVar1 + 4) + 0x6c) == 0) {
        uVar14 = local_c0[uVar11 * 2 + 1];
        uVar6 = (*pcVar4)();
        uVar7 = (*extraout_w11)(uVar6);
        if (uVar7 != uVar14) goto LAB_1004bd4c;
        local_c0[uVar11 * 2] = 0;
      }
      else {
LAB_1004bd4c:
        uVar10 = (ulonglong)*(uint *)(*(int *)(param_1 + 4) + 0x4c);
        uVar14 = local_c0[uVar11 * 2 + 1];
        FUN_1004d7d0(param_1 + 0x150);
        puVar9 = (undefined4 *)(extraout_w10 + 0x1cc);
        puVar8 = (undefined4 *)(extraout_w10 + 0x158);
        (*pcVar4)();
        uVar7 = (*extraout_w11_00)(uVar10 & 0xffffffff,*extraout_w8,*puVar8,*puVar9,uVar14);
        local_c0[uVar11 * 2] = uVar7;
        if (uVar7 == 0) {
LAB_1004c030:
          uVar14 = 0;
          if (uVar11 != 0) {
            do {
              if (local_c0[uVar14 * 2] != 0) {
                uVar6 = (*pcVar4)();
                (*extraout_w11_04)(uVar6);
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar11);
          }
          return 0;
        }
        local_d0 = 0;
        local_c8 = 0;
        uVar13 = 0;
        uStack_e8 = 0;
        local_f0 = 0;
        uStack_d8 = 0;
        local_e0 = 0;
        local_c4 = 1;
        if (uVar14 != 0) {
          do {
            piVar2 = piVar1 + uVar13;
            iVar3 = *piVar2;
            (*(code *)PTR_FUN_100ba2b8)
                      (&local_e0,0,0,*(undefined4 *)(iVar3 + 0x15c),*(undefined4 *)(iVar3 + 0x158));
            uStack_e8 = uStack_d8;
            local_f0 = local_e0;
            puVar9 = (undefined4 *)(*(int *)(*piVar2 + 4) + 0x50);
            uVar6 = (*pcVar4)();
            cVar5 = (*extraout_w11_01)(uVar6,uVar13,0,*extraout_w8_00,0,uVar7,*puVar9,&local_f0);
            if (cVar5 == '\0') {
              (*pcVar4)();
              (*extraout_w11_03)(uVar7);
              local_c0[uVar11 * 2] = 0;
              goto LAB_1004c030;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar14);
        }
      }
      uVar11 = uVar11 + 1;
      iVar15 = uVar14 + iVar15;
    } while (uVar11 < iVar12 + 1U);
    iVar15 = 0;
    uVar11 = 0;
    do {
      uVar14 = local_c0[uVar11 * 2];
      if (uVar14 != 0) {
        uVar7 = 0;
        uVar13 = local_c0[uVar11 * 2 + 1];
        if (uVar13 != 0) {
          do {
            piVar1 = (int *)(param_2 + iVar15 * 4 + uVar7 * 4);
            if (*(int *)(*(int *)(*piVar1 + 4) + 0x6c) == 0) {
              uVar6 = (*pcVar4)();
              (*extraout_w11_02)(uVar6);
            }
            piVar1 = (int *)(*piVar1 + 4);
            *(uint *)(*piVar1 + 0x50) = uVar14;
            *(uint *)(*piVar1 + 0x6c) = uVar7;
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar13);
        }
      }
      iVar3 = uVar11 * 2;
      uVar11 = uVar11 + 1;
      iVar15 = local_c0[iVar3 + 1] + iVar15;
    } while (uVar11 < iVar12 + 1U);
  }
  return 1;
}

