/*
 * FUN_100cc338 at 100cc338
 * undefined FUN_100cc338(void)
 * Address ranges: 100cc338-100cc85f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_100cc338(int param_1,uint *param_2,int param_3,int param_4,ulonglong param_5,
                   ulonglong param_6,int param_7,byte param_8,byte param_9,undefined4 param_10,
                   byte param_11,undefined4 param_12,byte param_13)

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
  uint uVar10;
  uint uVar11;
  
  uVar5 = (uint)param_5;
  if (((uVar5 - 0x17 & 0xfffffffa) == 0) ||
     (uVar8 = 0, uVar5 == 9 && param_3 != 0x1c || uVar5 == 0xb)) {
    uVar8 = 2;
  }
  if ((uVar5 - 0x46 < 8) && ((0xdbU >> (ulonglong)(uVar5 - 0x46 & 0x1f) & 1) != 0)) {
    uVar7 = 4;
  }
  else {
    uVar7 = 0;
  }
  uVar4 = 8;
  uVar6 = 0;
  if (uVar5 - 0x44 < 2) {
    uVar6 = uVar4;
  }
  if ((uVar5 < 0x37) && ((0x40020400010404U >> (param_5 & 0x3f) & 1) != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if ((uVar5 == 0x38 || uVar5 == 0x21) || (uVar10 = 0, uVar5 == 9 && param_3 == 0x1c)) {
    uVar10 = 1;
  }
  uVar1 = (uint)param_6;
  if (((uVar1 - 0x17 & 0xfffffffa) == 0) ||
     (uVar3 = 0, uVar1 == 9 && param_4 != 0x1c || uVar1 == 0xb)) {
    uVar3 = 1;
  }
  if ((uVar1 < 0x37) && ((0x40020400010404U >> (param_6 & 0x3f) & 1) != 0)) {
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
  }
  if ((uVar1 == 0x38 || uVar1 == 0x21) || (uVar9 = 0, uVar1 == 9 && param_4 == 0x1c)) {
    uVar9 = 1;
  }
  *param_2 = 0;
  uVar7 = (uVar2 | uVar10) << 5 | (uVar9 | uVar11) << 4 | uVar8 | uVar6 | uVar3 | uVar7;
  uVar8 = 2;
  uVar6 = (uint)param_8;
  if (9 < uVar7) {
    if (0x30 < uVar7) {
      return param_2;
    }
    if ((0x1000200040000U >> uVar7 & 1) == 0) {
      return param_2;
    }
    uVar5 = 0;
    if (uVar6 != 0 || param_9 != 0) {
      uVar5 = uVar4;
    }
    if (*(char *)(param_1 + 0x1cef8) == '\0') {
      uVar8 = 0;
    }
    uVar2 = uVar6 | ((uint)param_9 | (uVar8 | (param_13 | uVar5) << 2 | (uint)param_11) << 3) << 1;
    uVar5 = 0x80000025;
    goto LAB_100cc848;
  }
  uVar10 = 2;
  uVar2 = (uint)param_8;
  switch(uVar7) {
  case 0:
    if (uVar1 == 0x3c) {
      if (uVar5 == 0x3c) {
        uVar5 = 0xfff00002;
        if (*(char *)(param_1 + 0x1cef8) == '\0') {
          uVar5 = 0xfff00000;
        }
        uVar5 = *(uint *)(&DAT_10162d00 + param_3 * 4) & 0xf | (uVar5 | param_11) << 0xb;
      }
      else {
        uVar5 = 3;
      }
    }
    else {
      uVar5 = 2;
      if (*(char *)(param_1 + 0x1cef8) == '\0') {
        uVar5 = 0;
      }
      uVar5 = *(uint *)(&DAT_10162d00 + param_3 * 4) & 0xf |
              (uVar6 | ((uint)param_9 | (uVar5 | (param_13 | 0xfffc0000) << 2 | (uint)param_11) << 3
                       ) << 1) << 7;
    }
    *param_2 = uVar5;
    if (param_3 != param_4 || -1 < (int)uVar5) {
      return param_2;
    }
    uVar5 = uVar5 | 0x20000;
    break;
  case 1:
    if ((*(char *)(param_4 + 0x10162cc8) == '\0') || (*(char *)(param_3 + 0x10162cc8) == '\0')) {
      uVar5 = 2;
    }
    else {
      uVar5 = 0;
    }
    if (*(char *)(param_1 + 0x1cef8) == '\0') {
      uVar10 = 0;
    }
    uVar5 = *(uint *)(&DAT_10162d00 + param_3 * 4) & 0xf |
            (uVar6 | ((uint)param_9 | (uVar10 | (param_13 | uVar5) << 2 | (uint)param_11) << 3) << 1
            ) << 7;
    goto LAB_100cc5d4;
  case 2:
    if (uVar1 != 0x3c) {
      uVar5 = 3;
      if (param_7 != 0) {
        uVar5 = 4;
      }
      uVar8 = 0xfffc0000;
      if (uVar6 != 0 || param_9 != 0) {
        uVar8 = 0xfffc0008;
      }
      if (*(char *)(param_1 + 0x1cef8) == '\0') {
        uVar10 = 0;
      }
      uVar2 = uVar6 | ((uint)param_9 | (uVar10 | (param_13 | uVar8) << 2 | (uint)param_11) << 3) <<
                      1;
      if (uVar6 == param_9 && param_11 == 0) {
        uVar5 = 6;
      }
      goto LAB_100cc848;
    }
    uVar5 = 10;
    break;
  case 3:
    uVar5 = 3;
    if (param_7 != 0) {
      uVar5 = 4;
    }
    uVar8 = 0;
    if (uVar2 != 0 || param_9 != 0) {
      uVar8 = uVar4;
    }
    if (*(char *)(param_1 + 0x1cef8) == '\0') {
      uVar10 = 0;
    }
    if (uVar2 == param_9 && param_11 == 0) {
      uVar5 = 6;
    }
    uVar5 = uVar5 | (uVar6 | ((uint)param_9 |
                             (uVar10 | (param_13 | uVar8) << 2 | (uint)param_11) << 3) << 1) << 7;
LAB_100cc5d4:
    uVar5 = uVar5 | 0x80000010;
    break;
  case 4:
    uVar5 = 0;
    if (uVar2 != 0 || param_9 != 0) {
      uVar5 = 8;
    }
    if (*(char *)(param_1 + 0x1cef8) == '\0') {
      uVar10 = 0;
    }
    uVar2 = uVar2 | ((uint)param_9 | (uVar10 | (param_13 | uVar5) << 2 | (uint)param_11) << 3) << 1;
    uVar5 = 0x80000006;
    goto LAB_100cc848;
  case 5:
    uVar5 = 0;
    if (uVar6 != 0 || param_9 != 0) {
      uVar5 = 8;
    }
    if (*(char *)(param_1 + 0x1cef8) == '\0') {
      uVar8 = 0;
    }
    uVar2 = uVar6 | ((uint)param_9 | (uVar8 | (param_13 | uVar5) << 2 | (uint)param_11) << 3) << 1;
    uVar5 = 0x80000016;
    goto LAB_100cc848;
  default:
    goto switchD_100cc498_caseD_6;
  case 8:
    uVar5 = 0;
    if (uVar6 != 0 || param_9 != 0) {
      uVar5 = uVar4;
    }
    if (*(char *)(param_1 + 0x1cef8) == '\0') {
      uVar8 = 0;
    }
    uVar5 = (uVar6 | ((uint)param_9 | (uVar8 | (param_13 | uVar5) << 2 | (uint)param_11) << 3) << 1)
            << 7 | 0x80000007;
    break;
  case 9:
    uVar5 = 0;
    if (uVar6 != 0 || param_9 != 0) {
      uVar5 = uVar4;
    }
    if (*(char *)(param_1 + 0x1cef8) == '\0') {
      uVar8 = 0;
    }
    uVar2 = uVar6 | ((uint)param_9 | (uVar8 | (param_13 | uVar5) << 2 | (uint)param_11) << 3) << 1;
    uVar5 = 0x80000017;
LAB_100cc848:
    uVar5 = uVar5 | uVar2 << 7;
  }
  *param_2 = uVar5;
switchD_100cc498_caseD_6:
  return param_2;
}

