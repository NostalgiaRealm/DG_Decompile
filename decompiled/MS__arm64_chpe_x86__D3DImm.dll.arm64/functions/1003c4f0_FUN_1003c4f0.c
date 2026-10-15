/*
 * FUN_1003c4f0 at 1003c4f0
 * undefined FUN_1003c4f0(void)
 * Address ranges: 1003c4f0-1003c9d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003c4f0(undefined8 param_1,int param_2,ulonglong param_3,uint param_4,byte param_5)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  ushort uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar14;
  undefined2 uVar15;
  ushort *puVar16;
  ushort uVar17;
  uint uVar18;
  uint extraout_w10;
  uint extraout_w10_00;
  undefined2 *extraout_w10_01;
  undefined2 *puVar19;
  ushort *extraout_w11;
  ushort *puVar20;
  ushort *extraout_w11_00;
  undefined2 *extraout_w11_01;
  undefined2 *puVar21;
  undefined4 *extraout_w12;
  undefined4 *puVar22;
  undefined2 *extraout_w14;
  undefined2 *puVar23;
  short sStack_30;
  undefined4 local_2e;
  uint local_28 [4];
  uint local_18 [6];
  ulonglong uVar13;
  
  uVar13 = (ulonglong)param_5;
  uVar10 = (uint)param_5;
  uVar9 = param_3 & 0xffffffff;
  uVar18 = (int)param_3 * 4;
  iVar4 = param_4 + ((int)param_3 + (uint)param_5 * 8) * 0x10;
  puVar14 = (ushort *)(iVar4 + 0xe4);
  uVar8 = *(uint *)(uVar18 + param_2);
  if (param_5 == 0) {
    local_18[0] = uVar8 >> 0x16 & 7;
    local_18[1] = uVar8 >> 10 & 7;
    local_18[2] = uVar8 >> 0xd & 7;
    uVar12 = *(uint *)(param_2 + 0x20) >> (ulonglong)(uVar18 & 0x1f);
    iVar1 = 0x24;
    iVar2 = 0x28;
  }
  else {
    local_18[0] = uVar8 >> 0x19 & 7;
    local_18[1] = uVar8 >> 0x10 & 7;
    local_18[2] = uVar8 >> 0x13 & 7;
    uVar12 = *(uint *)(param_2 + 0x2c) >> (ulonglong)(uVar18 & 0x1f);
    iVar1 = 0x30;
    iVar2 = 0x34;
  }
  local_2e = 0;
  uVar5 = *(uint *)(param_2 + iVar1);
  local_28[2] = (*(uint *)(param_2 + iVar2) >> (ulonglong)(uVar18 & 0x1f) & 0xf) << 4;
  uVar11 = (uint)param_5;
  if (uVar11 != 0) {
    uVar8 = uVar8 >> 5;
  }
  uVar8 = uVar8 & 0x1f;
  *puVar14 = (ushort)param_5 << 8 | 0x10;
  bVar6 = false;
  local_28[0] = (uVar12 & 0xf) << 4;
  local_28[1] = (uVar5 >> (ulonglong)(uVar18 & 0x1f) & 0xf) << 4;
  puVar3 = (ushort *)(param_4 + uVar11 * 8 + 0x2d0);
  uVar18 = 0;
  do {
    if (((local_28[uVar18] >> 5 & 1) != 0) || (uVar17 = 0, uVar11 != 0 && uVar8 != 0x18)) {
      uVar17 = 0x100;
    }
    uVar12 = (uint)param_5;
    uVar7 = (ushort)((local_28[uVar18] & 0x10) << 5);
    switch(local_18[uVar18]) {
    case 0:
      uVar17 = uVar7 | uVar17 | 0x30;
      goto LAB_1003c634;
    case 1:
      puVar16 = puVar3;
      if (uVar12 == 0) {
        if (uVar17 != 0) goto LAB_1003c6b0;
LAB_1003c6bc:
        uVar17 = *puVar16;
      }
      else {
        if (uVar17 != 0) {
LAB_1003c6b0:
          puVar16 = (ushort *)(param_4 + 0x2d8);
          goto LAB_1003c6bc;
        }
        if (uVar8 != 0x18) goto LAB_1003c6bc;
        uVar17 = *(ushort *)(param_4 + 0x2dc);
      }
      puVar14[uVar18 + 1] = uVar17 ^ uVar7;
      (&sStack_30)[uVar18] = 0x10;
      break;
    case 2:
      puVar14[uVar18 + 1] = (ushort)param_3 & 0xff | uVar7 | uVar17 | 0x70;
      bVar6 = true;
      break;
    case 3:
      uVar17 = uVar7 | uVar17 | 0x60;
      goto LAB_1003c634;
    case 4:
      uVar17 = uVar7 | uVar17 | 0x40;
LAB_1003c634:
      puVar14[uVar18 + 1] = uVar17;
    }
    uVar18 = uVar18 + 1;
  } while (uVar18 < 3);
  puVar19 = (undefined2 *)(param_4 + 0x2d4);
  if (bVar6) {
    uVar15 = *puVar19;
  }
  else {
    uVar15 = 0;
  }
  *(undefined2 *)(iVar4 + 0xec) = uVar15;
  puVar23 = (undefined2 *)(param_4 + 0x2d6);
  if (bVar6) {
    uVar15 = *puVar23;
  }
  else {
    uVar15 = 0;
  }
  puVar22 = (undefined4 *)(iVar4 + 0xf0);
  *(undefined2 *)(iVar4 + 0xee) = uVar15;
  *puVar22 = 0;
  puVar21 = (undefined2 *)(iVar4 + 0xf2);
  if (uVar12 == 0) {
    *puVar19 = 0;
    *puVar23 = 0;
  }
  if (0x17 < uVar8 - 1) {
switchD_1003c784_caseD_11:
    *puVar14 = 0;
    return;
  }
  puVar16 = (ushort *)(param_4 + uVar12 * 8 + 0x2d2);
  switch(uVar8) {
  case 1:
    *(undefined2 *)(iVar4 + 0xe8) = *(undefined2 *)(param_4 + 0x2d8);
  case 2:
    puVar20 = (ushort *)(iVar4 + 0xe8);
    if ((*puVar20 & 0xf0) != 0x70) {
      uVar18 = local_2e & 0xffff;
      if ((*puVar14 & 0xf0) == 0x10) {
        if ((short)local_2e == 0x20) {
          uVar13 = (ulonglong)uVar12;
          uVar9 = param_3 & 0xffffffff;
          param_4 = FUN_1003c480(uVar8,param_4,uVar9,uVar13);
          uVar18 = extraout_w10;
          puVar20 = extraout_w11;
          uVar8 = param_4;
        }
        else {
          *puVar3 = *puVar20;
        }
      }
      if ((*puVar14 & 0xf0) != 0x20) goto LAB_1003c814;
      if (uVar18 != 0x10) {
        *puVar16 = *puVar20;
        goto LAB_1003c814;
      }
    }
    FUN_1003c480(uVar8,param_4,uVar9 & 0xffffffff,uVar13 & 0xffffffff);
LAB_1003c814:
    puVar14[3] = 0;
    puVar14[1] = 0;
    return;
  case 3:
    puVar20 = (ushort *)(iVar4 + 0xea);
    if ((*puVar20 & 0xf0) != 0x70) {
      uVar18 = (uint)local_2e._2_2_;
      if ((*puVar14 & 0xf0) == 0x10) {
        if (local_2e._2_2_ == 0x20) {
          uVar13 = (ulonglong)uVar12;
          uVar9 = param_3 & 0xffffffff;
          param_4 = FUN_1003c480(uVar8,param_4,uVar9,uVar13);
          uVar18 = extraout_w10_00;
          puVar20 = extraout_w11_00;
          uVar8 = param_4;
        }
        else {
          *puVar3 = *puVar20;
        }
      }
      if ((*puVar14 & 0xf0) != 0x20) goto LAB_1003c8a4;
      if (uVar18 != 0x10) {
        *puVar16 = *puVar20;
        goto LAB_1003c8a4;
      }
    }
    FUN_1003c480(uVar8,param_4,uVar9 & 0xffffffff,uVar13 & 0xffffffff);
LAB_1003c8a4:
    puVar14[1] = 0;
    puVar14[2] = 0;
    return;
  default:
    *(undefined2 *)(iVar4 + 0xe6) = 0;
    goto LAB_1003c8bc;
  case 0xc:
    uVar15 = 0x130;
    break;
  case 0xd:
  case 0xf:
    *(ushort *)(iVar4 + 0xe6) = (ushort)param_3 & 0xff | 0x170;
    goto LAB_1003c8bc;
  case 0xe:
    uVar15 = 0x160;
    break;
  case 0x10:
    uVar15 = *(undefined2 *)(param_4 + 0x2d8);
    break;
  case 0x11:
    goto switchD_1003c784_caseD_11;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    if ((*(ushort *)(iVar4 + 0xe8) & 0xf0) == 0xa0) {
      uVar17 = *(ushort *)(param_4 + 0x2d8);
    }
    else {
      uVar17 = *(ushort *)(iVar4 + 0xe8) | 0x100;
    }
    *(ushort *)(iVar4 + 0xe6) = uVar17;
    goto LAB_1003c8bc;
  case 0x16:
  case 0x17:
    *(undefined2 *)(iVar4 + 0xe6) = 0;
    puVar20 = puVar3;
    if (uVar12 != 0) {
      puVar20 = (ushort *)(param_4 + 0x2d8);
    }
    uVar17 = *puVar20;
    *(ushort *)(iVar4 + 0xea) = uVar17;
    if ((uVar17 & 0xf0) == 0x70) {
      uVar10 = uVar12;
      uVar8 = FUN_1003c480(uVar8,param_4,param_3 & 0xffffffff);
      puVar22 = extraout_w12;
      puVar19 = extraout_w10_01;
      puVar21 = extraout_w11_01;
      puVar23 = extraout_w14;
    }
    else {
      if ((*puVar14 & 0xf0) == 0x10) {
        *puVar3 = uVar17;
      }
      if ((*puVar14 & 0xf0) == 0x20) {
        *puVar16 = *(ushort *)(iVar4 + 0xea);
      }
    }
    if (uVar10 != 0) {
      return;
    }
    *(undefined2 *)puVar22 = 0x90;
    *puVar19 = 0x90;
    if (uVar8 != 0x17) {
      return;
    }
    *puVar21 = 0x90;
    *puVar23 = 0x90;
    return;
  }
  *(undefined2 *)(iVar4 + 0xe6) = uVar15;
LAB_1003c8bc:
  FUN_1003c480(uVar8,param_4,param_3 & 0xffffffff,uVar12);
  return;
}

