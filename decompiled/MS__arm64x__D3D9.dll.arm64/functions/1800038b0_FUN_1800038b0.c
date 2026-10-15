/*
 * FUN_1800038b0 at 1800038b0
 * undefined FUN_1800038b0(void)
 * Address ranges: 1800038b0-180003bdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800038b0(longlong *param_1,uint param_2,longlong param_3,longlong param_4,longlong param_5,
                 undefined4 param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint local_100;
  int local_fc;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  longlong local_d0;
  undefined1 auStack_c8 [8];
  longlong local_c0;
  longlong lStack_b8;
  longlong local_b0;
  int local_a8;
  int iStack_a4;
  undefined1 local_57;
  
  local_e8 = 0;
  uStack_e0 = 0;
  local_fc = 0;
  local_100 = 0;
  uVar9 = 0;
  local_d8 = param_4;
  local_d0 = param_5;
  do {
    uVar8 = (uint)uVar9;
    if (param_2 <= uVar8) break;
    local_c0 = 0;
    lStack_b8 = 0;
    local_b0 = 0;
    puVar2 = (undefined4 *)(uVar9 * 0x50 + param_3);
    local_fc = FUN_180002a98(param_1[0x1c5],*puVar2,(int)param_1[0x1cd],param_1[0x1ce],
                             (uVar9 * 0x50 | 8) + param_3,auStack_c8);
    if (-1 < local_fc) {
      local_fc = 0;
    }
    if (local_100 < (uint)(iStack_a4 * local_a8)) {
      param_1[0x1c9] = lStack_b8;
      param_1[0x1c8] = local_c0;
      param_1[0x1ca] = local_b0;
      *(int *)(param_1 + 0x1cb) = local_a8;
      *(int *)((longlong)param_1 + 0xe5c) = iStack_a4;
      *(undefined1 *)(param_1 + 0x1cc) = local_57;
      local_100 = iStack_a4 * local_a8;
    }
    if ((local_fc < 0) || ((*(uint *)(param_1 + 0x1cf) >> 9 & 1) == 0)) {
      if (-1 < local_fc) {
LAB_180003a70:
        uVar9 = FUN_180006638(&local_e8,auStack_c8);
        if ((uVar9 & 1) == 0) {
          local_fc = -0x7fffbffb;
          lVar5 = local_e8;
          goto LAB_180003bb0;
        }
      }
    }
    else {
      local_fc = -0x7789f794;
      if (puVar2[0xc] == 0) {
        uVar9 = 0;
        if (uVar8 != 0) {
          local_fc = -0x7789f794;
          do {
            lVar6 = param_1[0x1ce];
            lVar5 = *(longlong *)(param_3 + 0x28 + uVar9 * 0x50);
            lVar3 = (*__imp_USER32_dll_GetDesktopWindow)();
            if (lVar5 == lVar3 || lVar5 == 0) {
              lVar5 = lVar6;
            }
            lVar3 = *(longlong *)(puVar2 + 10);
            lVar7 = param_1[0x1ce];
            lVar6 = (*__imp_USER32_dll_GetDesktopWindow)();
            if (lVar3 == lVar6 || lVar3 == 0) {
              lVar3 = lVar7;
            }
            if (lVar5 == lVar3) goto LAB_180003a94;
            uVar1 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar1;
          } while (uVar1 < uVar8);
        }
        local_fc = -0x7789f794;
        if ((((uint)uVar9 == uVar8) && (*(int *)(param_3 + 0x34) == puVar2[0xd])) &&
           ((puVar2[0xd] == 0 ||
            ((((*(int *)(param_3 + 0x38) == puVar2[0xe] && (*(int *)(param_3 + 0x10) == puVar2[4]))
              && (*(int *)(param_3 + 8) == puVar2[2])) && (*(int *)(param_3 + 0xc) == puVar2[3])))))
           ) {
          local_fc = 0;
          goto LAB_180003a70;
        }
      }
    }
LAB_180003a94:
    uVar9 = (ulonglong)(uVar8 + 1);
  } while (-1 < local_fc);
  lVar6 = local_d0;
  lVar3 = local_d8;
  lVar5 = local_e8;
  uVar9 = 0;
  while (iVar10 = (int)uVar9, -1 < local_fc) {
    if ((int)param_2 <= iVar10) goto LAB_180003bb0;
    if ((int)param_1[0x1cd] == 1) {
      uVar4 = FUN_18000dfc8(lVar5 + uVar9 * 0x78);
      uVar4 = uVar4 & 0xffffffff;
    }
    else {
      uVar4 = 0;
    }
    local_fc = -0x7789fe84;
    if (uVar4 <= (ulonglong)(&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + 0x1d5) * 0x4b]) {
      lVar7 = (longlong)iVar10;
      local_fc = (**(code **)(*param_1 + 8))
                           (param_1,lVar5 + uVar9 * 0x78,
                            *(undefined8 *)(param_3 + 0x48 + lVar7 * 0x50),uVar4,param_6,
                            (*(uint *)(param_1 + 0x1cf) & 0x200) != 0 && 1 < param_2,iVar10 == 0,
                            lVar3 + lVar7 * 8,lVar6 + lVar7 * 8);
    }
    uVar9 = (ulonglong)(iVar10 + 1);
  }
  uVar8 = iVar10 - 1;
  if (0 < (int)uVar8) {
    lVar3 = lVar3 + -8;
    do {
      (**(code **)(*param_1 + 0x10))(param_1,*(undefined8 *)(lVar3 + (ulonglong)uVar8 * 8),0);
      *(undefined8 *)(lVar3 + (ulonglong)uVar8 * 8) = 0;
      uVar8 = uVar8 - 1;
    } while (0 < (int)uVar8);
  }
LAB_180003bb0:
  thunk_FUN_180102fc0(lVar5);
  return local_fc;
}

