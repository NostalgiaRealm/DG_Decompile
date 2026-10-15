/*
 * FUN_1801c5ec0 at 1801c5ec0
 * undefined FUN_1801c5ec0(void)
 * Address ranges: 1801c5ec0-1801c631f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1801c5ec0(longlong param_1,longlong param_2,undefined1 *param_3,longlong param_4,
             longlong param_5)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  ulonglong extraout_x1;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint extraout_w10;
  uint extraout_w11;
  ulonglong extraout_x12;
  ulonglong extraout_x12_00;
  ulonglong uVar12;
  longlong lVar13;
  undefined4 local_100;
  uint local_d8;
  uint uStack_d4;
  uint local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  longlong lStack_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  
  local_b8 = param_5;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar5 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar5 = true;
    iVar8 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar8 == 0) {
      FUN_1801085c8();
    }
  }
  lVar11 = 0;
  if (param_2 != 0) {
    lVar11 = param_2 + -0x80;
  }
  lVar13 = 0;
  if (param_4 != 0) {
    lVar13 = param_4 + -0x80;
  }
  local_100 = 0x8876086c;
  if ((((((param_2 != 0) && (param_4 != 0 && param_2 != param_4)) &&
        (*(int *)(param_2 + -0x2c) == 2)) &&
       ((*(int *)(param_4 + -0x2c) == 0 &&
        ((*(uint *)(*(longlong *)(param_2 + -0x78) + 0x100) >> 0xb & 1) == 0)))) &&
      ((*(uint *)(*(longlong *)(param_4 + -0x78) + 0x100) >> 0xb & 1) == 0)) &&
     (((*(int *)(param_2 + -0x28) == 0 || (*(int *)(param_2 + -0x28) == 1)) &&
      ((*(int *)(param_2 + -0x24) == 0 &&
       (((*(int *)(param_4 + -0x28) == 0 || (*(int *)(param_4 + -0x28) == 1)) &&
        (*(int *)(param_4 + -0x24) == 0)))))))) {
    local_100 = 0x8876086c;
    uVar10 = (uint)(param_3 != (undefined1 *)0x0);
    if ((lVar11 != 0) && (lVar13 != 0)) {
      lVar2 = param_1 + -0x6838;
      local_80 = lVar2;
      thunk_FUN_180223c20(auStack_78,0,0,*(undefined4 *)(param_2 + -0x20),
                          *(undefined4 *)(param_2 + -0x1c));
      thunk_FUN_180223c20(auStack_68,0,0,*(undefined4 *)(param_4 + -0x20),
                          *(undefined4 *)(param_4 + -0x1c));
      thunk_FUN_180223bf8(&local_c8);
      if (param_3 == (undefined1 *)0x0) {
        uVar10 = 1;
        param_3 = auStack_78;
      }
      if (((*(longlong *)(param_2 + -0x58) == lVar2) && (*(longlong *)(param_4 + -0x58) == lVar2))
         && ((iVar8 = *(int *)(param_2 + -0x38), iVar8 == *(int *)(param_4 + -0x38) &&
             (((10 < iVar8 - 0x46U || ((0x6abU >> (ulonglong)(iVar8 - 0x46U & 0x1f) & 1) == 0)) &&
              ((iVar8 != 0x36314644 && iVar8 != 0x34324644) && iVar8 != 0x5a544e49)))))) {
        bVar6 = FUN_180107328(*(undefined4 *)(param_2 + -0x38));
        uVar9 = (uint)bVar6;
        FUN_180107140(extraout_x12 & 0xffffffff);
        if (uVar10 != 0) {
          iVar8 = FUN_1801071f0(extraout_x12_00 & 0xffffffff,0);
          local_100 = 0x8876086c;
          uVar3 = iVar8 - 1;
          bVar4 = true;
          uVar12 = extraout_x1 & 0xffffffff;
          local_a0 = param_1;
          lStack_98 = param_4;
          local_90 = lVar11;
          lStack_88 = lVar13;
          do {
            if (!bVar4) {
              local_100 = 0x8876086c;
              goto LAB_1801c62e4;
            }
            thunk_FUN_180223c34(&local_d8,param_3 + uVar12 * 0x10,auStack_78);
            iVar8 = thunk_FUN_180223c48(&local_d8,param_3 + uVar12 * 0x10);
            lVar11 = local_b8;
            if (iVar8 == 0) {
              bVar4 = false;
            }
            if ((uVar9 != 0) &&
               (((((local_d8 & extraout_w10) != 0 || ((uStack_d4 & uVar3) != 0)) ||
                 (((local_d0 & extraout_w10) != 0 && (extraout_w11 <= *(uint *)(param_2 + -0x20)))))
                || (((local_cc & uVar3) != 0 && (extraout_w11 <= *(uint *)(param_2 + -0x1c))))))) {
              bVar4 = false;
            }
            if (local_b8 != 0) {
              lVar2 = uVar12 * 8;
              lVar13 = local_b8 + 4;
              thunk_FUN_180223c5c(&local_d8,*(int *)(local_b8 + lVar2) - local_d8,
                                  *(int *)(lVar13 + lVar2) - uStack_d4);
              if (uVar9 != 0) {
                if (((*(uint *)(lVar11 + lVar2) & extraout_w10) != 0) ||
                   (bVar6 = 1, (*(uint *)(lVar13 + lVar2) & uVar3) != 0)) {
                  bVar6 = 0;
                }
                bVar4 = (bool)(bVar6 & bVar4);
              }
            }
            thunk_FUN_180223c70(&local_c8,&local_c8,&local_d8);
            thunk_FUN_180223c34(auStack_58,&local_d8,auStack_68);
            iVar8 = thunk_FUN_180223c48(&local_d8,auStack_58);
            uVar1 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar1;
            if (iVar8 == 0) {
              bVar4 = false;
            }
          } while (uVar1 < uVar10);
          param_4 = lStack_98;
          param_1 = local_a0;
          lVar11 = local_90;
          lVar13 = lStack_88;
          if (!bVar4) goto LAB_1801c62e4;
        }
        if ((*(int *)(param_2 + -0x2c) == 0) && (*(int *)(param_4 + -0x2c) != 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((*(char *)(param_1 + -0x1f) == '\0') || (local_100 = 0x88760868, !bVar4)) {
          cVar7 = FUN_180109568(local_80,lVar11,lVar13);
          local_100 = 0x80004005;
          if ((cVar7 != '\0') && (local_100 = 0, *(longlong *)(param_4 + -0x50) != 0)) {
            local_b0 = local_c8;
            uStack_ac = uStack_c4;
            local_a8 = local_c0;
            uStack_a4 = uStack_bc;
            lVar11 = *(longlong *)(*(longlong *)(param_4 + -0x50) + 0x48);
            thunk_FUN_180223c70(lVar11 + (ulonglong)*(uint *)(param_4 + -0x14) * 0x10,
                                lVar11 + (ulonglong)*(uint *)(param_4 + -0x14) * 0x10,&local_b0);
          }
        }
      }
    }
  }
LAB_1801c62e4:
  if (bVar5) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return local_100;
}

