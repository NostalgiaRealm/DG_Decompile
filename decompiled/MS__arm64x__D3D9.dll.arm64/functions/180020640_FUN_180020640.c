/*
 * FUN_180020640 at 180020640
 * undefined FUN_180020640(void)
 * Address ranges: 180020640-180020a0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180020640(undefined8 param_1,ulonglong param_2,undefined4 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint extraout_w14;
  uint uVar16;
  uint extraout_w15;
  uint uVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 local_a0;
  ulonglong local_98;
  uint local_90;
  uint uStack_8c;
  uint local_80;
  uint uStack_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  param_2 = param_2 & 0xffffffff;
  lVar18 = param_2 * 600;
  (**(code **)(*(longlong *)(&DAT_180253850)[param_2 * 0x4b] + 0x90))
            ((longlong *)(&DAT_180253850)[param_2 * 0x4b],&local_70);
  if (((uint)local_70 == 0) || (local_70._4_4_ == 0)) {
    return 0;
  }
  uVar10 = (uint)(&DAT_1802539c8)[param_2 * 0x4b];
  uVar11 = *(uint *)((longlong)&DAT_1802539c8 + lVar18 + 4);
  uVar5 = (&DAT_1802539c8)[param_2 * 0x4b];
  uVar16 = *(uint *)(DAT_18024de60 + 0x864);
  uVar17 = *(uint *)(DAT_18024de60 + 0x868);
  lVar12 = DAT_18024de60;
  iVar8 = (int)uStack_68;
  iVar9 = uStack_68._4_4_;
  local_90 = uVar10;
  uStack_8c = uVar11;
  if ((uVar16 < 0xfffffff8) || ((uVar16 != uVar17 || uVar16 == 0xfffffff9) && 0xff < uVar17)) {
    uVar15 = (uint)local_70;
    uVar14 = local_70._4_4_;
    if ((uVar16 != 0) && (uVar17 != 0)) {
      uVar15 = uVar16;
      uVar14 = uVar17;
    }
    goto LAB_1800208c8;
  }
  local_98 = local_70;
  lVar13 = *(longlong *)((&DAT_180253850)[param_2 * 0x4b] + 8);
  uVar16 = *(uint *)(lVar13 + 100);
  uVar17 = *(uint *)(lVar13 + 0x68);
  if (uVar16 < 0xfffffff8) {
    bVar4 = false;
  }
  else {
    bVar4 = uVar16 == uVar17 && uVar16 != 0xfffffff9 || uVar17 < 0x100;
  }
  local_a0 = 0;
  if (!bVar4) {
    local_a0._0_4_ = 0;
    local_a0._4_4_ = 0;
    uVar15 = (uint)local_a0;
    uVar14 = local_a0._4_4_;
    goto LAB_1800208c8;
  }
  local_a0 = local_70;
  uVar1 = uVar5;
  if (uVar16 == 0xfffffff8) {
LAB_1800207a4:
    local_a0 = uVar1;
    bVar4 = false;
    local_98 = uVar5;
  }
  else if (uVar16 + 6 < 2) {
    bVar4 = uVar16 == 0xfffffffa;
    local_98 = uVar5;
    if (0x9ff < uVar10) {
      bVar3 = 0x59f < uVar11;
      local_98 = 0x5a000000a00;
LAB_180020774:
      if (!bVar3) {
        local_98 = uVar5;
      }
    }
  }
  else if (uVar16 + 4 < 2) {
    bVar4 = uVar16 == 0xfffffffc;
    local_98 = uVar5;
    if (0x77f < uVar10) {
      bVar3 = 0x437 < uVar11;
      local_98 = 0x43800000780;
      goto LAB_180020774;
    }
  }
  else {
    uVar1 = local_98;
    if (1 < uVar16 + 2) goto LAB_1800207a4;
    bVar4 = uVar16 == 0xfffffffe;
    local_a0 = local_98;
    local_98 = uVar5;
  }
  uVar15 = *(uint *)(lVar13 + 0x1c);
  if ((uVar15 < 9) && ((0x188U >> (ulonglong)(uVar15 & 0x1f) & 1) != 0)) {
LAB_180020858:
    uVar5 = FUN_1801002d0(&local_a0,&local_98);
    uVar16 = extraout_w14;
    uVar17 = extraout_w15;
LAB_180020864:
    uVar14 = (uint)(uVar5 >> 0x20);
  }
  else {
    if (uVar15 - 4 < 3) {
      if (((uint)local_a0 < 0x501) && (local_a0._4_4_ < 0x401)) {
        local_a0 = CONCAT44(local_a0._4_4_,(local_a0._4_4_ << 2) / 3);
      }
      goto LAB_180020858;
    }
    if (uVar15 < 2) goto LAB_180020858;
    if (uVar15 == 2) {
      uVar5 = local_98;
      if (bVar4) {
        if ((uint)local_a0 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x1800207ec);
          (*pcVar2)();
        }
        uVar15 = 0;
        if ((uint)local_a0 != 0) {
          uVar15 = (uint)local_98 / (uint)local_a0;
        }
        if (local_a0._4_4_ == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x180020800);
          (*pcVar2)();
        }
        uVar14 = 0;
        if (local_a0._4_4_ != 0) {
          uVar14 = (uint)(local_98 >> 0x20) / local_a0._4_4_;
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
        uVar5 = (ulonglong)(uVar15 * (uint)local_a0);
        uVar14 = uVar15 * local_a0._4_4_;
        goto LAB_180020868;
      }
      goto LAB_180020864;
    }
    uVar5 = local_a0 & 0xffffffff;
    uVar14 = local_a0._4_4_;
  }
LAB_180020868:
  uVar15 = (uint)uVar5;
  if ((uVar16 + 8 < 8) && ((0xfdU >> (ulonglong)(uVar16 + 8 & 0x1f) & 1) != 0)) {
    if (uVar17 - 2 < 0xfe) {
      uVar15 = uVar17 * uVar15;
      uVar14 = uVar17 * uVar14;
    }
  }
  else if (uVar16 == 0xfffffff9) {
    uVar15 = uVar17 * (uint)local_70;
    uVar14 = uVar17 * local_70._4_4_;
  }
LAB_1800208c8:
  plVar6 = (longlong *)(&DAT_180253850)[param_2 * 0x4b];
  local_80 = *(uint *)(plVar6[1] + 0xa2);
  uVar16 = *(uint *)(plVar6[1] + 0xa6);
  if ((local_80 == 0) || (uStack_7c = uVar16, uVar16 == 0)) {
    if (uVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x1800208e8);
      (*pcVar2)();
    }
    uVar17 = 0;
    if (uVar15 != 0) {
      uVar17 = uVar10 / uVar15;
    }
    if (uVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x1800208f4);
      (*pcVar2)();
    }
    uVar10 = 0;
    if (uVar14 != 0) {
      uVar10 = uVar11 / uVar14;
    }
    if (uVar17 == 0) {
      uVar17 = 1;
    }
    if (uVar10 == 0) {
      uVar10 = 1;
    }
    if (local_80 == uVar16) {
      local_80 = uVar17;
      uStack_7c = uVar17;
      if (uVar10 <= uVar17) {
        local_80 = uVar10;
        uStack_7c = uVar10;
      }
    }
    else {
      uStack_7c = uVar10;
      if (local_80 == 0) {
        local_80 = uVar17;
        uStack_7c = uVar16;
      }
    }
  }
  if (((*(char *)(lVar12 + 0x822) != '\0') && (*(int *)(lVar12 + 0x870) != 0)) &&
     (*(int *)(lVar12 + 0x874) != 0)) {
    iVar8 = *(int *)(lVar12 + 0x870);
    iVar9 = *(int *)(lVar12 + 0x874);
  }
  *(ulonglong *)(lVar18 + 0x180253a04) = CONCAT44(iVar9,iVar8);
  *(ulonglong *)(&DAT_1802539fc + lVar18) = CONCAT44(uVar14,uVar15);
  *(ulonglong *)(&DAT_180253a0c + lVar18) = CONCAT44(uStack_7c,local_80);
  (&DAT_1802539e8)[param_2 * 0x4b] = uStack_68;
  (&DAT_1802539e0)[param_2 * 0x4b] = local_70;
  (&DAT_1802539f0)[param_2 * 0x4b] = local_60;
  (&DAT_1802539f8)[param_2 * 0x96] = 0x2a;
  if (*(int *)(lVar12 + 0x89a) != 0) {
    *(int *)((longlong)&DAT_1802539f0 + lVar18 + 4) = *(int *)(lVar12 + 0x89a);
  }
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x88))(plVar6,&local_90,param_3);
  uVar20 = puVar7[1];
  uVar19 = *puVar7;
  (&DAT_180253a5e)[lVar18] = 0;
  *(undefined8 *)(lVar18 + 0x180253a2c) = uVar20;
  *(undefined8 *)(&DAT_180253a24 + lVar18) = uVar19;
  return 1;
}

