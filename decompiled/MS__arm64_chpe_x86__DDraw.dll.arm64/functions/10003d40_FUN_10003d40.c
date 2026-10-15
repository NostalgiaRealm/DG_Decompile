/*
 * FUN_10003d40 at 10003d40
 * undefined FUN_10003d40(void)
 * Address ranges: 10003d40-100040af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10003d40(uint *param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  uint *in_w8;
  uint uVar17;
  uint uVar18;
  uint extraout_w13;
  uint uVar19;
  uint extraout_w14;
  uint uVar20;
  int extraout_w15;
  int iVar21;
  undefined8 local_60;
  undefined8 local_58;
  uint local_50;
  uint uStack_4c;
  int iVar12;
  
  uVar18 = *param_1;
  uVar3 = param_1[1];
  uVar7 = *(undefined8 *)param_1;
  uVar15 = param_1[2];
  *in_w8 = uVar18;
  iVar12 = 0x228;
  iVar11 = 0x228;
  in_w8[2] = uVar15;
  uVar15 = param_1[3];
  puVar2 = in_w8 + 1;
  *puVar2 = uVar3;
  puVar10 = in_w8 + 5;
  in_w8[3] = uVar15;
  iVar21 = DAT_100be0c0;
  puVar14 = &DAT_100be150;
  puVar13 = &DAT_100be150;
  uVar15 = *(uint *)(&DAT_100be2b4 + param_2 * 0x45);
  uVar16 = *(uint *)((int)&DAT_100be2b4 + param_2 * 0x228 + 4);
  uVar6 = (&DAT_100be2b4)[param_2 * 0x45];
  uVar20 = *(uint *)(DAT_100be0c0 + 0x7cc);
  uVar19 = *(uint *)(DAT_100be0c0 + 0x7c8);
  local_50 = uVar15;
  uStack_4c = uVar16;
  if ((uVar19 < 0xfffffff8) || ((uVar19 != uVar20 || uVar19 == 0xfffffff9) && 0xff < uVar20)) {
    if ((uVar19 != 0) && (puVar14 = &DAT_100be150, uVar20 != 0)) {
      *in_w8 = uVar19;
      *puVar2 = uVar20;
    }
    goto LAB_10003fe0;
  }
  iVar4 = *(int *)((&DAT_100be150)[param_2 * 0x8a] + 4);
  uVar20 = *(uint *)(iVar4 + 0x68);
  uVar19 = *(uint *)(iVar4 + 100);
  if (uVar19 < 0xfffffff8) {
    bVar1 = false;
  }
  else {
    bVar1 = uVar19 == uVar20 && uVar19 != 0xfffffff9 || uVar20 < 0x100;
  }
  local_60 = 0;
  if (bVar1) {
    iVar9 = 0;
    local_60 = uVar7;
    local_58 = uVar6;
    switch(uVar19) {
    case 0xfffffff8:
      local_60 = uVar6;
      break;
    case 0xfffffffa:
      iVar9 = 1;
    case 0xfffffffb:
      if ((0x9ff < uVar15) && (0x59f < uVar16)) {
        local_58 = 0x5a000000a00;
      }
      break;
    case 0xfffffffc:
      iVar9 = 1;
    case 0xfffffffd:
      if ((0x77f < uVar15) && (0x437 < uVar16)) {
        local_58 = 0x43800000780;
      }
      break;
    case 0xfffffffe:
      iVar9 = 1;
    }
    uVar8 = (uint)local_60;
    uVar17 = local_60._4_4_;
    puVar14 = &DAT_100be150;
    iVar11 = 0x228;
    switch(*(undefined4 *)(iVar4 + 0x1c)) {
    case 2:
      uVar7 = local_58;
      if (iVar9 != 0) {
        if ((uint)local_60 == 0) {
                    /* WARNING: Does not return */
          uVar7 = SoftwareBreakpoint(0xf004,0x10003f10);
          (*(code *)uVar7)();
        }
        uVar17 = 0;
        if ((uint)local_60 != 0) {
          uVar17 = (uint)local_58 / (uint)local_60;
        }
        if (local_60._4_4_ == 0) {
                    /* WARNING: Does not return */
          uVar7 = SoftwareBreakpoint(0xf004,0x10003f24);
          (*(code *)uVar7)();
        }
        uVar8 = 0;
        if (local_60._4_4_ != 0) {
          uVar8 = (uint)((ulonglong)local_58 >> 0x20) / local_60._4_4_;
        }
        if (uVar17 == 0) {
          uVar17 = 1;
        }
        if (uVar8 == 0) {
          uVar8 = 1;
        }
        if (uVar8 <= uVar17) {
          uVar17 = uVar8;
        }
        uVar8 = uVar17 * (uint)local_60;
        uVar17 = uVar17 * local_60._4_4_;
        break;
      }
      goto LAB_10003ef0;
    case 4:
    case 5:
    case 6:
      if (((uint)local_60 < 0x501) && (local_60._4_4_ < 0x401)) {
        local_60 = CONCAT44(local_60._4_4_,(local_60._4_4_ << 2) / 3);
      }
    case 0:
    case 1:
    case 3:
    case 7:
    case 8:
      puVar13 = &DAT_100be150;
      iVar12 = 0x228;
      uVar7 = FUN_1008e158(&local_60,&local_58,iVar9);
      uVar19 = extraout_w13;
      uVar20 = extraout_w14;
      iVar21 = extraout_w15;
