/*
 * FUN_10031aab at 10031aab
 * undefined __stdcall FUN_10031aab(int param_1, int param_2, uint param_3, byte param_4)
 * Address ranges: 10031aab-10031eca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10031aab(int param_1,int param_2,uint param_3,byte param_4)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  ushort *puVar6;
  byte bVar7;
  ushort uVar8;
  ushort *puVar9;
  uint local_34 [3];
  int local_28;
  int local_24;
  int local_20;
  short asStack_1c [4];
  uint local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  uVar3 = param_3;
  local_8 = (uint)param_4;
  puVar9 = (ushort *)((uint)param_4 * 0x80 + param_2 * 0x10 + 0xe4 + param_3);
  uVar1 = *(uint *)(param_2 * 4 + param_1);
  bVar7 = (byte)(param_2 * 4);
  if (param_4 == 0) {
    local_34[0] = uVar1 >> 0x16 & 7;
    local_34[1] = uVar1 >> 10 & 7;
    local_34[2] = uVar1 >> 0xd & 7;
    local_28 = (*(uint *)(param_1 + 0x20) >> (bVar7 & 0x1f) & 0xf) << 4;
    local_24 = (*(uint *)(param_1 + 0x24) >> (bVar7 & 0x1f) & 0xf) << 4;
    uVar5 = *(uint *)(param_1 + 0x28);
  }
  else {
    local_34[0] = uVar1 >> 0x19 & 7;
    local_34[1] = uVar1 >> 0x10 & 7;
    local_34[2] = uVar1 >> 0x13 & 7;
    local_28 = (*(uint *)(param_1 + 0x2c) >> (bVar7 & 0x1f) & 0xf) << 4;
    local_24 = (*(uint *)(param_1 + 0x30) >> (bVar7 & 0x1f) & 0xf) << 4;
    uVar5 = *(uint *)(param_1 + 0x34);
  }
  local_20 = (uVar5 >> (bVar7 & 0x1f) & 0xf) << 4;
  asStack_1c[1] = 0;
  asStack_1c[2] = 0;
  uVar5 = uVar1 >> 5;
  if (param_4 == 0) {
    uVar5 = uVar1;
  }
  local_10 = uVar5 & 0x1f;
  *puVar9 = (ushort)param_4 << 8 | 0x10;
  bVar2 = false;
  param_3 = 0;
  do {
    if (((*(byte *)(&local_28 + param_3) & 0x20) == 0) && ((param_4 == 0 || (local_10 == 0x18)))) {
      local_c = 0;
    }
    else {
      local_c = 0x100;
    }
    uVar4 = (*(ushort *)(&local_28 + param_3) & 0x10) << 5;
    local_14 = (uint)uVar4;
    uVar1 = local_34[param_3];
    uVar8 = (ushort)local_c;
    if (uVar1 == 0) {
      uVar8 = uVar4 | uVar8 | 0x30;
      goto LAB_10031c96;
    }
    if (uVar1 == 1) {
      if (param_4 == 0) {
        if (uVar8 != 0) goto LAB_10031c66;
LAB_10031c6e:
        puVar6 = (ushort *)(uVar3 + (local_8 + 0x5a) * 8);
      }
      else if (uVar8 == 0) {
        if (local_10 != 0x18) goto LAB_10031c6e;
        puVar6 = (ushort *)(uVar3 + 0x2dc);
      }
      else {
LAB_10031c66:
        puVar6 = (ushort *)(uVar3 + 0x2d8);
      }
      puVar9[param_3 + 1] = *puVar6 ^ uVar4;
      asStack_1c[param_3] = 0x10;
    }
    else if (uVar1 == 2) {
      puVar9[param_3 + 1] = (byte)((byte)param_2 | 0x70) | uVar4 | uVar8;
      bVar2 = true;
    }
    else {
      if (uVar1 == 3) {
        uVar8 = uVar4 | uVar8 | 0x60;
      }
      else {
        if (uVar1 != 4) goto LAB_10031ca4;
        uVar8 = uVar4 | uVar8 | 0x40;
      }
LAB_10031c96:
      puVar9[param_3 + 1] = uVar8;
    }
LAB_10031ca4:
    param_3 = param_3 + 1;
  } while (param_3 < 3);
  if (bVar2) {
    uVar8 = *(ushort *)(uVar3 + 0x2d4);
  }
  else {
    uVar8 = 0;
  }
  puVar9[4] = uVar8;
  if (bVar2) {
    uVar8 = *(ushort *)(uVar3 + 0x2d6);
  }
  else {
    uVar8 = 0;
  }
  puVar9[5] = uVar8;
  puVar9[6] = 0;
  puVar9[7] = 0;
  if (param_4 == 0) {
    *(undefined4 *)(uVar3 + 0x2d4) = 0;
  }
  switch(local_10) {
  case 1:
    puVar9[2] = *(ushort *)(uVar3 + 0x2d8);
  case 2:
    if (((byte)puVar9[2] & 0xf0) != 0x70) {
      if ((*puVar9 & 0xf0) == 0x10) {
        if (asStack_1c[1] == 0x20) {
          FUN_10031a38(uVar3,param_2,param_4);
        }
        else {
          *(ushort *)(uVar3 + 0x2d0 + local_8 * 8) = puVar9[2];
        }
      }
      if ((*puVar9 & 0xf0) != 0x20) goto LAB_10031d6b;
      if (asStack_1c[1] != 0x10) {
        *(ushort *)(uVar3 + 0x2d2 + local_8 * 8) = puVar9[2];
        goto LAB_10031d6b;
      }
    }
    FUN_10031a38(uVar3,param_2,param_4);
LAB_10031d6b:
    puVar9[3] = 0;
    puVar9[1] = 0;
    return;
  case 3:
    if (((byte)puVar9[3] & 0xf0) != 0x70) {
      if ((*puVar9 & 0xf0) == 0x10) {
        if (asStack_1c[2] == 0x20) {
          FUN_10031a38(uVar3,param_2,param_4);
        }
        else {
          *(ushort *)(uVar3 + 0x2d0 + local_8 * 8) = puVar9[3];
        }
      }
      if ((*puVar9 & 0xf0) != 0x20) goto LAB_10031dd7;
      if (asStack_1c[2] != 0x10) {
        *(ushort *)(uVar3 + 0x2d2 + local_8 * 8) = puVar9[3];
        goto LAB_10031dd7;
      }
    }
    FUN_10031a38(uVar3,param_2,param_4);
LAB_10031dd7:
    puVar9[1] = 0;
    puVar9[2] = 0;
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
    uVar8 = 0;
    break;
  case 0xc:
    uVar8 = 0x130;
    break;
  case 0xd:
  case 0xf:
    uVar8 = (ushort)param_2 & 0xff | 0x170;
    break;
  case 0xe:
    uVar8 = 0x160;
    break;
  case 0x10:
    uVar8 = *(ushort *)(uVar3 + 0x2d8);
    break;
  default:
    *puVar9 = 0;
    return;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    if (((byte)puVar9[2] & 0xf0) == 0xa0) {
      uVar8 = *(ushort *)(uVar3 + 0x2d8);
    }
    else {
      uVar8 = puVar9[2] | 0x100;
    }
    break;
  case 0x16:
  case 0x17:
    puVar9[1] = 0;
    puVar6 = (ushort *)(uVar3 + 0x2d8);
    if (param_4 == 0) {
      puVar6 = (ushort *)(uVar3 + (local_8 + 0x5a) * 8);
    }
    uVar8 = *puVar6;
    puVar9[3] = uVar8;
    if (((byte)uVar8 & 0xf0) == 0x70) {
      FUN_10031a38(uVar3,param_2,param_4);
    }
    else {
      if ((*puVar9 & 0xf0) == 0x10) {
        *(ushort *)(uVar3 + 0x2d0 + local_8 * 8) = uVar8;
      }
      if ((*puVar9 & 0xf0) == 0x20) {
        *(ushort *)(uVar3 + 0x2d2 + local_8 * 8) = puVar9[3];
      }
    }
    if (param_4 != 0) {
      return;
    }
    puVar9[6] = 0x90;
    *(undefined2 *)(uVar3 + 0x2d4) = 0x90;
    if (local_10 != 0x17) {
      return;
    }
    puVar9[7] = 0x90;
    *(undefined2 *)(uVar3 + 0x2d6) = 0x90;
    return;
  }
  puVar9[1] = uVar8;
  FUN_10031a38(uVar3,param_2,param_4);
  return;
}

