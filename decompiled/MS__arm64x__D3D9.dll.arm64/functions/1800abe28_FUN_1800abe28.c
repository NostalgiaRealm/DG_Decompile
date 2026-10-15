/*
 * FUN_1800abe28 at 1800abe28
 * undefined FUN_1800abe28(void)
 * Address ranges: 1800abe28-1800ac403
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800abe28(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong local_150;
  ulonglong uStack_148;
  undefined8 local_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  undefined4 local_118;
  uint uStack_114;
  int local_110;
  undefined8 local_10c;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined1 auStack_e8 [12];
  int local_dc;
  longlong local_d0;
  undefined1 auStack_c8 [12];
  int local_bc;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  longlong local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  lVar12 = 0;
  if (param_4 != 0) {
    lVar12 = param_4 + -0x80;
  }
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar3 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar3 = true;
    iVar7 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar7 == 0) {
      FUN_180003398();
      bVar3 = true;
    }
  }
  if (lVar12 == 0) {
    uVar15 = 0;
    if (*(int *)(param_1 + -0x5a00) != 0) {
      do {
        lVar12 = *(longlong *)(*(longlong *)(param_1 + -0x5a08) + uVar15 * 8);
        *(undefined8 *)(lVar12 + 0x118) = 0;
        uVar1 = *(uint *)(lVar12 + 0x90);
        if (uVar1 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1800ac2f0);
          (*pcVar6)();
        }
        uVar19 = 0;
        if (uVar1 != 0) {
          uVar19 = *(uint *)(lVar12 + 0xa8) / uVar1;
        }
        uVar19 = uVar19 * *(int *)(lVar12 + 0xb8);
        uVar1 = *(uint *)(lVar12 + 0x94);
        if (uVar1 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1800ac30c);
          (*pcVar6)();
        }
        uVar16 = 0;
        if (uVar1 != 0) {
          uVar16 = *(uint *)(lVar12 + 0xac) / uVar1;
        }
        local_88 = 0;
        uStack_80 = 0;
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        uVar16 = uVar16 * *(int *)(lVar12 + 0xbc);
        if (uVar16 <= uVar19) {
          uVar19 = uVar16;
        }
        uVar1 = *(uint *)(DAT_18024de60 + 0x8aa);
        if (*(uint *)(DAT_18024de60 + 0x8aa) == 0) {
          uVar1 = uVar19;
        }
        local_78 = uVar1;
        if (0x10 < uVar1) {
          local_78 = 0x10;
        }
        if (uVar1 == 0) {
          local_78 = 1;
        }
        (**(code **)(**(longlong **)(lVar12 + 0x100) + 0x58))
                  (*(longlong **)(lVar12 + 0x100),&local_88);
        lVar12 = **(longlong **)(param_1 + -0x5a08);
        plVar14 = *(longlong **)(lVar12 + 0x100);
        (**(code **)(*plVar14 + 0x68))(plVar14,0);
        *(undefined1 *)(lVar12 + 0x120) = 0;
        uVar1 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + -0x5a00));
    }
    if (*(longlong *)(param_1 + -0x59a8) != 0) {
      (*__imp_USER32_dll_DestroyIcon)();
      *(undefined8 *)(param_1 + -0x59a8) = 0;
    }
    uVar9 = 0;
    goto LAB_1800ac3c0;
  }
  piVar2 = (int *)&DAT_00000048;
  if (param_4 != 0) {
    piVar2 = (int *)(param_4 + -0x38);
  }
  uStack_148 = *(ulonglong *)(piVar2 + 6);
  local_150 = *(ulonglong *)(piVar2 + 4);
  iVar7 = *piVar2;
  FUN_1800031b8(*(undefined8 *)(param_1 + -0x5a10),*(undefined4 *)(param_1 + -0x5990),&local_128);
  uVar15 = uStack_148;
  uVar9 = 0x8876086c;
  uVar1 = (uint)uStack_148;
  if ((((uVar1 != 1) && ((uVar1 - 1 & uVar1) != 0)) ||
      ((uVar19 = (uint)(uStack_148 >> 0x20), uVar19 != 1 && ((uVar19 - 1 & uVar19) != 0)))) ||
     (((iVar7 != 0x15 || ((uint)local_128 <= uVar1)) || (local_128._4_4_ <= uVar19))))
  goto LAB_1800ac3c0;
  local_104 = 0;
  local_118 = 0x28;
  local_110 = -uVar19;
  local_10c = 0x200001;
  local_fc = 0;
  local_f4 = 0;
  local_140 = 0;
  uStack_114 = uVar1;
  lVar10 = (*__imp_GDI32_dll_CreateDIBSection)(0,&local_118,0,&local_140,0,0);
  local_130 = lVar10;
  if (lVar10 == 0) goto LAB_1800ac3c0;
  lVar11 = (*__imp_GDI32_dll_CreateDIBSection)(0,&local_118,0,&local_140,0,0);
  local_138 = lVar11;
  if (lVar11 != 0) {
    iVar7 = (*__imp_GDI32_dll_GetObjectW)(lVar10,0x20,auStack_e8);
    if (((iVar7 != 0) && (iVar7 = (*__imp_GDI32_dll_GetObjectW)(lVar11,0x20,auStack_c8), iVar7 != 0)
        ) && (iVar7 = FUN_18000cba8(lVar12,&local_150,0,0x10,0), -1 < iVar7)) {
      plVar14 = (longlong *)(param_1 + -0x5a08);
      uVar16 = 1;
      uVar18 = uStack_148;
      if (*(int *)(param_1 + -0x5a00) == 0) {
LAB_1800ac154:
        uVar17 = 0;
        if (uVar19 != 0) {
          do {
            uVar8 = 0;
            if (uVar1 != 0) {
              do {
                if (*(byte *)(uVar18 + (uVar8 * 4 + 3)) < 0x80) {
                  *(undefined4 *)(local_d0 + (ulonglong)uVar8 * 4) = 0xffffff;
                  uVar9 = 0;
                }
                else {
                  *(undefined4 *)(local_d0 + (ulonglong)uVar8 * 4) = 0;
                  uVar9 = *(undefined4 *)(uVar18 + (ulonglong)uVar8 * 4);
                }
                *(undefined4 *)(local_b0 + (ulonglong)uVar8 * 4) = uVar9;
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar1);
            }
            uVar17 = uVar17 + 1;
            uVar18 = uVar18 + (longlong)(int)local_150;
            local_d0 = local_d0 + local_dc;
            local_b0 = local_b0 + local_bc;
          } while (uVar17 < uVar19);
        }
      }
      else {
        uVar18 = 0;
        local_128 = uStack_148;
        do {
          uVar8 = FUN_18000e020(*(undefined8 *)(*plVar14 + uVar18 * 8));
          uVar5 = local_128;
          uVar4 = local_150;
          uVar17 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar17;
          uVar16 = uVar8 & 0xff & uVar16;
        } while (uVar17 < *(uint *)(param_1 + -0x5a00));
        uVar18 = local_128;
        if (uVar16 != 0) goto LAB_1800ac154;
        if (*(uint *)(param_1 + -0x5a00) != 0) {
          uVar17 = 0;
          do {
            FUN_18000e088(*(undefined8 *)(*plVar14 + (ulonglong)uVar17 * 8),lVar12,
                          uVar15 & 0xffffffff,uVar19,param_2,param_3,uVar5,uVar4 & 0xffffffff);
            uVar17 = uVar17 + 1;
          } while (uVar17 < *(uint *)(param_1 + -0x5a00));
        }
        uVar17 = 0;
        if (uVar19 != 0) {
          do {
            uVar15 = 0;
            if (uVar1 != 0) {
              do {
                *(undefined4 *)(local_d0 + uVar15 * 4) = 0xffffff;
                *(undefined4 *)(local_b0 + uVar15 * 4) = 0;
                uVar8 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar8;
              } while (uVar8 < uVar1);
            }
            uVar17 = uVar17 + 1;
            local_d0 = local_d0 + local_dc;
            local_b0 = local_b0 + local_bc;
          } while (uVar17 < uVar19);
        }
      }
      uVar9 = 0x8876086c;
      FUN_18000cc80(lVar12);
      local_a8 = 0;
      local_98 = local_130;
      lStack_90 = local_138;
      uStack_a4 = param_2;
      local_a0 = param_3;
      lVar12 = (*__imp_USER32_dll_CreateIconIndirect)(&local_a8);
      if (lVar12 != 0) {
        if ((uVar16 != 0) && (uVar15 = FUN_180022b70(), (uVar15 & 1) != 0)) {
          pcVar6 = *(code **)(DAT_18024de50 + 0x78);
          if (*(code **)(DAT_18024de50 + 0x78) == (code *)0x0) {
            pcVar6 = __imp_USER32_dll_SetCursor;
          }
          (*pcVar6)(lVar12);
        }
        if (*(longlong *)(param_1 + -0x59a8) == 0) {
          if (uVar16 == 0) {
            uVar9 = FUN_180022b70();
            uVar15 = 0;
            if (*(int *)(param_1 + -0x5a00) != 0) {
              do {
                lVar10 = *(longlong *)(*plVar14 + uVar15 * 8);
                plVar13 = *(longlong **)(lVar10 + 0x100);
                (**(code **)(*plVar13 + 0x68))(plVar13,uVar9);
                *(char *)(lVar10 + 0x120) = (char)uVar9;
                uVar1 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar1;
              } while (uVar1 < *(uint *)(param_1 + -0x5a00));
            }
          }
        }
        else {
          (*__imp_USER32_dll_DestroyIcon)();
        }
        *(longlong *)(param_1 + -0x59a8) = lVar12;
        uVar9 = 0;
      }
    }
    (*__imp_GDI32_dll_DeleteObject)(local_138);
  }
  (*__imp_GDI32_dll_DeleteObject)(local_130);
LAB_1800ac3c0:
  if (bVar3) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return uVar9;
}

