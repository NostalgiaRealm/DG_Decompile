/*
 * FUN_1004a75d at 1004a75d
 * undefined __stdcall FUN_1004a75d(int param_1, int param_2, uint param_3, byte param_4)
 * Address ranges: 1004a75d-1004abc8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004a75d(int param_1,int param_2,uint param_3,byte param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  ushort *puVar9;
  byte bVar10;
  ushort *puVar11;
  uint local_38 [3];
  int local_2c;
  int local_28;
  int local_24;
  short asStack_20 [4];
  uint local_18;
  ushort *local_14;
  undefined4 local_10;
  uint local_c;
  ushort *local_8;
  
  bVar5 = param_4;
  uVar4 = param_3;
  uVar2 = (uint)param_4;
  puVar11 = (ushort *)(uVar2 * 0x80 + param_2 * 0x10 + 0xe4 + param_3);
  uVar1 = *(uint *)(param_2 * 4 + param_1);
  bVar10 = (byte)(param_2 * 4);
  if (param_4 == 0) {
    local_38[0] = uVar1 >> 0x16 & 7;
    local_38[1] = uVar1 >> 10 & 7;
    local_38[2] = uVar1 >> 0xd & 7;
    local_2c = (*(uint *)(param_1 + 0x20) >> (bVar10 & 0x1f) & 0xf) << 4;
    local_28 = (*(uint *)(param_1 + 0x24) >> (bVar10 & 0x1f) & 0xf) << 4;
    uVar8 = *(uint *)(param_1 + 0x28);
  }
  else {
    local_38[0] = uVar1 >> 0x19 & 7;
    local_38[1] = uVar1 >> 0x10 & 7;
    local_38[2] = uVar1 >> 0x13 & 7;
    local_2c = (*(uint *)(param_1 + 0x2c) >> (bVar10 & 0x1f) & 0xf) << 4;
    local_28 = (*(uint *)(param_1 + 0x30) >> (bVar10 & 0x1f) & 0xf) << 4;
    uVar8 = *(uint *)(param_1 + 0x34);
  }
  local_10 = 0x20;
  local_24 = (uVar8 >> (bVar10 & 0x1f) & 0xf) << 4;
  asStack_20[1] = 0;
  asStack_20[2] = 0;
  uVar8 = uVar1 >> 5;
  if (param_4 == 0) {
    uVar8 = uVar1;
  }
  local_c = uVar8 & 0x1f;
  uVar6 = 0x10;
  if ((uVar1 & 0x70000000) == 0x50000000) {
    uVar6 = 0x20;
  }
  *puVar11 = uVar6 | (ushort)param_4 << 8;
  local_14 = (ushort *)(uVar2 * 8 + 0x2d2 + param_3);
  local_8 = (ushort *)(param_3 + (uVar2 + 0x5a) * 8);
  bVar3 = false;
  param_3 = 0;
  do {
    if (((*(byte *)(&local_2c + param_3) & 0x20) == 0) && ((bVar5 == 0 || (local_c == 0x18)))) {
      _param_4 = 0;
    }
    else {
      _param_4 = 0x100;
    }
    uVar6 = (*(ushort *)(&local_2c + param_3) & 0x10) << 5;
    local_18 = (uint)uVar6;
    uVar1 = local_38[param_3];
    if (uVar1 == 0) {
      uVar6 = uVar6 | _param_4 | 0x30;
      goto LAB_1004a9b6;
    }
    if (uVar1 == 1) {
      puVar9 = local_8;
      if (bVar5 == 0) {
        if (_param_4 != 0) goto LAB_1004a991;
      }
      else if (_param_4 == 0) {
        if (local_c == 0x18) {
          puVar9 = (ushort *)(uVar4 + 0x2dc);
        }
      }
      else {
LAB_1004a991:
        puVar9 = (ushort *)(uVar4 + 0x2d8);
      }
      puVar11[param_3 + 1] = *puVar9 ^ uVar6;
      sVar7 = 0x10;
LAB_1004a93d:
      asStack_20[param_3] = sVar7;
    }
    else if (uVar1 == 2) {
      puVar11[param_3 + 1] = (byte)((byte)param_2 | 0x70) | uVar6 | _param_4;
      bVar3 = true;
    }
    else {
      if (uVar1 == 3) {
        uVar6 = uVar6 | _param_4 | 0x60;
      }
      else {
        if (uVar1 != 4) {
          if (uVar1 != 5) goto LAB_1004a9c4;
          puVar9 = local_14;
          if (bVar5 == 0) {
            if (_param_4 != 0) goto LAB_1004a920;
          }
          else if (_param_4 == 0) {
            if (local_c == 0x18) {
              puVar9 = (ushort *)(uVar4 + 0x2de);
            }
          }
          else {
LAB_1004a920:
            puVar9 = (ushort *)(uVar4 + 0x2da);
          }
          puVar11[param_3 + 1] = *puVar9 ^ uVar6;
          sVar7 = (short)local_10;
          goto LAB_1004a93d;
        }
        uVar6 = uVar6 | _param_4 | 0x40;
      }
LAB_1004a9b6:
      puVar11[param_3 + 1] = uVar6;
    }
LAB_1004a9c4:
    param_3 = param_3 + 1;
  } while (param_3 < 3);
  if (bVar3) {
    uVar6 = *(ushort *)(uVar4 + 0x2d4);
  }
  else {
    uVar6 = 0;
  }
  puVar11[4] = uVar6;
  if (bVar3) {
    uVar6 = *(ushort *)(uVar4 + 0x2d6);
  }
  else {
    uVar6 = 0;
  }
  puVar11[5] = uVar6;
  puVar11[6] = 0;
  puVar11[7] = 0;
  if (bVar5 == 0) {
    *(undefined4 *)(uVar4 + 0x2d4) = 0;
  }
  switch(local_c) {
  case 1:
    puVar11[2] = *(ushort *)(uVar4 + 0x2d8);
  case 2:
    if (((byte)puVar11[2] & 0xf0) != 0x70) {
      if ((*puVar11 & 0xf0) == 0x10) {
        if (asStack_20[1] == (short)local_10) {
          FUN_1004a6ea(uVar4,param_2,bVar5);
        }
        else {
          *local_8 = puVar11[2];
        }
      }
      if ((*puVar11 & 0xf0) != 0x20) goto LAB_1004aa83;
      if (asStack_20[1] != 0x10) {
        *local_14 = puVar11[2];
        goto LAB_1004aa83;
      }
    }
    FUN_1004a6ea(uVar4,param_2,bVar5);
LAB_1004aa83:
    puVar11[3] = 0;
    puVar11[1] = 0;
    return;
  case 3:
    if (((byte)puVar11[3] & 0xf0) != 0x70) {
      if ((*puVar11 & 0xf0) == 0x10) {
        if (asStack_20[2] == (short)local_10) {
          FUN_1004a6ea(uVar4,param_2,bVar5);
        }
        else {
          *local_8 = puVar11[3];
        }
      }
      if ((*puVar11 & 0xf0) != 0x20) goto LAB_1004aae7;
      if (asStack_20[2] != 0x10) {
        *local_14 = puVar11[3];
        goto LAB_1004aae7;
      }
    }
    FUN_1004a6ea(uVar4,param_2,bVar5);
LAB_1004aae7:
    puVar11[1] = 0;
    puVar11[2] = 0;
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
    uVar6 = 0;
    break;
  case 0xc:
    uVar6 = 0x130;
    break;
  case 0xd:
  case 0xf:
    uVar6 = (ushort)param_2 & 0xff | 0x170;
    break;
  case 0xe:
    uVar6 = 0x160;
    break;
  case 0x10:
    uVar6 = *(ushort *)(uVar4 + 0x2d8);
    break;
  default:
    *puVar11 = 0;
    return;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    if (((byte)puVar11[2] & 0xf0) == 0xa0) {
      uVar6 = *(ushort *)(uVar4 + 0x2d8);
    }
    else {
      uVar6 = puVar11[2] | 0x100;
    }
    break;
  case 0x16:
  case 0x17:
    puVar11[1] = 0;
    puVar9 = (ushort *)(uVar4 + 0x2d8);
    if (bVar5 == 0) {
      puVar9 = local_8;
    }
    uVar6 = *puVar9;
    puVar11[3] = uVar6;
    if (((byte)uVar6 & 0xf0) == 0x70) {
      FUN_1004a6ea(uVar4,param_2,bVar5);
    }
    else {
      if ((*puVar11 & 0xf0) == 0x10) {
        *local_8 = uVar6;
      }
      if ((*puVar11 & 0xf0) == 0x20) {
        *local_14 = puVar11[3];
      }
    }
    if (bVar5 != 0) {
      return;
    }
    puVar11[6] = 0x90;
    *(undefined2 *)(uVar4 + 0x2d4) = 0x90;
    if (local_c != 0x17) {
      return;
    }
    puVar11[7] = 0x90;
    *(undefined2 *)(uVar4 + 0x2d6) = 0x90;
    return;
  case 0x19:
  case 0x1a:
    goto switchD_1004aa1c_caseD_19;
  }
  puVar11[1] = uVar6;
switchD_1004aa1c_caseD_19:
  FUN_1004a6ea(uVar4,param_2,bVar5);
  return;
}

