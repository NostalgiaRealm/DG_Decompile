/*
 * FUN_18012ca90 at 18012ca90
 * undefined FUN_18012ca90(void)
 * Address ranges: 18012ca90-18012ce87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18012ca90(undefined8 param_1,ulonglong param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 local_b0;
  ulonglong local_a8;
  int local_a0;
  undefined4 local_9c;
  uint local_98;
  uint uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 *local_70;
  code *local_68 [4];
  uint local_48;
  uint uStack_44;
  
  param_2 = param_2 & 0xffffffff;
  lVar17 = param_2 * 600;
  local_70 = &DAT_18024e840 + param_2 * 0x4b;
  local_68[0] = (code *)__hybrid_os_arm64x_dispatch_icall;
  local_9c = param_3;
  uVar7 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar7,&local_90);
  if (((uint)local_90 == 0) || (local_90._4_4_ == 0)) {
    return 0;
  }
  uVar11 = (uint)(&DAT_18024e9b8)[param_2 * 0x4b];
  uVar12 = *(uint *)((longlong)&DAT_18024e9b8 + lVar17 + 4);
  uVar8 = (&DAT_18024e9b8)[param_2 * 0x4b];
  uVar1 = *(uint *)(DAT_18024d928 + 0x864);
  uVar2 = *(uint *)(DAT_18024d928 + 0x868);
  local_a0 = (int)uStack_88;
  lVar13 = DAT_18024d928;
  iVar10 = uStack_88._4_4_;
  local_98 = uVar11;
  uStack_94 = uVar12;
  if ((uVar1 < 0xfffffff8) || ((uVar1 != uVar2 || uVar1 == 0xfffffff9) && 0xff < uVar2)) {
    uVar15 = (uint)local_90;
    uVar14 = local_90._4_4_;
    if ((uVar1 != 0) && (uVar2 != 0)) {
      uVar15 = uVar1;
      uVar14 = uVar2;
    }
    goto LAB_18012cd30;
  }
  local_a8 = local_90;
  lVar16 = *(longlong *)((&DAT_18024e840)[param_2 * 0x4b] + 8);
  uVar1 = *(uint *)(lVar16 + 100);
  uVar2 = *(uint *)(lVar16 + 0x68);
  if (uVar1 < 0xfffffff8) {
    bVar6 = false;
  }
  else {
    bVar6 = uVar1 == uVar2 && uVar1 != 0xfffffff9 || uVar2 < 0x100;
  }
  local_b0 = 0;
  if (!bVar6) {
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    uVar15 = (uint)local_b0;
    uVar14 = local_b0._4_4_;
    goto LAB_18012cd30;
  }
  local_b0 = local_90;
  uVar3 = uVar8;
  if (uVar1 == 0xfffffff8) {
LAB_18012cc0c:
    local_b0 = uVar3;
    bVar6 = false;
    local_a8 = uVar8;
  }
  else if (uVar1 + 6 < 2) {
    bVar6 = uVar1 == 0xfffffffa;
    local_a8 = uVar8;
    if (0x9ff < uVar11) {
      bVar5 = 0x59f < uVar12;
      local_a8 = 0x5a000000a00;
LAB_18012cbdc:
      if (!bVar5) {
        local_a8 = uVar8;
      }
    }
  }
  else if (uVar1 + 4 < 2) {
    bVar6 = uVar1 == 0xfffffffc;
    local_a8 = uVar8;
    if (0x77f < uVar11) {
      bVar5 = 0x437 < uVar12;
      local_a8 = 0x43800000780;
      goto LAB_18012cbdc;
    }
  }
  else {
    uVar3 = local_a8;
    if (1 < uVar1 + 2) goto LAB_18012cc0c;
    bVar6 = uVar1 == 0xfffffffe;
    local_b0 = local_a8;
    local_a8 = uVar8;
  }
  uVar15 = *(uint *)(lVar16 + 0x1c);
  if ((uVar15 < 9) && ((0x188U >> (ulonglong)(uVar15 & 0x1f) & 1) != 0)) {
LAB_18012ccc0:
    uVar8 = FUN_18021fbc0(&local_b0,&local_a8);
LAB_18012cccc:
    uVar14 = (uint)(uVar8 >> 0x20);
  }
  else {
    if (uVar15 - 4 < 3) {
      if (((uint)local_b0 < 0x501) && (local_b0._4_4_ < 0x401)) {
        local_b0 = CONCAT44(local_b0._4_4_,(local_b0._4_4_ << 2) / 3);
      }
      goto LAB_18012ccc0;
    }
    if (uVar15 < 2) goto LAB_18012ccc0;
    if (uVar15 == 2) {
      uVar8 = local_a8;
      if (bVar6) {
        if ((uint)local_b0 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18012cc54);
          (*pcVar4)();
        }
        uVar15 = 0;
        if ((uint)local_b0 != 0) {
          uVar15 = (uint)local_a8 / (uint)local_b0;
        }
        if (local_b0._4_4_ == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18012cc68);
          (*pcVar4)();
        }
        uVar14 = 0;
        if (local_b0._4_4_ != 0) {
          uVar14 = (uint)(local_a8 >> 0x20) / local_b0._4_4_;
        }
        if (uVar15 == 0) {
          uVar15 = 1;
        }
        if (uVar14 == 0) {
          uVar14 = 1;
        }
        if (uVar14 <= uVar15) {
          uVar15 = uVar14;
        }
        uVar8 = (ulonglong)(uVar15 * (uint)local_b0);
        uVar14 = uVar15 * local_b0._4_4_;
        goto LAB_18012ccd0;
      }
      goto LAB_18012cccc;
    }
    uVar8 = local_b0 & 0xffffffff;
    uVar14 = local_b0._4_4_;
  }
LAB_18012ccd0:
  uVar15 = (uint)uVar8;
  if ((uVar1 + 8 < 8) && ((0xfdU >> (ulonglong)(uVar1 + 8 & 0x1f) & 1) != 0)) {
    if (uVar2 - 2 < 0xfe) {
      uVar15 = uVar2 * uVar15;
      uVar14 = uVar2 * uVar14;
    }
  }
  else if (uVar1 == 0xfffffff9) {
    uVar15 = uVar2 * (uint)local_90;
    uVar14 = uVar2 * local_90._4_4_;
  }
LAB_18012cd30:
  local_48 = *(uint *)(*(longlong *)((&DAT_18024e840)[param_2 * 0x4b] + 8) + 0xa2);
  uVar1 = *(uint *)(*(longlong *)((&DAT_18024e840)[param_2 * 0x4b] + 8) + 0xa6);
  if ((local_48 == 0) || (uStack_44 = uVar1, uVar1 == 0)) {
    if (uVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18012cd50);
      (*pcVar4)();
    }
    uVar2 = 0;
    if (uVar15 != 0) {
      uVar2 = uVar11 / uVar15;
    }
    if (uVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18012cd5c);
      (*pcVar4)();
    }
    uVar11 = 0;
    if (uVar14 != 0) {
      uVar11 = uVar12 / uVar14;
    }
    if (uVar2 == 0) {
      uVar2 = 1;
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    if (local_48 == uVar1) {
      local_48 = uVar2;
      uStack_44 = uVar2;
      if (uVar11 <= uVar2) {
        local_48 = uVar11;
        uStack_44 = uVar11;
      }
    }
    else {
      uStack_44 = uVar11;
      if (local_48 == 0) {
        local_48 = uVar2;
        uStack_44 = uVar1;
      }
    }
  }
  if (((*(char *)(lVar13 + 0x822) != '\0') && (*(int *)(lVar13 + 0x870) != 0)) &&
     (*(int *)(lVar13 + 0x874) != 0)) {
    uStack_88._0_4_ = *(int *)(lVar13 + 0x870);
    iVar10 = *(int *)(lVar13 + 0x874);
  }
  *(ulonglong *)(lVar17 + 0x18024e9f4) = CONCAT44(iVar10,(int)uStack_88);
  *(ulonglong *)(&DAT_18024e9ec + lVar17) = CONCAT44(uVar14,uVar15);
  *(ulonglong *)(&DAT_18024e9fc + lVar17) = CONCAT44(uStack_44,local_48);
  uStack_88 = CONCAT44(uStack_88._4_4_,local_a0);
  local_70[0x33] = uStack_88;
  local_70[0x32] = local_90;
  (&DAT_18024e9e0)[param_2 * 0x4b] = local_80;
  (&DAT_18024e9e8)[param_2 * 0x96] = 0x2a;
  if (*(int *)(lVar13 + 0x89a) != 0) {
    *(int *)((longlong)&DAT_18024e9e0 + lVar17 + 4) = *(int *)(lVar13 + 0x89a);
  }
  uVar7 = (*local_68[0])(0x180224000);
  puVar9 = (undefined8 *)(*extraout_x11_00)(uVar7,local_68,local_9c);
  uVar18 = puVar9[1];
  uVar7 = *puVar9;
  (&DAT_18024ea4e)[lVar17] = 0;
  *(undefined8 *)(lVar17 + 0x18024ea1c) = uVar18;
  *(undefined8 *)(&DAT_18024ea14 + lVar17) = uVar7;
  return 1;
}

