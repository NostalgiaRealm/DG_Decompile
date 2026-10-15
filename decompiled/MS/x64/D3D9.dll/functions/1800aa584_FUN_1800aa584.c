/*
 * FUN_1800aa584 at 1800aa584
 * uint * __fastcall FUN_1800aa584(longlong param_1, uint * param_2, uint param_3, uint param_4, uint param_5, uint param_6, int param_7, byte param_8, byte param_9, byte param_10, byte param_11)
 * Address ranges: 1800aa584-1800aab58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1800aa584(longlong param_1,uint *param_2,uint param_3,uint param_4,uint param_5,
                    uint param_6,int param_7,byte param_8,byte param_9,byte param_10,byte param_11)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar1 = (ulonglong)param_3;
  if (((param_5 - 0x17 & 0xfffffffa) == 0) ||
     (((param_5 == 9 && (param_3 != 0x1c)) || (param_5 == 0xb)))) {
    uVar5 = 2;
  }
  else {
    uVar5 = 0;
  }
  if ((param_5 - 0x46 < 8) && ((0xdbU >> (param_5 - 0x46 & 0x1f) & 1) != 0)) {
    uVar6 = 4;
  }
  else {
    uVar6 = 0;
  }
  uVar7 = 1;
  uVar9 = 0x20;
  uVar10 = 8;
  if (param_5 != 0x44 && param_5 != 0x45) {
    uVar10 = 0;
  }
  if ((0x36 < param_5) ||
     (uVar8 = uVar9, (0x40020400010404U >> ((ulonglong)param_5 & 0x3f) & 1) == 0)) {
    uVar8 = 0;
  }
  if (((param_5 != 0x38) && (param_5 != 0x21)) && ((param_5 != 9 || (param_3 != 0x1c)))) {
    uVar9 = 0;
  }
  uVar3 = uVar7;
  if (((param_6 - 0x17 & 0xfffffffa) != 0) &&
     (((param_6 != 9 || (param_4 == 0x1c)) && (param_6 != 0xb)))) {
    uVar3 = 0;
  }
  uVar4 = 0x10;
  if ((param_6 < 0x37) && ((0x40020400010404U >> ((ulonglong)param_6 & 0x3f) & 1) != 0)) {
    uVar2 = 0x10;
  }
  else {
    uVar2 = 0;
  }
  if (((param_6 != 0x38) && (param_6 != 0x21)) && ((param_6 != 9 || (param_4 != 0x1c)))) {
    uVar4 = 0;
  }
  *param_2 = 0;
  uVar3 = uVar2 | uVar4 | uVar8 | uVar9 | uVar10 | uVar6 | uVar5 | uVar3;
  if (uVar3 < 6) {
    if (uVar3 == 5) {
      uVar5 = ((((-(uint)(param_8 != 0 || param_9 != 0) & 8 | (uint)param_11) << 2 |
                 -(uint)(*(char *)(param_1 + 0x1cf08) != '\0') & 2 | (uint)param_10) << 3 |
               (uint)param_9) * 2 | (uint)param_8) << 7 | 0x80000016;
    }
    else {
      if (uVar3 == 0) {
        if (param_6 == 0x3c) {
          if (param_5 == 0x3c) {
            uVar5 = (-(uint)(*(char *)(param_1 + 0x1cf08) != '\0') & 2 | (uint)param_10 | 0xfff00000
                    ) << 0xb | *(uint *)(&DAT_1800ff0e0 + uVar1 * 4) & 0xf;
          }
          else {
            uVar5 = 3;
          }
        }
        else {
          uVar5 = (((-(uint)(*(char *)(param_1 + 0x1cf08) != '\0') & 2 |
                     (param_11 | 0xfffc0000) << 2 | (uint)param_10) << 3 | (uint)param_9) * 2 |
                  (uint)param_8) << 7 | *(uint *)(&DAT_1800ff0e0 + uVar1 * 4) & 0xf;
        }
        *param_2 = uVar5;
        if (param_3 != param_4) {
          return param_2;
        }
        if (-1 < (int)uVar5) {
          return param_2;
        }
        *param_2 = uVar5 | 0x20000;
        return param_2;
      }
      if (uVar3 == 1) {
        if (((&DAT_1800ff0a8)[param_4] == '\0') || ((&DAT_1800ff0a8)[uVar1] == '\0')) {
          uVar5 = 2;
        }
        else {
          uVar5 = 0;
        }
        uVar6 = ((((uVar5 | param_11) << 2 | -(uint)(*(char *)(param_1 + 0x1cf08) != '\0') & 2 |
                  (uint)param_10) << 3 | (uint)param_9) * 2 | (uint)param_8) << 7;
        uVar5 = *(uint *)(&DAT_1800ff0e0 + uVar1 * 4) & 0xf;
      }
      else {
        if (uVar3 == 2) {
          if (param_6 == 0x3c) {
            *param_2 = 10;
            return param_2;
          }
          if ((param_8 == param_9) && (param_10 == 0)) {
            uVar7 = 0;
          }
          uVar5 = 6;
          if (uVar7 != 0) {
            uVar5 = (param_7 != 0) + 3;
          }
          uVar5 = (((((-(uint)(param_8 != 0 || param_9 != 0) & 8) - 0x40000 | (uint)param_11) << 2 |
                     -(uint)(*(char *)(param_1 + 0x1cf08) != '\0') & 2 | (uint)param_10) << 3 |
                   (uint)param_9) * 2 | (uint)param_8) << 7 | uVar5;
          goto LAB_1800aab46;
        }
        if (uVar3 != 3) {
          if (uVar3 != 4) {
            return param_2;
          }
          uVar5 = ((((-(uint)(param_8 != 0 || param_9 != 0) & 8 | (uint)param_11) << 2 |
                     -(uint)(*(char *)(param_1 + 0x1cf08) != '\0') & 2 | (uint)param_10) << 3 |
                   (uint)param_9) * 2 | (uint)param_8) << 7 | 0x80000006;
          goto LAB_1800aab46;
        }
        if ((param_8 == param_9) && (param_10 == 0)) {
          uVar7 = 0;
        }
        uVar6 = ((((-(uint)(param_8 != 0 || param_9 != 0) & 8 | (uint)param_11) << 2 |
                   -(uint)(*(char *)(param_1 + 0x1cf08) != '\0') & 2 | (uint)param_10) << 3 |
                 (uint)param_9) * 2 | (uint)param_8) << 7;
        uVar5 = 6;
        if (uVar7 != 0) {
          uVar5 = (param_7 != 0) + 3;
        }
      }
      uVar5 = uVar6 | uVar5 | 0x80000010;
    }
  }
  else if (uVar3 == 8) {
    uVar5 = ((((-(uint)(param_8 != 0 || param_9 != 0) & 8 | (uint)param_11) << 2 |
               -(uint)(*(char *)(param_1 + 0x1cf08) != '\0') & 2 | (uint)param_10) << 3 |
             (uint)param_9) * 2 | (uint)param_8) << 7 | 0x80000007;
  }
  else if (uVar3 == 9) {
    uVar5 = ((((-(uint)(param_8 != 0 || param_9 != 0) & 8 | (uint)param_11) << 2 |
               -(uint)(*(char *)(param_1 + 0x1cf08) != '\0') & 2 | (uint)param_10) << 3 |
             (uint)param_9) * 2 | (uint)param_8) << 7 | 0x80000017;
  }
  else {
    if (((uVar3 != 0x12) && (uVar3 != 0x21)) && (uVar3 != 0x30)) {
      return param_2;
    }
    uVar5 = ((((-(uint)(param_8 != 0 || param_9 != 0) & 8 | (uint)param_11) << 2 |
               -(uint)(*(char *)(param_1 + 0x1cf08) != '\0') & 2 | (uint)param_10) << 3 |
             (uint)param_9) * 2 | (uint)param_8) << 7 | 0x80000025;
  }
LAB_1800aab46:
  *param_2 = uVar5;
  return param_2;
}

