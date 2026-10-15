/*
 * FUN_1800551ec at 1800551ec
 * undefined __fastcall FUN_1800551ec(uint * param_1, longlong * param_2, uint param_3, uint * param_4)
 * Address ranges: 1800551ec-1800556d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800551ec(uint *param_1,longlong *param_2,uint param_3,uint *param_4)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  char cVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  byte local_d8;
  uint local_d4;
  uint local_d0;
  uint auStack_c8 [4];
  uint local_b8 [32];
  
  uVar6 = (ulonglong)(((int)param_3 >> 0x1f & 1U) + 1);
  if ((int)param_3 < 0) {
    local_b8[1] = *param_4;
    param_4 = param_4 + 2;
  }
  if (((param_3 & 0x7ff) == 0x26) || (local_d0 = 1, (param_3 & 0x7ff) == 0x4d)) {
    local_d0 = 2;
  }
  local_d4 = 0;
  uVar17 = 0;
  do {
    uVar7 = *param_4;
    param_4 = param_4 + 2;
    uVar11 = (ulonglong)uVar7;
    if (uVar7 == 0) break;
    if (uVar17 == 0) {
      if (uVar7 != 0xffffffff) goto LAB_180055297;
    }
    else {
      while (uVar7 == 0xffffffff) {
        uVar7 = *param_4;
        uVar11 = (ulonglong)uVar7;
        param_4 = param_4 + 2;
      }
LAB_180055297:
      uVar10 = *param_4;
      uVar8 = (uint)uVar11;
      if ((uVar11 & 0x40000000) == 0) {
        param_4 = param_4 + 2;
        uVar9 = 0;
        local_d8 = 0;
      }
      else {
        uVar9 = param_4[2];
        puVar12 = param_4 + 4;
        if (uVar9 == 0xffffffff) {
          do {
            puVar5 = puVar12;
            uVar9 = *puVar5;
            puVar12 = puVar5 + 2;
          } while (uVar9 == 0xffffffff);
          param_4 = puVar5 + 4;
        }
        else {
          param_4 = param_4 + 6;
        }
        local_d8 = (byte)*puVar12;
      }
      uVar16 = (uint)(uVar11 >> 0x10) & 3;
      uVar14 = uVar8 & 0xff;
      if (0x10000 < (uVar8 & 0x30000)) {
        uVar14 = (uint)(uVar11 >> 0xe) & 3;
      }
      local_b8[uVar6 + 1] = uVar14;
      local_d4 = (uint)(uVar11 >> 0x12) & 3;
      uVar14 = ~(uint)(uVar11 >> 0x1c) & 2;
      uVar7 = uVar7 & 0x33f00 |
              (uint)(byte)((('\x01' << ((byte)(uVar11 >> 0x14) & 7)) - 1U & (byte)uVar10) <<
                          (sbyte)local_d4);
      local_b8[uVar6 + 2] = uVar8 & 0xff;
      if ((uVar11 & 0x40000000) == 0) {
        iVar3 = 1;
        local_b8[uVar6] = uVar7 << 4 | uVar14;
        uVar7 = uVar8;
      }
      else {
        uVar7 = (uVar7 | 0x600000) << 4;
        local_b8[uVar6] = uVar7 | uVar14;
        uVar7 = FUN_180055104(uVar9,CONCAT31((int3)(uVar7 >> 8),local_d8),1,(ulonglong)uVar14,0,0);
        local_b8[(uVar16 + 1) + uVar6] = uVar7;
        iVar3 = 3;
        local_b8[(uVar16 + 2) + uVar6] = uVar9 & 0xff;
        uVar7 = uVar8;
      }
      uVar6 = (ulonglong)((int)uVar6 + iVar3 + uVar16);
    }
    uVar17 = uVar17 + 1;
  } while (uVar17 < local_d0);
  if (uVar7 != 0) {
    uVar17 = *param_4;
    while (uVar17 != 0) {
      puVar5 = param_4 + 2;
      puVar12 = puVar5;
      if (uVar17 != 0xffffffff) {
        uVar7 = uVar17 >> 8 & 0x3f;
        puVar12 = param_4 + 4;
        bVar15 = (byte)*puVar5;
        cVar13 = (char)local_d4;
        if ((*puVar5 & 0x100) != 0) {
          for (; cVar13 != '\0'; cVar13 = cVar13 + -1) {
            bVar15 = bVar15 & 3 | bVar15 << 2;
          }
        }
        bVar2 = (byte)*puVar5;
        if ((*puVar5 & 0x100) != 0) {
          bVar2 = (byte)*puVar5 + (char)local_d4;
        }
        if (uVar7 == 4) {
          uVar11 = 0;
          uVar7 = uVar17 >> 0x14 & 7;
          if ((uVar17 >> 0x14 & 7) != 0) {
            do {
              uVar10 = *puVar12;
              puVar12 = puVar12 + 2;
              auStack_c8[uVar11] =
                   uVar10 & (~(uVar17 << 4) | 0x7fffffff) ^ (int)uVar17 >> 0x1f & 0x80000000U;
              uVar10 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar10;
            } while (uVar10 < uVar7);
          }
          if ((uVar17 & 0x400000) == 0) {
            bVar15 = 0;
            uVar17 = 0x4001;
          }
          else {
            uVar8 = uVar17 & 0x700000;
            uVar10 = (uint)(uVar8 == 0x100000);
            if (uVar8 == 0x400000) {
              uVar10 = 2;
            }
            if ((uVar17 >> 0x1c & 1) == 0) {
              uVar17 = 0x4e41 - (uVar8 != 0x100000);
              if (uVar8 == 0x400000) {
                uVar17 = 0x4e46;
              }
            }
            else {
              bVar15 = 0xe4;
              uVar17 = (bVar2 & 3) << 4 | uVar10 | 0x4008;
            }
          }
          uVar10 = 0;
          local_b8[uVar6] = uVar17;
          if (uVar7 != 0) {
            do {
              cVar13 = (char)uVar10;
              uVar17 = uVar10 + (int)uVar6 + 1;
              uVar10 = uVar10 + 1;
              local_b8[uVar17] = auStack_c8[bVar15 >> (cVar13 * '\x02' & 0x3fU) & 3];
            } while (uVar10 < uVar7);
          }
          iVar3 = uVar7 + 1;
        }
        else if ((uVar7 == 8) || (uVar7 == 9)) {
          uVar7 = *puVar12;
          puVar12 = param_4 + 6;
          if ((uVar17 >> 0x1e & 1) == 0) {
            uVar10 = 0;
            bVar4 = 0;
          }
          else {
            uVar10 = *puVar12;
            puVar5 = param_4 + 8;
            if (uVar10 == 0xffffffff) {
              do {
                puVar12 = puVar5;
                uVar10 = *puVar12;
                puVar5 = puVar12 + 2;
              } while (uVar10 == 0xffffffff);
              puVar12 = puVar12 + 4;
            }
            else {
              puVar12 = param_4 + 10;
            }
            bVar4 = (byte)*puVar5;
          }
          if ((uVar17 >> 0x1c & 1) != 0) {
            bVar15 = bVar2;
          }
          iVar3 = FUN_1800547c0(param_1,local_b8 + uVar6,(ulonglong)uVar17,uVar7,bVar15,uVar10,bVar4
                               );
        }
        else {
          if ((uVar17 >> 0x1e & 1) == 0) {
            uVar7 = 0;
            bVar4 = 0;
          }
          else {
            uVar7 = *puVar12;
            puVar5 = param_4 + 6;
            if (uVar7 == 0xffffffff) {
              do {
                puVar12 = puVar5;
                uVar7 = *puVar12;
                puVar5 = puVar12 + 2;
              } while (uVar7 == 0xffffffff);
              puVar12 = puVar12 + 4;
            }
            else {
              puVar12 = param_4 + 8;
            }
            bVar4 = (byte)*puVar5;
          }
          if ((uVar17 >> 0x1c & 1) != 0) {
            bVar15 = bVar2;
          }
          iVar3 = FUN_180054d2c(param_1,local_b8 + uVar6,(ulonglong)uVar17,bVar15,uVar7,bVar4);
        }
        uVar6 = (ulonglong)(uint)((int)uVar6 + iVar3);
      }
      param_4 = puVar12;
      uVar17 = *puVar12;
    }
  }
  uVar17 = ((uint)uVar6 & 0x7f) << 0x18 | param_3;
  local_b8[0] = (uVar17 ^ param_3) & 0x7ff ^ uVar17;
  if (((uint)uVar6 != 0) && ((char)param_2[3] != '\0')) {
    lVar1 = uVar6 * 4;
    if ((ulonglong)param_2[2] < (ulonglong)((param_2[1] - *param_2) + lVar1)) {
      FUN_1800556f4(param_2,lVar1);
    }
    puVar12 = local_b8;
    puVar5 = (uint *)param_2[1];
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar5 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar5 = puVar5 + 1;
    }
    param_2[1] = param_2[1] + lVar1;
  }
  return;
}

