/*
 * FUN_10031730 at 10031730
 * undefined FUN_10031730(void)
 * Address ranges: 10031730-10031bd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_10031730(int param_1,uint *param_2,int param_3,int param_4,ulonglong param_5,
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
  
  uVar6 = (uint)param_5;
  if ((uVar6 < 0x1d) && ((0x19800a00U >> (ulonglong)(uVar6 & 0x1f) & 1) != 0)) {
    uVar9 = 2;
  }
  else {
    uVar9 = 0;
  }
  if ((uVar6 - 0x46 < 8) && ((0xdbU >> (ulonglong)(uVar6 - 0x46 & 0x1f) & 1) != 0)) {
    uVar8 = 4;
  }
  else {
    uVar8 = 0;
  }
  uVar5 = 8;
  uVar7 = 0;
  if (uVar6 - 0x44 < 2) {
    uVar7 = uVar5;
  }
  if ((uVar6 < 0x37) && ((0x40020400010404U >> (param_5 & 0x3f) & 1) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  uVar3 = (uint)param_6;
  if ((uVar3 < 0x1d) && ((0x19800a00U >> (ulonglong)(uVar3 & 0x1f) & 1) != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if ((uVar3 < 0x37) && ((0x40020400010404U >> (param_6 & 0x3f) & 1) != 0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *param_2 = 0;
  uVar8 = (uVar1 | (uVar6 == 0x38 || uVar6 == 0x21)) << 5 |
          ((uVar3 == 0x38 || uVar3 == 0x21) | uVar4) << 4 | uVar9 | uVar7 | uVar2 | uVar8;
  uVar9 = 2;
  uVar7 = (uint)param_8;
  if (9 < uVar8) {
    if (0x30 < uVar8) {
      return param_2;
    }
    if ((0x1000200040000U >> uVar8 & 1) == 0) {
      return param_2;
    }
    uVar6 = 0;
    if (uVar7 != 0 || param_9 != 0) {
      uVar6 = uVar5;
    }
    if (*(char *)(param_1 + 0xcef8) == '\0') {
      uVar9 = 0;
    }
    uVar1 = uVar7 | ((uint)param_9 | (uVar9 | (param_13 | uVar6) << 2 | (uint)param_11) << 3) << 1;
    uVar6 = 0x80000025;
    goto LAB_10031bbc;
  }
  uVar2 = 2;
  uVar1 = (uint)param_8;
  switch(uVar8) {
  case 0:
    if (uVar3 == 0x3c) {
      if (uVar6 == 0x3c) {
        uVar6 = 0xfff00002;
        if (*(char *)(param_1 + 0xcef8) == '\0') {
          uVar6 = 0xfff00000;
        }
        uVar6 = *(uint *)(&DAT_100b3620 + param_3 * 4) & 0xf | (uVar6 | param_11) << 0xb;
      }
      else {
        uVar6 = 3;
      }
    }
    else {
      uVar6 = 2;
      if (*(char *)(param_1 + 0xcef8) == '\0') {
        uVar6 = 0;
      }
      uVar6 = *(uint *)(&DAT_100b3620 + param_3 * 4) & 0xf |
              (uVar7 | ((uint)param_9 | (uVar6 | (param_13 | 0xfffc0000) << 2 | (uint)param_11) << 3
                       ) << 1) << 7;
    }
    *param_2 = uVar6;
    if (param_3 != param_4 || -1 < (int)uVar6) {
      return param_2;
    }
    uVar6 = uVar6 | 0x20000;
    break;
  case 1:
    if ((*(char *)(param_4 + 0x100b3590) == '\0') || (*(char *)(param_3 + 0x100b3590) == '\0')) {
      uVar6 = 2;
    }
    else {
      uVar6 = 0;
    }
    if (*(char *)(param_1 + 0xcef8) == '\0') {
      uVar2 = 0;
    }
    uVar6 = *(uint *)(&DAT_100b3620 + param_3 * 4) & 0xf |
            (uVar7 | ((uint)param_9 | (uVar2 | (param_13 | uVar6) << 2 | (uint)param_11) << 3) << 1)
            << 7;
    goto LAB_10031980;
  case 2:
    if (uVar3 != 0x3c) {
      uVar6 = 3;
      if (param_7 != 0) {
        uVar6 = 4;
      }
      uVar9 = 0xfffc0000;
      if (uVar7 != 0 || param_9 != 0) {
        uVar9 = 0xfffc0008;
      }
      if (*(char *)(param_1 + 0xcef8) == '\0') {
        uVar2 = 0;
      }
      uVar1 = uVar7 | ((uint)param_9 | (uVar2 | (param_13 | uVar9) << 2 | (uint)param_11) << 3) << 1
      ;
      if (uVar7 == param_9 && param_11 == 0) {
        uVar6 = 6;
      }
      goto LAB_10031bbc;
    }
    uVar6 = 10;
    break;
  case 3:
    uVar6 = 3;
    if (param_7 != 0) {
      uVar6 = 4;
    }
    uVar9 = 0;
    if (uVar1 != 0 || param_9 != 0) {
      uVar9 = uVar5;
    }
    if (*(char *)(param_1 + 0xcef8) == '\0') {
      uVar2 = 0;
    }
    if (uVar1 == param_9 && param_11 == 0) {
      uVar6 = 6;
    }
    uVar6 = uVar6 | (uVar7 | ((uint)param_9 |
                             (uVar2 | (param_13 | uVar9) << 2 | (uint)param_11) << 3) << 1) << 7;
LAB_10031980:
    uVar6 = uVar6 | 0x80000010;
    break;
  case 4:
    uVar6 = 0;
    if (uVar1 != 0 || param_9 != 0) {
      uVar6 = 8;
    }
    if (*(char *)(param_1 + 0xcef8) == '\0') {
      uVar2 = 0;
    }
    uVar1 = uVar1 | ((uint)param_9 | (uVar2 | (param_13 | uVar6) << 2 | (uint)param_11) << 3) << 1;
    uVar6 = 0x80000006;
    goto LAB_10031bbc;
  case 5:
    uVar6 = 0;
    if (uVar7 != 0 || param_9 != 0) {
      uVar6 = 8;
    }
    if (*(char *)(param_1 + 0xcef8) == '\0') {
      uVar9 = 0;
    }
    uVar1 = uVar7 | ((uint)param_9 | (uVar9 | (param_13 | uVar6) << 2 | (uint)param_11) << 3) << 1;
    uVar6 = 0x80000016;
    goto LAB_10031bbc;
  default:
    goto switchD_1003185c_caseD_6;
  case 8:
    uVar6 = 0;
    if (uVar7 != 0 || param_9 != 0) {
      uVar6 = uVar5;
    }
    if (*(char *)(param_1 + 0xcef8) == '\0') {
      uVar9 = 0;
    }
    uVar6 = (uVar7 | ((uint)param_9 | (uVar9 | (param_13 | uVar6) << 2 | (uint)param_11) << 3) << 1)
            << 7 | 0x80000007;
    break;
  case 9:
    uVar6 = 0;
    if (uVar7 != 0 || param_9 != 0) {
      uVar6 = uVar5;
    }
    if (*(char *)(param_1 + 0xcef8) == '\0') {
      uVar9 = 0;
    }
    uVar1 = uVar7 | ((uint)param_9 | (uVar9 | (param_13 | uVar6) << 2 | (uint)param_11) << 3) << 1;
    uVar6 = 0x80000017;
LAB_10031bbc:
    uVar6 = uVar6 | uVar1 << 7;
  }
  *param_2 = uVar6;
switchD_1003185c_caseD_6:
  return param_2;
}

