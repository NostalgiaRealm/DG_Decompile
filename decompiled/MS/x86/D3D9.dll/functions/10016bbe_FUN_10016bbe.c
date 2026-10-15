/*
 * FUN_10016bbe at 10016bbe
 * undefined4 __fastcall FUN_10016bbe(char * param_1)
 * Address ranges: 10016bbe-10016f5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10016bbe(char *param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  byte bVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined3 uVar12;
  byte bVar13;
  byte bVar16;
  uint uVar14;
  uint uVar15;
  uint uVar17;
  uint local_18;
  uint local_14;
  uint local_10;
  byte local_7;
  bool local_5;
  
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  local_5 = *(int *)(param_1 + 0x1c) == 0;
  uVar3 = *(uint *)(*(int *)(param_1 + 0x14) + 4);
  uVar17 = (uVar3 >> 0x14 & 0x700 | uVar3 & 0x1800) >> 8;
  uVar14 = uVar3 & 0x7ff;
  local_10 = uVar3 >> 0x10 & 0xffffff0f;
  uVar10 = local_10;
  if (((*(int *)(param_1 + 0x1c) == 0) && ((int)uVar3 < 0)) && (iVar2 + 1U < 0x81)) {
    if (((uVar17 == 0) || (uVar17 == 3)) ||
       ((uVar17 == 4 || ((uVar17 == 5 || (bVar4 = false, uVar17 == 6)))))) {
      bVar4 = true;
    }
    uVar10 = uVar3 & 0xf0000;
    if ((uVar10 == 0) || ((uVar10 != 0x10000 && (uVar17 == 3)))) {
      local_7 = 0;
    }
    else {
      local_7 = 1;
    }
    if (((*(short *)(param_1 + 0x18) == 0x13) && (uVar10 != 0x30000)) && (uVar10 != 0x20000)) {
      uVar10 = 0;
    }
    else {
      uVar10 = CONCAT31((uint3)(byte)((ushort)*(short *)(param_1 + 0x18) >> 8),1);
    }
    if (((bVar4) && ((local_7 & (byte)uVar10) != 0)) &&
       (((uVar3 & 0xf000000) == 0 && (uVar3 & 0xf00000) == 0 &&
        (uVar10 = (uint)*(ushort *)
                         (*(int *)(param_1 + 4) + ((uint)(*param_1 == '\0') + uVar17 * 2) * 2),
        uVar14 < uVar10)))) {
      if (uVar17 != 0) {
        local_10 = CONCAT31((int3)(local_10 >> 8),(byte)local_10 & param_1[0x28]);
      }
      if (param_1[0x2a] != '\0') {
        param_1[0x29] = param_1[0x29] & (byte)local_10;
      }
      local_5 = true;
      uVar10 = local_10;
    }
  }
  local_18 = 0;
  bVar4 = local_5;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      if (!bVar4) goto LAB_10016f48;
      uVar10 = *(uint *)(param_1 + 0x14);
      bVar4 = false;
      local_5 = false;
      uVar3 = *(uint *)(uVar10 + 8 + local_18 * 4);
      if ((int)uVar3 < 0) {
        uVar11 = (uVar3 >> 0x14 & 0x700 | uVar3 & 0x1800) >> 8;
        if (((uVar11 == 0) || (uVar11 == 1)) || ((uVar11 == 2 || (uVar11 == 3)))) {
          bVar13 = 1;
          if (uVar11 != 2) goto LAB_10016d52;
LAB_10016d5d:
          bVar4 = true;
        }
        else {
          bVar13 = 0;
LAB_10016d52:
          bVar4 = false;
          if ((uVar3 & 0x2000) == 0) goto LAB_10016d5d;
        }
        if (((uVar3 & 0xf000000) == 0) || (bVar6 = false, (uVar3 & 0xf000000) == 0x1000000)) {
          bVar6 = true;
        }
        uVar8 = uVar3 & 0x7ff;
        uVar9 = uVar3 & 0xff0000;
        if ((uVar11 != 3) || (bVar5 = 0, uVar9 == 0)) {
          bVar5 = 1;
        }
        bVar16 = param_1[0x29];
        uVar10 = CONCAT11(bVar16,bVar16) & 0xffff08ff;
        uVar15 = CONCAT11(-((char)(uVar10 >> 8) != '\0') & '\x01' << (sbyte)(uVar9 >> 0x16) |
                          -((bVar16 & 4) != 0) & '\x01' << ((byte)(uVar9 >> 0x14) & 3),(char)uVar10)
                 & 0xffffff01;
        bVar7 = '\x01' << ((byte)(uVar9 >> 0x10) & 3);
        uVar10 = CONCAT31((int3)(uVar9 >> 8),bVar7);
        bVar16 = (byte)(uVar15 >> 8) | -((bVar16 & 2) != 0) & '\x01' << ((byte)(uVar9 >> 0x12) & 3)
                 | -((char)uVar15 != '\0') & bVar7;
        if (((((bool)(bVar13 & bVar5)) && (bVar4)) && (bVar6)) &&
           (uVar10 = (uint)*(ushort *)
                            (*(int *)(param_1 + 4) + ((uint)(*param_1 == '\0') + uVar11 * 2) * 2),
           uVar8 < uVar10)) {
          uVar9 = 0xff;
          if (local_18 == *(int *)(param_1 + 0x20) - 1U) {
            local_14 = *(uint *)(param_1 + 0x24);
            uVar10 = 0;
            if (local_14 != 0) goto LAB_10016e58;
          }
          else {
            local_14 = 1;
LAB_10016e58:
            uVar15 = 0;
            uVar9 = (uint)CONCAT11(bVar16,0xff);
            do {
              uVar12 = (undefined3)(uVar9 >> 8);
              if (uVar11 == 0) {
                uVar10 = *(int *)(param_1 + 0xc) + uVar8;
                uVar9 = CONCAT31(uVar12,(byte)uVar9 & *(byte *)(uVar10 + 0x20 + uVar15));
              }
              else if (uVar11 == 1) {
                uVar9 = uVar9 & 0xffffff0f;
                uVar10 = *(int *)(param_1 + 0xc) + uVar15;
                pbVar1 = (byte *)(uVar8 + 0x10 + uVar10);
                *pbVar1 = *pbVar1 | (byte)(uVar9 >> 8);
              }
              else if (uVar11 == 2) {
                uVar9 = uVar9 & 0xffffff0f;
                uVar10 = *(int *)(param_1 + 0xc) + uVar15;
                pbVar1 = (byte *)(uVar8 + 0x41 + uVar10);
                *pbVar1 = *pbVar1 | (byte)(uVar9 >> 8);
              }
              else {
                uVar10 = uVar11 - 3;
                if (uVar10 == 0) {
                  uVar10 = *(int *)(param_1 + 0xc) + uVar8;
                  uVar9 = CONCAT31(uVar12,(byte)uVar9 & *(byte *)(uVar10 + 0x40 + uVar15));
                }
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < local_14);
          }
          if (((byte)uVar9 & bVar16) == bVar16) {
            if ((uVar3 & 0x2000) != 0) {
              uVar10 = *(uint *)(param_1 + 0xc);
              *(undefined1 *)(uVar10 + 0x44e) = 1;
            }
            bVar4 = true;
            local_5 = true;
            goto LAB_10016ed5;
          }
        }
        bVar4 = false;
      }
LAB_10016ed5:
      local_18 = local_18 + 1;
    } while (local_18 < *(uint *)(param_1 + 0x20));
  }
  if (bVar4) {
    bVar13 = (byte)local_10;
    if (uVar17 == 0) {
      pbVar1 = (byte *)(*(int *)(param_1 + 0xc) + 0x20 + uVar14);
      *pbVar1 = *pbVar1 | bVar13;
    }
    else if (uVar17 == 3) {
      uVar10 = *(uint *)(param_1 + 0xc);
      pbVar1 = (byte *)(uVar10 + 0x40 + uVar14);
      *pbVar1 = *pbVar1 | bVar13;
    }
    else if (uVar17 == 4) {
      uVar10 = *(uint *)(param_1 + 0xc);
      pbVar1 = (byte *)(uVar10 + 0x441 + uVar14);
      *pbVar1 = *pbVar1 | bVar13;
    }
    else if (uVar17 == 5) {
      uVar10 = *(uint *)(param_1 + 0xc);
      pbVar1 = (byte *)(uVar10 + 0x444 + uVar14);
      *pbVar1 = *pbVar1 | bVar13;
    }
    else if (uVar17 == 6) {
      uVar10 = *(uint *)(param_1 + 0xc);
      pbVar1 = (byte *)(uVar10 + 0x446 + uVar14);
      *pbVar1 = *pbVar1 | bVar13;
    }
  }
LAB_10016f48:
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x20) * 4 + 8;
  return CONCAT31((int3)(uVar10 >> 8),local_5);
}

