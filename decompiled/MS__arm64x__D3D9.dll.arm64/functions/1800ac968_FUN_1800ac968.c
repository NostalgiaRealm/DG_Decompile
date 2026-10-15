/*
 * FUN_1800ac968 at 1800ac968
 * undefined FUN_1800ac968(void)
 * Address ranges: 1800ac968-1800acdfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1800ac968(longlong param_1,longlong param_2,undefined1 *param_3,longlong param_4,
             longlong param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  undefined1 *puVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  ulonglong extraout_x1;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong extraout_x11;
  ulonglong extraout_x11_00;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 local_f0;
  uint local_e0;
  uint uStack_dc;
  uint local_d8;
  uint local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined1 *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar5 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar5 = true;
    iVar10 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar10 == 0) {
      FUN_180003398();
    }
  }
  lVar13 = 0;
  if (param_2 != 0) {
    lVar13 = param_2 + -0x80;
  }
  lVar16 = 0;
  if (param_4 != 0) {
    lVar16 = param_4 + -0x80;
  }
  local_f0 = 0x8876086c;
  if ((((((param_2 != 0) && (param_4 != 0 && param_2 != param_4)) &&
        (*(int *)(param_2 + -0x2c) == 2)) &&
       ((*(int *)(param_4 + -0x2c) == 0 &&
        ((*(uint *)(*(longlong *)(param_2 + -0x78) + 0x100) >> 0xb & 1) == 0)))) &&
      ((*(uint *)(*(longlong *)(param_4 + -0x78) + 0x100) >> 0xb & 1) == 0)) &&
     (((*(int *)(param_2 + -0x28) == 0 || (*(int *)(param_2 + -0x28) == 1)) &&
      ((*(int *)(param_2 + -0x24) == 0 &&
       (((*(int *)(param_4 + -0x28) == 0 || (*(int *)(param_4 + -0x28) == 1)) &&
        (*(int *)(param_4 + -0x24) == 0)))))))) {
    local_f0 = 0x8876086c;
    uVar12 = (uint)(param_3 != (undefined1 *)0x0);
    if ((lVar13 != 0) && (lVar16 != 0)) {
      lVar15 = param_1 + -0x6838;
      (*__imp_USER32_dll_SetRect)
                (auStack_80,0,0,*(undefined4 *)(param_2 + -0x20),*(undefined4 *)(param_2 + -0x1c));
      (*__imp_USER32_dll_SetRect)
                (auStack_70,0,0,*(undefined4 *)(param_4 + -0x20),*(undefined4 *)(param_4 + -0x1c));
      (*__imp_USER32_dll_SetRectEmpty)(&local_d0);
      if (param_3 == (undefined1 *)0x0) {
        uVar12 = 1;
        param_3 = auStack_80;
      }
      if (((*(longlong *)(param_2 + -0x58) == lVar15) && (*(longlong *)(param_4 + -0x58) == lVar15))
         && ((iVar10 = *(int *)(param_2 + -0x38), iVar10 == *(int *)(param_4 + -0x38) &&
             (((10 < iVar10 - 0x46U || ((0x6abU >> (ulonglong)(iVar10 - 0x46U & 0x1f) & 1) == 0)) &&
              ((iVar10 != 0x36314644 && iVar10 != 0x34324644) && iVar10 != 0x5a544e49)))))) {
        bVar7 = func_0x000180107328(*(undefined4 *)(param_2 + -0x38));
        uVar11 = (uint)bVar7;
        uVar9 = func_0x000180107140(extraout_x11 & 0xffffffff);
        if (uVar12 != 0) {
          iVar10 = func_0x0001801071f0(extraout_x11_00 & 0xffffffff,0);
          uVar2 = iVar10 - 1;
          local_f0 = 0x8876086c;
          bVar4 = true;
          uVar14 = extraout_x1 & 0xffffffff;
          uVar3 = uVar9 - 1;
          local_c0 = param_3;
          local_a8 = param_1;
          lStack_a0 = param_4;
          local_98 = lVar13;
          lStack_90 = lVar16;
          local_88 = lVar15;
          do {
            puVar6 = local_c0;
            if (!bVar4) {
              local_f0 = 0x8876086c;
              goto LAB_1800acdbc;
            }
            (*__imp_USER32_dll_IntersectRect)(&local_e0,local_c0 + uVar14 * 0x10,auStack_80);
            iVar10 = (*__imp_USER32_dll_EqualRect)(&local_e0,puVar6 + uVar14 * 0x10);
            if (iVar10 == 0) {
              bVar4 = false;
            }
            if ((uVar11 != 0) &&
               (((((local_e0 & uVar3) != 0 || ((uStack_dc & uVar2) != 0)) ||
                 (((local_d8 & uVar3) != 0 && (uVar9 <= *(uint *)(param_2 + -0x20))))) ||
                (((local_d4 & uVar2) != 0 && (uVar9 <= *(uint *)(param_2 + -0x1c))))))) {
              bVar4 = false;
            }
            if (param_5 != 0) {
              lVar13 = uVar14 * 8;
              (*__imp_USER32_dll_OffsetRect)
                        (&local_e0,*(int *)(param_5 + lVar13) - local_e0,
                         *(int *)(param_5 + 4 + lVar13) - uStack_dc);
              if (uVar11 != 0) {
                if (((*(uint *)(param_5 + lVar13) & uVar3) != 0) ||
                   (bVar7 = 1, (*(uint *)(param_5 + 4 + lVar13) & uVar2) != 0)) {
                  bVar7 = 0;
                }
                bVar4 = (bool)(bVar7 & bVar4);
              }
            }
            (*__imp_USER32_dll_UnionRect)(&local_d0,&local_d0,&local_e0);
            (*__imp_USER32_dll_IntersectRect)(auStack_60,&local_e0,auStack_70);
            iVar10 = (*__imp_USER32_dll_EqualRect)(&local_e0,auStack_60);
            uVar1 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar1;
            if (iVar10 == 0) {
              bVar4 = false;
            }
          } while (uVar1 < uVar12);
          param_4 = lStack_a0;
          param_1 = local_a8;
          lVar15 = local_88;
          lVar13 = local_98;
          lVar16 = lStack_90;
          if (!bVar4) goto LAB_1800acdbc;
        }
        if ((*(int *)(param_2 + -0x2c) == 0) && (*(int *)(param_4 + -0x2c) != 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((*(char *)(param_1 + -0x1f) == '\0') || (local_f0 = 0x88760868, !bVar4)) {
          cVar8 = FUN_180004280(lVar15,lVar13,lVar16);
          local_f0 = 0x80004005;
          if ((cVar8 != '\0') && (local_f0 = 0, *(longlong *)(param_4 + -0x50) != 0)) {
            local_b8 = local_d0;
            uStack_b4 = uStack_cc;
            local_b0 = local_c8;
            uStack_ac = uStack_c4;
            lVar13 = *(longlong *)(*(longlong *)(param_4 + -0x50) + 0x48);
            (*__imp_USER32_dll_UnionRect)
                      (lVar13 + (ulonglong)*(uint *)(param_4 + -0x14) * 0x10,
                       lVar13 + (ulonglong)*(uint *)(param_4 + -0x14) * 0x10,&local_b8);
          }
        }
      }
    }
  }
LAB_1800acdbc:
  if (bVar5) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return local_f0;
}

