/*
 * FUN_10001877 at 10001877
 * undefined __fastcall FUN_10001877(int * param_1, uint param_2, uint param_3, uint param_4, uint param_5, int param_6, int param_7)
 * Address ranges: 10001877-10001d24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_10001877(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,
            int param_7)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulonglong uVar13;
  byte local_4c [16];
  undefined4 local_3c;
  uint local_38;
  int *local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  byte local_7;
  char local_6;
  char local_5;
  
  local_38 = param_5;
  local_34 = param_1;
  local_3c = param_2;
  uVar9 = param_5 >> 0x1d & 4;
  if (param_5 == 0xffffffff) {
    uVar9 = 8;
  }
  uVar10 = param_2 >> 0x1f;
  if (param_2 == 0xffffffff) {
    uVar10 = 2;
  }
  uVar9 = uVar9 | uVar10;
  local_10 = param_3 >> 8 | param_4 << 0x18;
  if (((param_3 >> 8 & 7) == 7) && (uVar9 == 0)) {
    uVar9 = 0xf;
  }
  iVar6 = uVar9 * 3;
  bVar7 = 0;
  local_c = 0;
  local_24 = (uint)(char)(&UNK_100d484c)[iVar6];
  local_2c = (uint)(char)(&UNK_100d484d)[iVar6];
  cVar1 = (&UNK_100d484e)[iVar6];
  local_1c = param_3 & 3;
  if (local_1c == 3) {
    bVar7 = 0x48;
    local_c = 0x48;
  }
  if (local_2c != -1) {
    if ((((&local_3c)[local_2c] & 0xf8) == 0) || (0xf < (byte)(&local_3c)[local_2c])) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    bVar7 = bVar7 | 0x44;
    if (!bVar3) {
      bVar7 = (byte)local_c;
    }
    local_c = (uint)bVar7;
  }
  if (local_24 != -1) {
    if ((((&local_3c)[local_24] & 0xf8) == 0) || (0xf < (byte)(&local_3c)[local_24])) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    uVar9 = (uint)(byte)((byte)local_c | 0x41);
    if (!bVar3) {
      uVar9 = local_c;
    }
    local_c = (uint)(byte)((byte)uVar9 | 0x42);
    if (7 < *(byte *)((int)&local_3c + local_24 * 4 + 1) - 8) {
      local_c = uVar9;
    }
  }
  if (local_2c == -1) {
    bVar7 = 0;
  }
  else {
    bVar7 = (byte)(&local_3c)[local_2c] & 7;
  }
  bVar7 = bVar7 << 3;
  local_14 = (uint)bVar7;
  uVar9 = local_30 >> 8;
  local_30 = local_30 & 0xffffff00;
  local_5 = '\0';
  local_6 = '\0';
  if (local_24 == -1) goto LAB_10001a4d;
  uVar10 = (&local_3c)[local_24];
  bVar8 = (byte)uVar10;
  if (-1 < (int)uVar10) {
    local_14 = (uint)(byte)(bVar7 | bVar8 & 7 | 0xc0);
    goto LAB_10001a4d;
  }
  if ((((uVar10 & 0x40000000) != 0) || (bVar8 == 4)) || (local_5 = '\0', bVar8 == 0xc)) {
    local_5 = '\x01';
  }
  local_7 = bVar8 & 7;
  bVar5 = local_7;
  if (local_5 != '\0') {
    bVar5 = 4;
  }
  local_14 = (uint)(bVar7 | bVar5);
  if (param_6 == 0) {
    if (bVar8 == 5) goto LAB_10001a14;
    if (bVar8 == 0xd) goto LAB_10001a0a;
  }
  else {
LAB_10001a0a:
    if ((param_6 < 0x80) && (-0x81 < param_6)) {
LAB_10001a14:
      local_14 = local_14 | 0x40;
    }
    else {
      local_14 = local_14 | 0x80;
    }
    local_6 = '\x01';
  }
  if (local_5 != '\0') {
    if ((uVar10 & 0x40000000) == 0) {
      local_30 = CONCAT31((int3)uVar9,0x24);
    }
    else {
      uVar9 = uVar10 >> 8 & 0xffffff07;
      local_30 = CONCAT31((int3)(uVar9 >> 8),
                          (char)uVar9 << 3 | (byte)(uVar10 >> 10) & 0xc0 | local_7);
    }
  }
LAB_10001a4d:
  if (local_1c == 2) {
    local_4c[0] = 0x66;
  }
  uVar9 = (uint)(local_1c == 2);
  uVar10 = 0;
  do {
    uVar13 = __aullshr((char)uVar10 * '\x04' + 0x14,param_4);
    if ((uVar13 & 0xf) != 0) {
      bVar7 = (&DAT_100d4847)[(uint)uVar13 & 0xf];
      if ((bVar7 == 0xf) && ((byte)local_c != 0)) {
        local_4c[uVar9] = (byte)local_c;
        uVar9 = uVar9 + 1;
        local_c = local_c & 0xffffff00;
      }
      local_4c[uVar9] = bVar7;
      uVar9 = uVar9 + 1;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 3);
  if ((byte)local_c != 0) {
    local_4c[uVar9] = (byte)local_c;
    uVar9 = uVar9 + 1;
  }
  local_28 = param_4 & 0xff;
  if ((local_2c == -1) && (local_24 == -1)) {
    local_20 = local_28 - 1;
    local_24 = local_28 - 1;
  }
  else {
    local_24 = local_28 - 2;
    local_20 = local_28 - 1;
  }
  local_10 = local_10 & 7;
  local_2c = param_3 >> 4 & 7;
  local_c = param_3 >> 0xc & 7;
  cVar2 = (char)local_10;
  if (param_7 < 0x80) {
    local_18 = 0;
    if (local_28 != 0) {
      local_38 = local_2c - 1;
      do {
        uVar10 = local_28;
        bVar7 = 0;
        if (local_18 == local_20) {
          bVar7 = (byte)local_14;
        }
        bVar7 = (byte)(param_4 >> ((char)local_18 * '\b' + 8U & 0x1f)) | bVar7;
        if (local_18 == local_24) {
          bVar8 = bVar7;
          if ((local_2c != 0) && (local_1c == 1)) {
            bVar8 = bVar7 ^ (byte)(1 << (local_38 & 0x1f));
          }
          bVar7 = bVar8;
          if ((local_10 != 0) && (bVar7 = cVar1 << (cVar2 - 1U & 0x1f) ^ bVar8, local_10 == 7)) {
            bVar7 = bVar8;
          }
          if (((local_c != 0) && (local_1c != 1)) && (-0x81 < param_7)) {
            bVar7 = bVar7 ^ (byte)(1 << (local_c - 1 & 0x1f));
          }
        }
        local_4c[uVar9] = bVar7;
        uVar9 = uVar9 + 1;
        local_18 = local_18 + 1;
      } while (local_18 < uVar10);
    }
  }
  else {
    uVar10 = 0;
    if (local_28 != 0) {
      bVar7 = cVar1 << (cVar2 - 1U & 0x1f);
      if (local_1c == 1) {
        do {
          uVar4 = local_28;
          bVar8 = 0;
          if (uVar10 == local_20) {
            bVar8 = (byte)local_14;
          }
          bVar8 = (byte)(param_4 >> ((char)uVar10 * '\b' + 8U & 0x1f)) | bVar8;
          if (uVar10 == local_24) {
            if (local_2c != 0) {
              bVar8 = bVar8 ^ (byte)(1 << (local_2c - 1 & 0x1f));
            }
            if ((local_10 != 0) && (local_10 != 7)) {
              bVar8 = bVar8 ^ bVar7;
            }
          }
          local_4c[uVar9] = bVar8;
          uVar9 = uVar9 + 1;
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar4);
      }
      else {
        uVar10 = 0;
        do {
          uVar4 = local_28;
          bVar8 = 0;
          if (uVar10 == local_20) {
            bVar8 = (byte)local_14;
          }
          bVar8 = (byte)(param_4 >> ((char)uVar10 * '\b' + 8U & 0x1f)) | bVar8;
          if (((uVar10 == local_24) && (local_10 != 0)) && (local_10 != 7)) {
            bVar8 = bVar8 ^ bVar7;
          }
          local_4c[uVar9] = bVar8;
          uVar9 = uVar9 + 1;
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar4);
      }
    }
  }
  uVar10 = local_c;
  if (local_5 != '\0') {
    local_4c[uVar9] = (byte)local_30;
    uVar9 = uVar9 + 1;
  }
  if (local_6 != '\0') {
    bVar7 = (byte)local_14 & 0xc0;
    if (bVar7 == 0x40) {
      local_4c[uVar9] = (byte)param_6;
      uVar9 = uVar9 + 1;
    }
    else if (bVar7 == 0x80) {
      *(int *)(local_4c + uVar9) = param_6;
      uVar9 = uVar9 + 4;
    }
  }
  if ((param_3 & 0x10000) != 0) {
    if ((((param_3 & 0x20000) == 0) && (local_1c != 1)) &&
       ((uVar10 == 0 || ((0x7f < param_7 || (param_7 < -0x80)))))) {
      if (((param_3 & 0x40000) == 0) && (local_1c != 2)) {
        *(int *)(local_4c + uVar9) = param_7;
        uVar9 = uVar9 + 4;
      }
      else {
        *(short *)(local_4c + uVar9) = (short)param_7;
        uVar9 = uVar9 + 2;
      }
    }
    else {
      local_4c[uVar9] = (byte)param_7;
      uVar9 = uVar9 + 1;
    }
  }
  if ((uint)local_34[2] < (local_34[1] - *local_34) + uVar9) {
    FUN_100017d3(local_34,uVar9);
  }
  pbVar11 = local_4c;
  pbVar12 = (byte *)local_34[1];
  for (uVar10 = uVar9; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pbVar12 = *pbVar11;
    pbVar11 = pbVar11 + 1;
    pbVar12 = pbVar12 + 1;
  }
  local_34[1] = local_34[1] + uVar9;
  return;
}

