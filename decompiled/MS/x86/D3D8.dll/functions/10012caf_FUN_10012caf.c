/*
 * FUN_10012caf at 10012caf
 * undefined4 __fastcall FUN_10012caf(char * param_1)
 * Address ranges: 10012caf-10013078
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10012caf(char *param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined3 uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint local_14;
  uint local_10;
  uint local_c;
  byte local_7;
  bool local_5;
  
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  local_5 = *(int *)(param_1 + 0x1c) == 0;
  uVar3 = *(uint *)(*(int *)(param_1 + 0x14) + 4);
  uVar12 = uVar3 & 0x70000000;
  uVar14 = uVar3 & 0x1fff;
  local_c = uVar3 >> 0x10 & 0xffffff0f;
  local_10 = local_c;
  if (((*(int *)(param_1 + 0x1c) == 0) && ((int)uVar3 < 0)) && (iVar2 + 1U < 0x81)) {
    if (((uVar12 == 0) || (uVar12 == 0x30000000)) ||
       ((uVar12 == 0x40000000 || ((uVar12 == 0x50000000 || (bVar5 = false, uVar12 == 0x60000000)))))
       ) {
      bVar5 = true;
    }
    uVar7 = uVar3 & 0xf0000;
    if ((uVar7 == 0) || ((uVar7 != 0x10000 && (uVar12 == 0x30000000)))) {
      local_7 = 0;
    }
    else {
      local_7 = 1;
    }
    if (((*(short *)(param_1 + 0x18) == 0x13) && (uVar7 != 0x30000)) && (uVar7 != 0x20000)) {
      local_10 = 0;
    }
    else {
      local_10 = CONCAT31((uint3)(byte)((ushort)*(short *)(param_1 + 0x18) >> 8),1);
    }
    if (((bVar5) && ((local_7 & (byte)local_10) != 0)) &&
       (((uVar3 & 0xf000000) == 0 && (uVar3 & 0xf00000) == 0 &&
        (local_10 = (uint)*(ushort *)
                           (*(int *)(param_1 + 4) +
                           ((uint)(*param_1 == '\0') + (uVar3 >> 0x1c & 7) * 2) * 2),
        uVar14 < local_10)))) {
      if (uVar12 != 0) {
        local_c = CONCAT31((int3)(local_c >> 8),(byte)local_c & param_1[0x28]);
      }
      if (param_1[0x2a] != '\0') {
        param_1[0x29] = param_1[0x29] & (byte)local_c;
      }
      local_5 = true;
      local_10 = local_c;
    }
  }
  local_14 = 0;
  bVar5 = local_5;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      if (!bVar5) goto LAB_10013064;
      local_10 = *(uint *)(param_1 + 0x14);
      bVar5 = false;
      local_5 = false;
      uVar3 = *(uint *)(local_10 + 8 + local_14 * 4);
      if ((int)uVar3 < 0) {
        uVar7 = uVar3 & 0x70000000;
        if (((uVar7 == 0) || (uVar7 == 0x10000000)) ||
           ((uVar7 == 0x20000000 || (uVar7 == 0x30000000)))) {
          local_7 = 1;
          if (uVar7 != 0x20000000) goto LAB_10012e53;
LAB_10012e5f:
          bVar5 = true;
        }
        else {
          local_7 = 0;
LAB_10012e53:
          bVar5 = false;
          if ((uVar3 & 0x2000) == 0) goto LAB_10012e5f;
        }
        if (((uVar3 & 0xf000000) == 0) || ((uVar3 & 0xf000000) == 0x1000000)) {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        uVar8 = uVar3 & 0x1fff;
        uVar9 = uVar3 & 0xff0000;
        if ((uVar7 == 0x30000000) && (uVar9 != 0)) {
          sVar4 = 0;
        }
        else {
          sVar4 = 1;
        }
        bVar11 = param_1[0x29];
        uVar13 = CONCAT11(-((bVar11 & 8) != 0) & '\x01' << (sbyte)(uVar9 >> 0x16),bVar11) &
                 0xffffff04;
        uVar13 = CONCAT11((byte)(uVar13 >> 8) |
                          -((char)uVar13 != '\0') & '\x01' << ((byte)(uVar9 >> 0x14) & 3),bVar11) &
                 0xffffff02;
        local_10 = CONCAT31((int3)(CONCAT22((short)(uVar7 >> 0x10),sVar4 << 8) >> 8),local_7);
        bVar11 = (byte)(uVar13 >> 8) |
                 -((char)uVar13 != '\0') & '\x01' << ((byte)(uVar9 >> 0x12) & 3) |
                 -((bVar11 & 1) != 0) & '\x01' << ((byte)(uVar9 >> 0x10) & 3);
        if (((((local_7 & (byte)sVar4) != 0) && (bVar5)) && (bVar6)) &&
           (local_10 = (uint)*(ushort *)
                              (*(int *)(param_1 + 4) +
                              ((uint)(*param_1 == '\0') + (uVar3 >> 0x1c & 7) * 2) * 2),
           uVar8 < local_10)) {
          uVar9 = 0xff;
          if (local_14 == *(int *)(param_1 + 0x20) - 1U) {
            local_10 = *(uint *)(param_1 + 0x24);
            if (local_10 != 0) goto LAB_10012f5e;
          }
          else {
            local_10 = 1;
LAB_10012f5e:
            uVar13 = 0;
            uVar9 = (uint)CONCAT11(bVar11,0xff);
            do {
              uVar10 = (undefined3)(uVar9 >> 8);
              if (uVar7 == 0) {
                uVar9 = CONCAT31(uVar10,(byte)uVar9 &
                                        *(byte *)(*(int *)(param_1 + 0xc) + uVar8 + 0x20 + uVar13));
              }
              else if (uVar7 == 0x10000000) {
                uVar9 = uVar9 & 0xffffff0f;
                pbVar1 = (byte *)(uVar8 + 0x10 + *(int *)(param_1 + 0xc) + uVar13);
                *pbVar1 = *pbVar1 | (byte)(uVar9 >> 8);
              }
              else if (uVar7 == 0x20000000) {
                uVar9 = uVar9 & 0xffffff0f;
                pbVar1 = (byte *)(uVar8 + 0x41 + *(int *)(param_1 + 0xc) + uVar13);
                *pbVar1 = *pbVar1 | (byte)(uVar9 >> 8);
              }
              else if (uVar7 == 0x30000000) {
                uVar9 = CONCAT31(uVar10,(byte)uVar9 &
                                        *(byte *)(*(int *)(param_1 + 0xc) + uVar8 + 0x40 + uVar13));
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < local_10);
          }
          if (((byte)uVar9 & bVar11) == bVar11) {
            if ((uVar3 & 0x2000) != 0) {
              local_10 = *(uint *)(param_1 + 0xc);
              *(undefined1 *)(local_10 + 0x44e) = 1;
            }
            bVar5 = true;
            local_5 = true;
            goto LAB_10012fe6;
          }
        }
        bVar5 = false;
      }
LAB_10012fe6:
      local_14 = local_14 + 1;
    } while (local_14 < *(uint *)(param_1 + 0x20));
  }
  if (bVar5) {
    bVar11 = (byte)local_c;
    if (uVar12 == 0) {
      pbVar1 = (byte *)(*(int *)(param_1 + 0xc) + 0x20 + uVar14);
      *pbVar1 = *pbVar1 | bVar11;
    }
    else if (uVar12 == 0x30000000) {
      local_10 = *(uint *)(param_1 + 0xc);
      pbVar1 = (byte *)(local_10 + 0x40 + uVar14);
      *pbVar1 = *pbVar1 | bVar11;
    }
    else if (uVar12 == 0x40000000) {
      local_10 = *(uint *)(param_1 + 0xc);
      pbVar1 = (byte *)(local_10 + 0x441 + uVar14);
      *pbVar1 = *pbVar1 | bVar11;
    }
    else if (uVar12 == 0x50000000) {
      local_10 = *(uint *)(param_1 + 0xc);
      pbVar1 = (byte *)(local_10 + 0x444 + uVar14);
      *pbVar1 = *pbVar1 | bVar11;
    }
    else if (uVar12 == 0x60000000) {
      local_10 = *(uint *)(param_1 + 0xc);
      pbVar1 = (byte *)(local_10 + 0x446 + uVar14);
      *pbVar1 = *pbVar1 | bVar11;
    }
  }
LAB_10013064:
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x20) * 4 + 8;
  return CONCAT31((int3)(local_10 >> 8),local_5);
}

