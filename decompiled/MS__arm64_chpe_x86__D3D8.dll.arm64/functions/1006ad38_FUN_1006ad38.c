/*
 * FUN_1006ad38 at 1006ad38
 * undefined FUN_1006ad38(void)
 * Address ranges: 1006ad38-1006b297
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006ad38(undefined8 param_1,int param_2,ulonglong param_3,uint param_4,byte param_5)

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
  ulonglong uVar11;
  ushort *puVar12;
  undefined2 *puVar13;
  ushort uVar14;
  uint uVar15;
  undefined2 uVar16;
  undefined2 *extraout_w10;
  undefined2 *puVar17;
  ushort *extraout_w14;
  ushort *puVar18;
  ushort *extraout_w14_00;
  ushort *extraout_w15;
  ushort *puVar19;
  ushort *extraout_w15_00;
  undefined2 *extraout_w15_01;
  undefined2 *puVar20;
  short sStack_40;
  undefined4 local_3e;
  uint local_38 [4];
  uint local_28 [6];
  
  uVar11 = (ulonglong)param_5;
  uVar9 = param_3 & 0xffffffff;
  uVar10 = (int)param_3 * 4;
  iVar4 = param_4 + ((int)param_3 + (uint)param_5 * 8) * 0x10;
  uVar15 = *(uint *)(uVar10 + param_2);
  puVar12 = (ushort *)(iVar4 + 0xe4);
  if (param_5 == 0) {
    local_28[0] = uVar15 >> 0x16 & 7;
    local_28[1] = uVar15 >> 10 & 7;
    local_28[2] = uVar15 >> 0xd & 7;
    uVar5 = *(uint *)(param_2 + 0x20) >> (ulonglong)(uVar10 & 0x1f);
    iVar1 = 0x24;
    iVar2 = 0x28;
  }
  else {
    local_28[0] = uVar15 >> 0x19 & 7;
    local_28[1] = uVar15 >> 0x10 & 7;
    local_28[2] = uVar15 >> 0x13 & 7;
    uVar5 = *(uint *)(param_2 + 0x2c) >> (ulonglong)(uVar10 & 0x1f);
    iVar1 = 0x30;
    iVar2 = 0x34;
  }
  local_3e = 0;
  local_38[2] = (*(uint *)(param_2 + iVar2) >> (ulonglong)(uVar10 & 0x1f) & 0xf) << 4;
  uVar8 = uVar15;
  if (param_5 != 0) {
    uVar8 = uVar15 >> 5;
  }
  uVar8 = uVar8 & 0x1f;
  local_38[0] = (uVar5 & 0xf) << 4;
  local_38[1] = (*(uint *)(param_2 + iVar1) >> (ulonglong)(uVar10 & 0x1f) & 0xf) << 4;
  uVar14 = 0x20;
  if ((uVar15 & 0x70000000) != 0x50000000) {
    uVar14 = 0x10;
  }
  uVar10 = (uint)param_5;
  *puVar12 = uVar14 | (ushort)param_5 << 8;
  puVar3 = (ushort *)(param_4 + (uint)param_5 * 8 + 0x2d0);
  bVar6 = false;
  puVar18 = (ushort *)(param_4 + (uint)param_5 * 8 + 0x2d2);
  uVar15 = 0;
  do {
    if (((local_38[uVar15] >> 5 & 1) != 0) || (uVar14 = 0, param_5 != 0 && uVar8 != 0x18)) {
      uVar14 = 0x100;
    }
    uVar7 = (ushort)((local_38[uVar15] & 0x10) << 5);
    switch(local_28[uVar15]) {
    case 0:
      uVar14 = uVar7 | uVar14 | 0x30;
      goto LAB_1006aea8;
    case 1:
      puVar19 = puVar3;
      if (uVar10 == 0) {
        if (uVar14 != 0) goto LAB_1006af18;
LAB_1006af24:
        uVar14 = *puVar19;
      }
      else {
        if (uVar14 != 0) {
LAB_1006af18:
          puVar19 = (ushort *)(param_4 + 0x2d8);
          goto LAB_1006af24;
        }
        if (uVar8 != 0x18) goto LAB_1006af24;
        uVar14 = *(ushort *)(param_4 + 0x2dc);
      }
      puVar12[uVar15 + 1] = uVar14 ^ uVar7;
      (&sStack_40)[uVar15] = 0x10;
      break;
    case 2:
      puVar12[uVar15 + 1] = (ushort)param_3 & 0xff | uVar7 | uVar14 | 0x70;
      bVar6 = true;
      break;
    case 3:
      uVar14 = uVar7 | uVar14 | 0x60;
      goto LAB_1006aea8;
    case 4:
      uVar14 = uVar7 | uVar14 | 0x40;
LAB_1006aea8:
      puVar12[uVar15 + 1] = uVar14;
      break;
    case 5:
      puVar19 = puVar18;
      if (uVar10 == 0) {
        if (uVar14 != 0) goto LAB_1006af7c;
LAB_1006af88:
        uVar14 = *puVar19;
      }
      else {
        if (uVar14 != 0) {
LAB_1006af7c:
          puVar19 = (ushort *)(param_4 + 0x2da);
          goto LAB_1006af88;
        }
        if (uVar8 != 0x18) goto LAB_1006af88;
        uVar14 = *(ushort *)(param_4 + 0x2de);
      }
      puVar12[uVar15 + 1] = uVar14 ^ uVar7;
      (&sStack_40)[uVar15] = 0x20;
    }
    uVar15 = uVar15 + 1;
  } while (uVar15 < 3);
  puVar13 = (undefined2 *)(param_4 + 0x2d4);
  if (bVar6) {
    uVar16 = *puVar13;
  }
  else {
    uVar16 = 0;
  }
  *(undefined2 *)(iVar4 + 0xec) = uVar16;
  puVar17 = (undefined2 *)(param_4 + 0x2d6);
  if (bVar6) {
    uVar16 = *puVar17;
  }
  else {
    uVar16 = 0;
  }
  *(undefined2 *)(iVar4 + 0xee) = uVar16;
  *(undefined4 *)(iVar4 + 0xf0) = 0;
  puVar20 = (undefined2 *)(iVar4 + 0xf2);
  if (uVar10 == 0) {
    *puVar13 = 0;
    *puVar17 = 0;
  }
  switch(uVar8) {
  case 1:
    *(undefined2 *)(iVar4 + 0xe8) = *(undefined2 *)(param_4 + 0x2d8);
  case 2:
    puVar19 = (ushort *)(iVar4 + 0xe8);
    if ((*puVar19 & 0xf0) != 0x70) {
      uVar15 = local_3e & 0xffff;
      if ((*puVar12 & 0xf0) == 0x10) {
        if ((short)local_3e == 0x20) {
          uVar9 = param_3 & 0xffffffff;
          uVar15 = local_3e & 0xffff;
          param_4 = FUN_1006acc8(uVar8,param_4,uVar9,uVar11);
          puVar19 = extraout_w15;
          puVar18 = extraout_w14;
          uVar8 = param_4;
        }
        else {
          *puVar3 = *puVar19;
        }
      }
      if ((*puVar12 & 0xf0) != 0x20) goto LAB_1006b0d4;
      if (uVar15 != 0x10) {
        *puVar18 = *puVar19;
        goto LAB_1006b0d4;
      }
    }
    FUN_1006acc8(uVar8,param_4,uVar9 & 0xffffffff,uVar11 & 0xffffffff);
LAB_1006b0d4:
    puVar12[3] = 0;
    puVar12[1] = 0;
    return;
  case 3:
    puVar19 = (ushort *)(iVar4 + 0xea);
    if ((*puVar19 & 0xf0) != 0x70) {
      uVar15 = (uint)local_3e._2_2_;
      if ((*puVar12 & 0xf0) == 0x10) {
        if (local_3e._2_2_ == 0x20) {
          uVar9 = param_3 & 0xffffffff;
          uVar15 = (uint)local_3e._2_2_;
          param_4 = FUN_1006acc8(uVar8,param_4,uVar9,uVar11);
          puVar19 = extraout_w15_00;
          puVar18 = extraout_w14_00;
          uVar8 = param_4;
        }
        else {
          *puVar3 = *puVar19;
        }
      }
      if ((*puVar12 & 0xf0) != 0x20) goto LAB_1006b164;
      if (uVar15 != 0x10) {
        *puVar18 = *puVar19;
        goto LAB_1006b164;
      }
    }
    FUN_1006acc8(uVar8,param_4,uVar9 & 0xffffffff,uVar11 & 0xffffffff);
LAB_1006b164:
    puVar12[1] = 0;
    puVar12[2] = 0;
    return;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0x18:
    *(undefined2 *)(iVar4 + 0xe6) = 0;
    break;
  case 0xc:
    uVar16 = 0x130;
    goto LAB_1006b174;
  case 0xd:
  case 0xf:
    *(ushort *)(iVar4 + 0xe6) = (ushort)param_3 & 0xff | 0x170;
    break;
  case 0xe:
    uVar16 = 0x160;
    goto LAB_1006b174;
  case 0x10:
    uVar16 = *(undefined2 *)(param_4 + 0x2d8);
LAB_1006b174:
    *(undefined2 *)(iVar4 + 0xe6) = uVar16;
    break;
  default:
    *puVar12 = 0;
    return;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    if ((*(ushort *)(iVar4 + 0xe8) & 0xf0) == 0xa0) {
      uVar14 = *(ushort *)(param_4 + 0x2d8);
    }
    else {
      uVar14 = *(ushort *)(iVar4 + 0xe8) | 0x100;
    }
    *(ushort *)(iVar4 + 0xe6) = uVar14;
    break;
  case 0x16:
  case 0x17:
    *(undefined2 *)(iVar4 + 0xe6) = 0;
    puVar19 = puVar3;
    if (uVar10 != 0) {
      puVar19 = (ushort *)(param_4 + 0x2d8);
    }
    uVar14 = *puVar19;
    *(ushort *)(iVar4 + 0xea) = uVar14;
    if ((uVar14 & 0xf0) == 0x70) {
      uVar10 = (uint)param_5;
      uVar8 = FUN_1006acc8(uVar8,param_4,param_3 & 0xffffffff);
      puVar20 = extraout_w15_01;
      puVar17 = extraout_w10;
    }
    else {
      if ((*puVar12 & 0xf0) == 0x10) {
        *puVar3 = uVar14;
      }
      if ((*puVar12 & 0xf0) == 0x20) {
        *puVar18 = *(ushort *)(iVar4 + 0xea);
      }
    }
    if (uVar10 != 0) {
      return;
    }
    *(undefined2 *)(iVar4 + 0xf0) = 0x90;
    *puVar13 = 0x90;
    if (uVar8 != 0x17) {
      return;
    }
    *puVar20 = 0x90;
    *puVar17 = 0x90;
    return;
  case 0x19:
  case 0x1a:
    break;
  }
  FUN_1006acc8(uVar8,param_4,param_3 & 0xffffffff,uVar11);
  return;
}

