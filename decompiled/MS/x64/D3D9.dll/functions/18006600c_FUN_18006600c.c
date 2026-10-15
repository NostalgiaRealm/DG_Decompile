/*
 * FUN_18006600c at 18006600c
 * undefined __fastcall FUN_18006600c(undefined8 param_1, longlong param_2, uint param_3, longlong param_4, byte param_5)
 * Address ranges: 18006600c-1800665ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006600c(undefined8 param_1,longlong param_2,uint param_3,longlong param_4,byte param_5)

{
  uint uVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  longlong lVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  ulonglong uVar9;
  ushort uVar10;
  longlong lVar11;
  byte bVar12;
  ulonglong uVar13;
  uint uVar14;
  ushort *puVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  undefined1 local_res8 [4];
  short sStackX_c;
  undefined2 uStackX_e;
  longlong local_res10;
  int local_58;
  int local_54;
  int local_50;
  uint local_48 [4];
  
  bVar12 = param_5;
  uVar13 = (ulonglong)param_5;
  lVar11 = 0;
  uVar1 = *(uint *)(param_2 + (ulonglong)param_3 * 4);
  bVar6 = (byte)param_3 * '\x04';
  puVar15 = (ushort *)(((ulonglong)param_3 + (uVar13 + 2) * 8) * 0x10 + param_4);
  if (param_5 == 0) {
    local_48[0] = uVar1 >> 0x16 & 7;
    local_48[1] = uVar1 >> 10 & 7;
    local_48[2] = uVar1 >> 0xd & 7;
    local_58 = (*(uint *)(param_2 + 0x20) >> (bVar6 & 0x1f) & 0xf) << 4;
    local_54 = (*(uint *)(param_2 + 0x24) >> (bVar6 & 0x1f) & 0xf) << 4;
    uVar14 = *(uint *)(param_2 + 0x28);
  }
  else {
    local_48[0] = uVar1 >> 0x19 & 7;
    local_48[1] = uVar1 >> 0x10 & 7;
    local_48[2] = uVar1 >> 0x13 & 7;
    local_58 = (*(uint *)(param_2 + 0x2c) >> (bVar6 & 0x1f) & 0xf) << 4;
    local_54 = (*(uint *)(param_2 + 0x30) >> (bVar6 & 0x1f) & 0xf) << 4;
    uVar14 = *(uint *)(param_2 + 0x34);
  }
  local_50 = (uVar14 >> (bVar6 & 0x1f) & 0xf) << 4;
  uVar2 = (ushort)param_5;
  uStackX_e = (undefined2)((ulonglong)param_1 >> 0x30);
  _local_res8 = (uint6)(ushort)(short)param_1;
  uVar14 = uVar1 >> 5;
  if (param_5 == 0) {
    uVar14 = uVar1;
  }
  param_5 = 0;
  uVar14 = uVar14 & 0x1f;
  uVar7 = 0x10;
  if ((uVar1 & 0x70000000) == 0x50000000) {
    uVar7 = 0x20;
  }
  local_res10 = uVar13 * 8 + 0x540;
  puVar3 = (ushort *)(uVar13 * 8 + 0x542 + param_4);
  *puVar15 = uVar7 | uVar2 << 8;
  do {
    uVar2 = 0;
    if (((*(byte *)(&local_58 + lVar11) & 0x20) == 0) && ((bVar12 == 0 || (uVar14 == 0x18)))) {
      uVar17 = 0x50;
      uVar16 = 0x40;
      uVar7 = 0x60;
      uVar18 = 0x30;
    }
    else {
      uVar17 = 0x150;
      uVar2 = 0x100;
      uVar7 = 0x160;
      uVar18 = 0x130;
      uVar16 = 0x140;
    }
    uVar1 = local_48[lVar11];
    uVar10 = (*(ushort *)(&local_58 + lVar11) & 0x10) << 5;
    if (uVar1 == 0) {
      uVar9 = (ulonglong)param_5;
      uVar17 = uVar18;
LAB_1800662d9:
      puVar15[lVar11 + 1] = uVar10 | uVar17;
    }
    else if (uVar1 == 1) {
      lVar5 = local_res10;
      if (bVar12 == 0) {
        if (uVar2 != 0) goto LAB_18006629d;
      }
      else if (uVar2 == 0) {
        if (uVar14 == 0x18) {
          lVar5 = 0x54c;
        }
      }
      else {
LAB_18006629d:
        lVar5 = 0x548;
      }
      uVar9 = (ulonglong)param_5;
      puVar15[lVar11 + 1] = uVar10 ^ *(ushort *)(lVar5 + param_4);
      *(undefined2 *)(local_res8 + lVar11 * 2) = 0x10;
    }
    else if (uVar1 == 2) {
      uVar2 = (byte)((byte)param_3 | 0x70) | uVar10 | uVar2;
      puVar15[lVar11 + 1] = uVar2;
      uVar9 = CONCAT71((uint7)(byte)(uVar2 >> 8),1);
      param_5 = 1;
    }
    else if ((uVar1 == 3) || (uVar7 = uVar16, uVar1 == 4)) {
      uVar9 = (ulonglong)param_5;
      puVar15[lVar11 + 1] = uVar10 | uVar7;
    }
    else {
      iVar8 = uVar1 - 5;
      if (iVar8 == 0) {
        puVar4 = puVar3;
        if (bVar12 == 0) {
          if (uVar2 != 0) goto LAB_180066213;
        }
        else if (uVar2 == 0) {
          if (uVar14 == 0x18) {
            puVar4 = (ushort *)(param_4 + 0x54e);
          }
        }
        else {
LAB_180066213:
          puVar4 = (ushort *)(param_4 + 0x54a);
        }
        uVar9 = (ulonglong)param_5;
        puVar15[lVar11 + 1] = uVar10 ^ *puVar4;
        *(undefined2 *)(local_res8 + lVar11 * 2) = 0x20;
      }
      else {
        uVar9 = (ulonglong)CONCAT31((int3)((uint)iVar8 >> 8),param_5);
        if (iVar8 == 1) goto LAB_1800662d9;
      }
    }
    lVar11 = lVar11 + 1;
  } while (lVar11 != 3);
  uVar2 = 0;
  uVar7 = uVar2;
  if ((char)uVar9 != '\0') {
    uVar7 = *(ushort *)(param_4 + 0x544);
  }
  puVar15[4] = uVar7;
  if ((char)uVar9 != '\0') {
    uVar2 = *(ushort *)(param_4 + 0x546);
  }
  puVar15[5] = uVar2;
  puVar15[6] = 0;
  puVar15[7] = 0;
  if (bVar12 == 0) {
    *(undefined4 *)(param_4 + 0x544) = 0;
  }
  if (uVar14 < 0xe) {
    if (uVar14 == 0xd) {
LAB_180066510:
      uVar2 = (ushort)param_3 & 0xff | 0x170;
LAB_180066518:
      puVar15[1] = uVar2;
      goto LAB_1800664b5;
    }
    if (uVar14 < 8) {
      if (uVar14 != 7) {
        if (uVar14 == 1) {
          puVar15[2] = *(ushort *)(param_4 + 0x548);
        }
        else if (uVar14 != 2) {
          if (uVar14 == 3) {
            uVar2 = puVar15[3];
            uVar9 = (ulonglong)uVar2;
            if (((byte)uVar2 & 0xf0) != 0x70) {
              if ((*puVar15 & 0xf0) == 0x10) {
                if (sStackX_c == 0x20) {
                  FUN_180065fa0(uVar9,param_4,param_3,bVar12);
                  bVar12 = (byte)uVar13;
                }
                else {
                  *(ushort *)(local_res10 + param_4) = uVar2;
                }
              }
              if ((*puVar15 & 0xf0) != 0x20) goto LAB_1800663f1;
              if (sStackX_c != 0x10) {
                *puVar3 = puVar15[3];
                goto LAB_1800663f1;
              }
            }
            FUN_180065fa0(uVar9,param_4,param_3,bVar12);
LAB_1800663f1:
            puVar15[1] = 0;
            puVar15[2] = 0;
            return;
          }
          if (((uVar14 != 4) && (uVar14 != 5)) && (uVar14 != 6)) goto LAB_18006655a;
          goto LAB_180066384;
        }
        uVar2 = puVar15[2];
        uVar9 = (ulonglong)uVar2;
        if (((byte)uVar2 & 0xf0) != 0x70) {
          if ((*puVar15 & 0xf0) == 0x10) {
            if (local_res8._2_2_ == 0x20) {
              FUN_180065fa0(uVar9,param_4,param_3,bVar12);
              bVar12 = (byte)uVar13;
            }
            else {
              *(ushort *)(local_res10 + param_4) = uVar2;
            }
          }
          if ((*puVar15 & 0xf0) != 0x20) goto LAB_18006646d;
          if (local_res8._2_2_ != 0x10) {
            *puVar3 = puVar15[2];
            goto LAB_18006646d;
          }
        }
        FUN_180065fa0(uVar9,param_4,param_3,bVar12);
LAB_18006646d:
        puVar15[3] = 0;
        puVar15[1] = 0;
        return;
      }
    }
    else if (((uVar14 != 8) && (uVar14 != 9)) && ((uVar14 != 10 && (uVar14 != 0xb)))) {
      if (uVar14 != 0xc) goto LAB_18006655a;
      puVar15[1] = 0x130;
      goto LAB_1800664b5;
    }
  }
  else {
    if (uVar14 < 0x16) {
      if (uVar14 != 0x15) {
        if (uVar14 == 0xe) {
          puVar15[1] = 0x160;
          goto LAB_1800664b5;
        }
        if (uVar14 == 0xf) goto LAB_180066510;
        if (uVar14 == 0x10) {
          uVar2 = *(ushort *)(param_4 + 0x548);
          goto LAB_180066518;
        }
        if (((uVar14 != 0x12) && (uVar14 != 0x13)) && (uVar14 != 0x14)) goto LAB_18006655a;
      }
      if (((byte)puVar15[2] & 0xf0) == 0xa0) {
        uVar2 = *(ushort *)(param_4 + 0x548);
      }
      else {
        uVar2 = puVar15[2] | 0x100;
      }
      uVar9 = (ulonglong)uVar2;
      puVar15[1] = uVar2;
      goto LAB_1800664b5;
    }
    if ((uVar14 == 0x16) || (uVar14 == 0x17)) {
      lVar11 = 0x548;
      puVar15[1] = 0;
      if (bVar12 == 0) {
        lVar11 = 0x540;
      }
      uVar2 = *(ushort *)(lVar11 + param_4);
      puVar15[3] = uVar2;
      if (((byte)uVar2 & 0xf0) == 0x70) {
        FUN_180065fa0((ulonglong)uVar2,param_4,param_3,bVar12);
        bVar12 = (byte)uVar13;
      }
      else {
        if ((*puVar15 & 0xf0) == 0x10) {
          *(ushort *)(local_res10 + param_4) = uVar2;
        }
        if ((*puVar15 & 0xf0) == 0x20) {
          *puVar3 = puVar15[3];
        }
      }
      if (bVar12 != 0) {
        return;
      }
      puVar15[6] = 0x90;
      *(undefined2 *)(param_4 + 0x544) = 0x90;
      if (uVar14 != 0x17) {
        return;
      }
      puVar15[7] = 0x90;
      *(undefined2 *)(param_4 + 0x546) = 0x90;
      return;
    }
    if (uVar14 != 0x18) {
      if ((uVar14 != 0x19) && (uVar14 != 0x1a)) {
LAB_18006655a:
        *puVar15 = 0;
        return;
      }
      goto LAB_1800664b5;
    }
  }
LAB_180066384:
  puVar15[1] = 0;
LAB_1800664b5:
  FUN_180065fa0(uVar9,param_4,param_3,bVar12);
  return;
}