LAB_10003ef0:
      uVar8 = (uint)uVar7;
      uVar17 = (uint)((ulonglong)uVar7 >> 0x20);
      puVar14 = puVar13;
      iVar11 = iVar12;
    }
    switch(uVar19) {
    case 0xfffffff8:
    case 0xfffffffa:
    case 0xfffffffb:
    case 0xfffffffc:
    case 0xfffffffd:
    case 0xfffffffe:
    case 0xffffffff:
      if (uVar20 - 2 < 0xfe) {
        uVar8 = uVar20 * uVar8;
        uVar17 = uVar20 * uVar17;
      }
      break;
    case 0xfffffff9:
      uVar8 = uVar20 * uVar18;
      uVar17 = uVar20 * uVar3;
    }
  }
  else {
    local_60._0_4_ = 0;
    local_60._4_4_ = 0;
    uVar8 = (uint)local_60;
    uVar17 = local_60._4_4_;
    local_58 = uVar7;
    iVar11 = 0x228;
  }
  *in_w8 = uVar8;
  *puVar2 = uVar17;
LAB_10003fe0:
  iVar11 = *(int *)(*(int *)((int)puVar14 + param_2 * iVar11) + 4);
  uVar18 = *(uint *)(iVar11 + 0xa2);
  uVar3 = *(uint *)(iVar11 + 0xa6);
  if ((uVar18 == 0) || (uVar20 = uVar3, uVar3 == 0)) {
    uVar20 = *in_w8;
    if (uVar20 == 0) {
                    /* WARNING: Does not return */
      uVar7 = SoftwareBreakpoint(0xf004,0x10004014);
      (*(code *)uVar7)();
    }
    uVar19 = 0;
    if (uVar20 != 0) {
      uVar19 = uVar15 / uVar20;
    }
    uVar15 = *puVar2;
    if (uVar15 == 0) {
                    /* WARNING: Does not return */
      uVar7 = SoftwareBreakpoint(0xf004,0x10004024);
      (*(code *)uVar7)();
    }
    uVar8 = 0;
    if (uVar15 != 0) {
      uVar8 = uVar16 / uVar15;
    }
    if (uVar19 == 0) {
      uVar19 = 1;
    }
    if (uVar8 == 0) {
      uVar8 = 1;
    }
    if (uVar18 == uVar3) {
      uVar18 = uVar19;
      uVar20 = uVar19;
      if (uVar8 <= uVar19) {
        uVar18 = uVar8;
        uVar20 = uVar8;
      }
    }
    else {
      uVar20 = uVar8;
      if (uVar18 == 0) {
        uVar18 = uVar19;
        uVar20 = uVar3;
      }
    }
  }
  *puVar10 = uVar20;
  cVar5 = *(char *)(iVar21 + 0x786);
  in_w8[4] = uVar18;
  if (((cVar5 != '\0') && (*(uint *)(iVar21 + 0x7d4) != 0)) &&
     (uVar15 = *(uint *)(iVar21 + 0x7d8), uVar15 != 0)) {
    in_w8[2] = *(uint *)(iVar21 + 0x7d4);
    in_w8[3] = uVar15;
  }
  return;
}

