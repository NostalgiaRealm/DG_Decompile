/*
 * FUN_1800f4444 at 1800f4444
 * uint __fastcall FUN_1800f4444(undefined8 param_1, longlong param_2, byte * param_3, uint param_4, uint param_5)
 * Address ranges: 1800f4444-1800f4791
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800f4444(undefined8 param_1,longlong param_2,byte *param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  
  uVar8 = 0xffffffff;
  uVar5 = -(uint)((*param_3 & 1) != 0);
  uVar3 = 0;
LAB_1800f4497:
  do {
    if (((uVar5 != 0xffffffff) && (param_4 * 8 <= uVar5)) || (uVar8 != 0xffffffff)) {
      return uVar8;
    }
    if (uVar5 != 0xffffffff) {
      uVar9 = uVar5 & 0xffffffc0;
      uVar3 = -1L << ((byte)uVar5 & 0x3f);
      for (puVar12 = (ulonglong *)(param_3 + (ulonglong)(uVar5 >> 6) * 8);
          puVar12 < param_3 + param_4; puVar12 = puVar12 + 1) {
        uVar3 = *puVar12 & uVar3;
        lVar1 = 0;
        if (uVar3 != 0) {
          for (; (uVar3 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
          }
        }
        if (uVar3 != 0) {
          uVar9 = uVar9 + (int)lVar1;
          break;
        }
        uVar9 = uVar9 + 0x40;
        uVar3 = 0xffffffffffffffff;
      }
      uVar3 = (ulonglong)uVar9;
      if (param_5 + 0x3f >> 6 <= uVar9 - uVar5) {
        uVar4 = uVar5 << 6;
        uVar9 = uVar4;
        if ((*(byte *)(param_2 + (ulonglong)uVar5 * 8) & 1) != 0) {
          uVar9 = 0xffffffff;
        }
LAB_1800f4523:
        do {
          if ((uVar9 != 0xffffffff) && (uVar3 << 6 <= (ulonglong)uVar9)) break;
          puVar12 = (ulonglong *)(param_2 + uVar3 * 8);
          if (uVar9 == 0xffffffff) {
            uVar9 = uVar4 & 0xffffffc0;
            uVar13 = -1L << ((byte)uVar4 & 0x3f);
            for (puVar10 = (ulonglong *)(param_2 + (ulonglong)(uVar4 >> 6) * 8); puVar10 < puVar12;
                puVar10 = puVar10 + 1) {
              uVar13 = ~*puVar10 & uVar13;
              lVar1 = 0;
              if (uVar13 != 0) {
                for (; (uVar13 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
                }
              }
              if (uVar13 != 0) {
                uVar9 = uVar9 + (int)lVar1;
                break;
              }
              uVar9 = uVar9 + 0x40;
              uVar13 = 0xffffffffffffffff;
            }
            goto LAB_1800f4523;
          }
          uVar13 = -1L << ((byte)uVar9 & 0x3f);
          uVar4 = uVar9 & 0xffffffc0;
          for (puVar10 = (ulonglong *)(param_2 + (ulonglong)(uVar9 >> 6) * 8); puVar10 < puVar12;
              puVar10 = puVar10 + 1) {
            uVar13 = *puVar10 & uVar13;
            lVar1 = 0;
            if (uVar13 != 0) {
              for (; (uVar13 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
              }
            }
            if (uVar13 != 0) {
              uVar4 = uVar4 + (int)lVar1;
              break;
            }
            uVar4 = uVar4 + 0x40;
            if ((param_5 != 0) && (param_5 < uVar4 - uVar9)) break;
            uVar13 = 0xffffffffffffffff;
          }
          if (param_5 <= uVar4 - uVar9) goto LAB_1800f4609;
          uVar9 = 0xffffffff;
        } while( true );
      }
      goto LAB_1800f4716;
    }
    uVar13 = -1L << ((byte)uVar3 & 0x3f);
    uVar5 = (uint)uVar3 & 0xffffffc0;
    for (puVar12 = (ulonglong *)(param_3 + (uVar3 >> 6) * 8); puVar12 < param_3 + param_4;
        puVar12 = puVar12 + 1) {
      uVar13 = ~*puVar12 & uVar13;
      lVar1 = 0;
      if (uVar13 != 0) {
        for (; (uVar13 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
        }
      }
      if (uVar13 != 0) {
        uVar5 = uVar5 + (int)lVar1;
        break;
      }
      uVar5 = uVar5 + 0x40;
      uVar13 = 0xffffffffffffffff;
    }
  } while( true );
LAB_1800f4609:
  uVar5 = uVar9 + param_5;
  if (uVar9 < uVar5) {
    uVar8 = uVar9;
    do {
      bVar2 = (byte)uVar8;
      uVar4 = uVar8 >> 6;
      uVar8 = (uVar8 & 0xffffffc0) + 0x40;
      uVar6 = -1L << (bVar2 & 0x3f);
      uVar13 = uVar6 & 0xffffffffffffffffU >> (0x40 - ((byte)uVar5 & 0x3f) & 0x3f);
      if (uVar8 <= uVar5) {
        uVar13 = uVar6;
      }
      puVar12 = (ulonglong *)(param_2 + (ulonglong)uVar4 * 8);
      *puVar12 = *puVar12 | uVar13;
    } while (uVar8 < uVar5);
  }
  uVar13 = (ulonglong)uVar9 + 0x3f >> 6;
  uVar8 = uVar5 >> 6;
  if ((uint)uVar13 < uVar8) {
    do {
      uVar11 = uVar13 >> 6;
      uVar7 = -1L << ((byte)uVar13 & 0x3f);
      uVar4 = ((uint)uVar13 & 0xffffffc0) + 0x40;
      uVar13 = (ulonglong)uVar4;
      uVar6 = 0xffffffffffffffffU >> (0x40 - ((byte)uVar8 & 0x3f) & 0x3f) & uVar7;
      if (uVar4 <= uVar8) {
        uVar6 = uVar7;
      }
      *(ulonglong *)(param_3 + uVar11 * 8) = *(ulonglong *)(param_3 + uVar11 * 8) | uVar6;
    } while (uVar4 < uVar8);
  }
  if ((uVar5 & 0x3f) == 0) {
    uVar8 = uVar8 - 1;
  }
  uVar5 = uVar9 >> 6 & 0x3f;
  if (*(longlong *)(param_2 + (ulonglong)(uVar9 >> 6) * 8) == -1) {
    uVar13 = *(ulonglong *)(param_3 + (ulonglong)(uVar9 >> 0xc) * 8) | 1L << uVar5;
  }
  else {
    uVar13 = *(ulonglong *)(param_3 + (ulonglong)(uVar9 >> 0xc) * 8) & ~(1L << uVar5);
  }
  *(ulonglong *)(param_3 + (ulonglong)(uVar9 >> 0xc) * 8) = uVar13;
  if (*(longlong *)(param_2 + (ulonglong)uVar8 * 8) == -1) {
    uVar13 = *(ulonglong *)(param_3 + (ulonglong)(uVar8 >> 6) * 8) | 1L << (uVar8 & 0x3f);
  }
  else {
    uVar13 = *(ulonglong *)(param_3 + (ulonglong)(uVar8 >> 6) * 8) & ~(1L << (uVar8 & 0x3f));
  }
  *(ulonglong *)(param_3 + (ulonglong)(uVar8 >> 6) * 8) = uVar13;
  uVar8 = uVar9;
LAB_1800f4716:
  uVar5 = 0xffffffff;
  goto LAB_1800f4497;
}

