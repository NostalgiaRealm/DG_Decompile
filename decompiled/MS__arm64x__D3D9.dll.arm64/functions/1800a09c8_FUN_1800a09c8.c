/*
 * FUN_1800a09c8 at 1800a09c8
 * undefined FUN_1800a09c8(void)
 * Address ranges: 1800a09c8-1800a0eb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1800a09c8(longlong param_1,uint *param_2,uint param_3,uint param_4,ulonglong param_5,
                    ulonglong param_6,int param_7,byte param_8,byte param_9,byte param_10,
                    byte param_11)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar5 = (uint)param_5;
  if (((uVar5 - 0x17 & 0xfffffffa) == 0) ||
     (uVar4 = 0, uVar5 == 9 && param_3 != 0x1c || uVar5 == 0xb)) {
    uVar4 = 2;
  }
  if ((uVar5 - 0x46 < 8) && ((0xdbU >> (ulonglong)(uVar5 - 0x46 & 0x1f) & 1) != 0)) {
    uVar3 = 4;
  }
  else {
    uVar3 = 0;
  }
  if ((uVar5 < 0x37) && ((0x40020400010404U >> (param_5 & 0x3f) & 1) != 0)) {
    uVar9 = 0x20;
  }
  else {
    uVar9 = 0;
  }
  if ((uVar5 == 0x38 || uVar5 == 0x21) || (uVar2 = 0, uVar5 == 9 && param_3 == 0x1c)) {
    uVar2 = 0x20;
  }
  uVar1 = (uint)param_6;
  if (((uVar1 - 0x17 & 0xfffffffa) == 0) ||
     (uVar8 = 0, uVar1 == 9 && param_4 != 0x1c || uVar1 == 0xb)) {
    uVar8 = 1;
  }
  if ((uVar1 < 0x37) && ((0x40020400010404U >> (param_6 & 0x3f) & 1) != 0)) {
    uVar7 = 0x10;
  }
  else {
    uVar7 = 0;
  }
  if ((uVar1 == 0x38 || uVar1 == 0x21) || (uVar6 = 0, uVar1 == 9 && param_4 == 0x1c)) {
    uVar6 = 0x10;
  }
  *param_2 = 0;
  uVar8 = uVar2 | uVar9 | uVar6 | uVar7 | (uint)(uVar5 - 0x44 < 2) << 3 | uVar3 | uVar4 | uVar8;
  uVar4 = 2;
  if ((uVar8 < 0x31) && ((0x1000200040000U >> uVar8 & 1) != 0)) {
    if (*(char *)(param_1 + 0x1cf08) == '\0') {
      uVar4 = 0;
    }
    uVar3 = (uint)param_8 |
            ((uint)param_9 |
            (uVar4 | ((uint)param_11 | (uint)(param_8 != 0 || param_9 != 0) << 3) << 2 |
            (uint)param_10) << 3) << 1;
    uVar5 = 0x80000025;
    goto LAB_1800a0b50;
  }
  uVar3 = (uint)param_8;
  if (uVar8 == 0) {
    if (uVar1 == 0x3c) {
      if (uVar5 == 0x3c) {
        uVar5 = 0xfff00002;
        if (*(char *)(param_1 + 0x1cf08) == '\0') {
          uVar5 = 0xfff00000;
        }
        uVar5 = *(uint *)(&DAT_180231550 + (ulonglong)param_3 * 4) & 0xf | (uVar5 | param_10) << 0xb
        ;
      }
      else {
        uVar5 = 3;
      }
    }
    else {
      if (*(char *)(param_1 + 0x1cf08) == '\0') {
        uVar4 = 0;
      }
      uVar5 = *(uint *)(&DAT_180231550 + (ulonglong)param_3 * 4) & 0xf |
              (uVar3 | ((uint)param_9 | (uVar4 | (param_11 | 0xfffc0000) << 2 | (uint)param_10) << 3
                       ) << 1) << 7;
    }
    *param_2 = uVar5;
    if (param_3 != param_4 || -1 < (int)uVar5) {
      return param_2;
    }
    uVar5 = uVar5 | 0x20000;
    goto LAB_1800a0ea8;
  }
  if (uVar8 == 1) {
    if (((&DAT_180231518)[param_4] == '\0') || ((&DAT_180231518)[param_3] == '\0')) {
      uVar5 = 2;
    }
    else {
      uVar5 = 0;
    }
    if (*(char *)(param_1 + 0x1cf08) == '\0') {
      uVar4 = 0;
    }
    uVar5 = *(uint *)(&DAT_180231550 + (ulonglong)param_3 * 4) & 0xf |
            (uVar3 | ((uint)param_9 | (uVar4 | (uVar5 | param_11) << 2 | (uint)param_10) << 3) << 1)
            << 7;
LAB_1800a0d0c:
    uVar5 = uVar5 | 0x80000010;
  }
  else {
    uVar9 = (uint)param_8;
    if (uVar8 == 2) {
      if (uVar1 == 0x3c) {
        uVar5 = 10;
        goto LAB_1800a0ea8;
      }
      uVar5 = 3;
      if (param_7 != 0) {
        uVar5 = 4;
      }
      uVar2 = 0xfffc0000;
      if (param_8 != 0 || param_9 != 0) {
        uVar2 = 0xfffc0008;
      }
      if (*(char *)(param_1 + 0x1cf08) == '\0') {
        uVar4 = 0;
      }
      uVar3 = uVar3 | ((uint)param_9 | (uVar4 | (uVar2 | param_11) << 2 | (uint)param_10) << 3) << 1
      ;
      if (uVar9 == param_9 && param_10 == 0) {
        uVar5 = 6;
      }
    }
    else {
      if (uVar8 == 3) {
        uVar5 = 3;
        if (param_7 != 0) {
          uVar5 = 4;
        }
        if (*(char *)(param_1 + 0x1cf08) == '\0') {
          uVar4 = 0;
        }
        if (uVar3 == param_9 && param_10 == 0) {
          uVar5 = 6;
        }
        uVar5 = uVar5 | (uVar9 | ((uint)param_9 |
                                 (uVar4 | ((uint)param_11 |
                                          (uint)(param_8 != 0 || param_9 != 0) << 3) << 2 |
                                 (uint)param_10) << 3) << 1) << 7;
        goto LAB_1800a0d0c;
      }
      if (uVar8 == 4) {
        if (*(char *)(param_1 + 0x1cf08) == '\0') {
          uVar4 = 0;
        }
        uVar3 = uVar9 | ((uint)param_9 |
                        (uVar4 | ((uint)param_11 | (uint)(param_8 != 0 || param_9 != 0) << 3) << 2 |
                        (uint)param_10) << 3) << 1;
        uVar5 = 0x80000006;
      }
      else if (uVar8 == 5) {
        if (*(char *)(param_1 + 0x1cf08) == '\0') {
          uVar4 = 0;
        }
        uVar3 = uVar9 | ((uint)param_9 |
                        (uVar4 | ((uint)param_11 | (uint)(param_8 != 0 || param_9 != 0) << 3) << 2 |
                        (uint)param_10) << 3) << 1;
        uVar5 = 0x80000016;
      }
      else {
        if (uVar8 == 8) {
          if (*(char *)(param_1 + 0x1cf08) == '\0') {
            uVar4 = 0;
          }
          uVar5 = ((uint)param_8 |
                  ((uint)param_9 |
                  (uVar4 | ((uint)param_11 | (uint)(param_8 != 0 || param_9 != 0) << 3) << 2 |
                  (uint)param_10) << 3) << 1) << 7 | 0x80000007;
          goto LAB_1800a0ea8;
        }
        if (uVar8 != 9) {
          return param_2;
        }
        if (*(char *)(param_1 + 0x1cf08) == '\0') {
          uVar4 = 0;
        }
        uVar3 = (uint)param_8 |
                ((uint)param_9 |
                (uVar4 | ((uint)param_11 | (uint)(param_8 != 0 || param_9 != 0) << 3) << 2 |
                (uint)param_10) << 3) << 1;
        uVar5 = 0x80000017;
      }
    }
LAB_1800a0b50:
    uVar5 = uVar5 | uVar3 << 7;
  }
LAB_1800a0ea8:
  *param_2 = uVar5;
  return param_2;
}

