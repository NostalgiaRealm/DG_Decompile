/*
 * FUN_1801abf08 at 1801abf08
 * undefined FUN_1801abf08(void)
 * Address ranges: 1801abf08-1801ac477;1801ac494-1801ac4c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1801abf08(longlong param_1,int param_2,uint param_3,longlong param_4,int param_5,
                  int *param_6)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong extraout_x8;
  ulonglong extraout_x8_00;
  longlong lVar13;
  uint extraout_w11;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  uint extraout_w12;
  ulonglong extraout_x15;
  uint uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  uint local_90;
  uint local_8c;
  undefined8 local_88;
  int local_80;
  longlong local_78;
  longlong local_70;
  int local_68;
  int iStack_64;
  undefined4 local_60;
  int iStack_5c;
  int local_58;
  undefined4 uStack_54;
  longlong local_50;
  int *local_48;
  
  local_90 = param_3;
  local_8c = param_3;
  local_80 = param_5;
  local_50 = param_4;
  local_48 = param_6;
  FUN_180221ec0(*(longlong *)(param_1 + -0xa8) + 0x12c0);
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  local_78 = (*extraout_x11)(param_1 + -0x100,1);
  if (local_78 == 0) {
    return 0;
  }
  uVar15 = *(undefined8 *)(local_78 + 0x14);
  uVar8 = 1;
  (*(code *)puVar3)(0x180224000);
  iVar6 = (*extraout_x11_00)(uVar15,&local_68,0);
  if (iVar6 < 0) {
    return 1;
  }
  if ((local_68 == 4) && (2 < *(int *)(param_1 + -0xbc) - 3U)) {
    iVar6 = *(int *)(param_1 + -0xc4);
    uVar11 = FUN_180221e50(*(longlong *)(param_1 + -0xa8) + 0x12c0);
    if ((uVar11 & 1) != 0) {
      uVar9 = param_2 + iVar6 * local_90;
      lVar16 = *(longlong *)(*(longlong *)(param_1 + -0xb0) + 0x1b500);
      local_90 = uVar9;
      local_88 = uVar15;
      local_70 = lVar16;
      thunk_FUN_1802236f8(lVar16 + 0x28);
      bVar2 = true;
      lVar16 = FUN_18020ec30(lVar16,&local_88);
      if (lVar16 != 0) {
        plVar12 = (longlong *)FUN_18020ee08(lVar16 + 8,&local_90);
        if (plVar12 == (longlong *)0x0) {
          local_90 = 0xffffffff;
          plVar12 = (longlong *)FUN_18020ee08(lVar16 + 8,&local_90);
          if (plVar12 == (longlong *)0x0) goto LAB_1801ac09c;
        }
        if ((*(int *)((longlong)plVar12 + 0x14) == 0) || (*(int *)(*plVar12 + 0x30) == 3)) {
          (*(code *)puVar3)(0x180224000);
          uVar11 = (*extraout_x11_01)();
          bVar2 = true;
          if ((ulonglong)plVar12[3] <= uVar11) goto LAB_1801ac09c;
        }
        bVar2 = false;
      }
LAB_1801ac09c:
      thunk_FUN_18022370c(local_70 + 0x28);
      if (bVar2) {
        if (uVar9 == 0x80004005) {
          return 1;
        }
        goto LAB_1801ac0c0;
      }
    }
  }
  uVar9 = 0xffffffff;
LAB_1801ac0c0:
  uVar7 = *(uint *)(param_1 + -0xd4);
  uVar14 = *(uint *)(&DAT_18022e050 + (ulonglong)uVar7 * 4);
  if (uVar14 == 0x18) {
    uVar14 = 0x20;
  }
  local_90 = uVar14 >> 3;
  if (uVar14 < 8) {
    local_90 = *(uint *)(&DAT_18022db60 + (ulonglong)uVar7 * 4);
  }
  local_88._0_4_ = (uint)(byte)(&DAT_18022dc08)[uVar7];
  uVar7 = FUN_1801bb148(param_1 + -0x100,*(undefined4 *)(param_1 + -0xdc),param_2);
  uVar14 = uVar7;
  if (extraout_w12 < 8) {
    if (extraout_w11 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1801ac128);
      (*pcVar4)();
    }
    uVar14 = 0;
    if (extraout_w11 != 0) {
      uVar14 = uVar7 / extraout_w11;
    }
  }
  if ((int)uVar9 < 0) {
    local_78 = 0;
    local_88._0_4_ = 0;
    iVar10 = FUN_1801aad28(param_1 + -0x100,param_2,local_8c);
    iVar6 = (uint)local_88;
    if (iVar10 == 0) {
      uVar8 = local_48[1];
      if (uVar8 <= (uint)local_48[3]) {
        local_88 = CONCAT44(local_88._4_4_,param_2);
        if (uVar8 == local_48[3]) {
          uVar14 = local_48[2];
        }
        uVar9 = *local_48 * local_90;
        local_70 = param_1;
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48((ulonglong)(uVar8 * local_80) + (ulonglong)uVar9 + local_50,
                            (ulonglong)(uVar8 * iVar6) + (ulonglong)uVar9 + local_78,
                            (uVar14 - *local_48) * local_90);
      }
      FUN_1801ab000(param_1 + -0x100,param_2,local_8c);
      uVar8 = 1;
    }
  }
  else {
    local_70 = CONCAT44(local_70._4_4_,(uint)(byte)(&DAT_18022dc38)[extraout_x15 & 0xffffffff]);
    (*(code *)puVar3)(0x180224000);
    (*extraout_x11_02)(param_1 + -0x100,param_2,local_8c);
    lVar16 = local_78;
    uVar8 = 1;
    uVar11 = FUN_1801a7430(local_78,uVar9);
    if ((uVar11 & 1) != 0) {
      uVar15 = *(undefined8 *)(lVar16 + 0x14);
      lVar17 = *(longlong *)(param_1 + 0x30);
      *(longlong *)(*(longlong *)(*(longlong *)(lVar17 + 0x1cf18) + 0x1508) + 0xb88) = lVar17;
      lVar16 = *(longlong *)(*(longlong *)(lVar17 + 0x1cf18) + 0x1508);
      *(int *)(lVar16 + 0x684) = *(int *)(lVar16 + 0x684) + 1;
      FUN_180207cd0(*(undefined8 *)(*(longlong *)(lVar17 + 0x1cf18) + 0x1508),uVar15,uVar9,0,0);
      lVar16 = FUN_180208508(*(undefined8 *)(*(longlong *)(lVar17 + 0x1cf18) + 0x1508));
      lVar13 = *(longlong *)(*(longlong *)(lVar17 + 0x1cf18) + 0x1508);
      iVar6 = *(int *)(lVar13 + 0x684) + -1;
      *(int *)(lVar13 + 0x684) = iVar6;
      if (((iVar6 != 0) || (*(int *)(lVar13 + 0x678) < *(int *)(lVar13 + 0x680))) ||
         (cVar5 = FUN_180207560(lVar13 + 8,0), cVar5 == '\0' || (cVar5 == '\0' || lVar16 == 0))) {
        FUN_18020e768(*(undefined8 *)(*(longlong *)(lVar17 + 0x1cf10) + 0x1b500),uVar15,uVar9);
      }
      else {
        FUN_1802085e0(*(undefined8 *)(*(longlong *)(lVar17 + 0x1cf18) + 0x1508),lVar16);
      }
      local_8c = local_48[2];
      uVar7 = local_48[3];
      iVar6 = *local_48;
      uVar9 = local_48[1];
      if (iVar6 == 0) {
        uVar8 = 1;
      }
      else {
        iStack_64 = (int)local_70 * uVar9;
        local_68 = (uint)local_88 * iVar6;
        uVar8 = uVar14;
        if (uVar7 == uVar9) {
          uVar8 = local_8c;
        }
        iStack_5c = uVar8 * (uint)local_88;
        local_60 = 0;
        local_58 = (int)local_70 + uVar9 * (int)local_70;
        uStack_54 = 1;
        uVar15 = (*(code *)puVar3)((ulonglong)(uVar9 * local_80) + (ulonglong)(local_90 * iVar6));
        uVar8 = (*extraout_x11_03)(uVar15,extraout_x8 + local_50);
        uVar8 = ~uVar8 >> 0x1f;
        uVar9 = uVar9 + 1;
      }
      if (uVar9 < uVar7) {
        iStack_64 = (int)local_70 * uVar9;
        local_68 = 0;
        iStack_5c = uVar14 * (uint)local_88;
        local_60 = 0;
        uVar1 = uVar7;
        if (local_8c == uVar14) {
          uVar1 = uVar7 + 1;
        }
        local_58 = uVar1 * (int)local_70;
        uStack_54 = 1;
        uVar15 = (*(code *)puVar3)(uVar9 * local_80);
        uVar9 = (*extraout_x11_04)(uVar15,local_50 + (extraout_x8_00 & 0xffffffff));
        uVar8 = uVar8 & ~uVar9 >> 0x1f;
        uVar9 = uVar7;
        if (local_8c == uVar14) {
          uVar9 = uVar7 + 1;
        }
      }
      if (uVar7 == uVar9) {
        iStack_64 = (int)local_70 * uVar9;
        local_68 = 0;
        iStack_5c = (uint)local_88 * local_8c;
        uVar11 = (ulonglong)(uVar9 * local_80);
        local_60 = 0;
        local_58 = (int)local_70 + uVar7 * (int)local_70;
        uStack_54 = 1;
        uVar15 = (*(code *)puVar3)(0x180224000);
        uVar9 = (*extraout_x11_05)(uVar15,local_50 + (uVar11 & 0xffffffff));
        uVar8 = uVar8 & ~uVar9 >> 0x1f;
      }
    }
  }
  return uVar8;
}

