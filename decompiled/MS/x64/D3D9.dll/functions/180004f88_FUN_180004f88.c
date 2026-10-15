/*
 * FUN_180004f88 at 180004f88
 * ulonglong __fastcall FUN_180004f88(longlong * param_1, uint param_2, longlong param_3, longlong param_4, longlong param_5, undefined1 param_6)
 * Address ranges: 180004f88-1800052d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180004f88(longlong *param_1,uint param_2,longlong param_3,longlong param_4,
                       longlong param_5,undefined1 param_6)

{
  uint *puVar1;
  HWND pHVar2;
  ulonglong uVar3;
  HWND pHVar4;
  HWND pHVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  LPVOID pvVar13;
  uint local_e8;
  HWND local_d8;
  LPVOID local_d0;
  undefined8 local_c8;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  int local_98;
  int local_94;
  undefined1 local_47;
  
  local_d0 = (LPVOID)0x0;
  uVar10 = 0;
  local_e8 = 0;
  local_c8 = 0;
  uVar3 = 0;
  do {
    uVar11 = (uint)uVar3;
    if (param_2 <= uVar11) break;
    local_b0 = 0;
    local_a8 = 0;
    puVar1 = (uint *)(uVar3 * 0x50 + param_3);
    local_a0 = 0;
    uVar3 = FUN_180003254(param_1[0x1c5],*puVar1,(int)param_1[0x1cd],(HWND)param_1[0x1ce],
                          (uint *)((uVar3 * 0x50 | 8) + param_3),&local_b8);
    uVar10 = 0;
    if ((int)uVar3 < 0) {
      uVar10 = uVar3 & 0xffffffff;
    }
    if (local_e8 < (uint)(local_94 * local_98)) {
      *(undefined4 *)(param_1 + 0x1c8) = (undefined4)local_b0;
      *(undefined4 *)((longlong)param_1 + 0xe44) = local_b0._4_4_;
      *(undefined4 *)(param_1 + 0x1c9) = (undefined4)local_a8;
      *(undefined4 *)((longlong)param_1 + 0xe4c) = local_a8._4_4_;
      *(undefined4 *)(param_1 + 0x1ca) = (undefined4)local_a0;
      *(undefined4 *)((longlong)param_1 + 0xe54) = local_a0._4_4_;
      *(undefined1 *)(param_1 + 0x1cc) = local_47;
      *(int *)(param_1 + 0x1cb) = local_98;
      *(int *)((longlong)param_1 + 0xe5c) = local_94;
      local_e8 = local_94 * local_98;
    }
    if (-1 < (int)uVar10) {
      if ((*(uint *)(param_1 + 0x1cf) & 0x200) == 0) {
        if (-1 < (int)uVar10) {
LAB_180005177:
          uVar6 = FUN_18000920c((longlong *)&local_d0,&local_b8);
          if ((char)uVar6 == '\0') {
            uVar10 = 0x80004005;
            pvVar13 = local_d0;
            goto LAB_1800052b0;
          }
        }
      }
      else {
        uVar10 = 0x8876086c;
        if (puVar1[0xc] == 0) {
          uVar3 = 0;
          uVar12 = 0;
          if (uVar11 != 0) {
            do {
              pHVar2 = (HWND)param_1[0x1ce];
              local_d8 = *(HWND *)(param_3 + 0x28 + uVar3 * 0x50);
              pHVar4 = GetDesktopWindow();
              if ((local_d8 == pHVar4) || (local_d8 == (HWND)0x0)) {
                local_d8 = pHVar2;
              }
              pHVar2 = (HWND)param_1[0x1ce];
              pHVar4 = *(HWND *)(puVar1 + 10);
              pHVar5 = GetDesktopWindow();
              if ((pHVar4 == pHVar5) || (pHVar4 == (HWND)0x0)) {
                pHVar4 = pHVar2;
              }
              if (local_d8 == pHVar4) goto LAB_180005189;
              uVar12 = (int)uVar3 + 1;
              uVar3 = (ulonglong)uVar12;
            } while (uVar12 < uVar11);
          }
          if (((uVar12 == uVar11) && (*(uint *)(param_3 + 0x34) == puVar1[0xd])) &&
             ((puVar1[0xd] == 0 ||
              ((((*(uint *)(param_3 + 0x38) == puVar1[0xe] &&
                 (*(uint *)(param_3 + 0x10) == puVar1[4])) && (*(uint *)(param_3 + 8) == puVar1[2]))
               && (*(uint *)(param_3 + 0xc) == puVar1[3])))))) {
            uVar10 = 0;
            goto LAB_180005177;
          }
        }
      }
    }
LAB_180005189:
    uVar3 = (ulonglong)(uVar11 + 1);
  } while (-1 < (int)uVar10);
  pvVar13 = local_d0;
  uVar11 = 0;
  iVar9 = (int)uVar10;
  while (-1 < iVar9) {
    if ((int)param_2 <= (int)uVar11) goto LAB_1800052b0;
    if ((int)param_1[0x1cd] == 1) {
      uVar12 = FUN_180016978((longlong)((ulonglong)uVar11 * 0x78 + (longlong)pvVar13));
      uVar3 = (ulonglong)uVar12;
    }
    else {
      uVar3 = 0;
    }
    uVar10 = 0x8876017c;
    if (uVar3 <= *(ulonglong *)(&DAT_180112b00 + (ulonglong)*(uint *)(param_1 + 0x1d5) * 600)) {
      if (((*(uint *)(param_1 + 0x1cf) & 0x200) == 0) || (param_2 < 2)) {
        uVar8 = 0;
      }
      else {
        uVar8 = 1;
      }
      lVar7 = (longlong)(int)uVar11;
      uVar12 = (**(code **)(*param_1 + 8))
                         (param_1,(LPVOID)((ulonglong)uVar11 * 0x78 + (longlong)pvVar13),
                          *(undefined8 *)(param_3 + 0x48 + lVar7 * 0x50),uVar3,param_6,uVar8,
                          uVar11 == 0,param_4 + lVar7 * 8,param_5 + lVar7 * 8);
      uVar10 = (ulonglong)uVar12;
    }
    uVar11 = uVar11 + 1;
    iVar9 = (int)uVar10;
  }
  while (uVar11 = uVar11 - 1, 0 < (int)uVar11) {
    (**(code **)(*param_1 + 0x10))(param_1,*(undefined8 *)(param_4 + -8 + (ulonglong)uVar11 * 8),0);
    *(undefined8 *)(param_4 + -8 + (ulonglong)uVar11 * 8) = 0;
  }
LAB_1800052b0:
  FUN_1800fbcf0(pvVar13);
  return uVar10;
}

