/*
 * FUN_1007f838 at 1007f838
 * undefined FUN_1007f838(void)
 * Address ranges: 1007f838-1007fadf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007f838(int param_1,int param_2,int param_3,uint param_4)

{
  ulonglong *puVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  
  if ((param_2 != 0) && (*(char *)(*(int *)(param_2 + 4) + 0x4a6c) == '\x03')) {
    if (*(char *)(*(int *)(param_2 + 4) + 0x4885) != '\0') {
      uVar9 = 0;
      do {
        cVar5 = *(char *)(uVar9 + param_2 + 0x14);
        iVar7 = 0xd;
        if (-1 < cVar5) {
          iVar7 = cVar5 + 2;
        }
        iVar6 = uVar9 + 0x533;
        uVar9 = uVar9 + 1;
        *(int *)(param_1 + iVar6 * 0x10) = iVar7;
      } while (uVar9 < 0xc);
      *(undefined1 *)(param_1 + 0xf694) = 1;
    }
    if (param_4 < 0x300) {
      iVar7 = *(int *)(param_2 + 100);
    }
    else {
      iVar7 = 0;
    }
    if (*(int *)(param_1 + 0x53f0) != iVar7) {
      *(int *)(param_1 + 0x53f0) = iVar7;
      *(undefined1 *)(param_1 + 0xf694) = 1;
    }
  }
  uVar8 = 0x8000000000000000;
  if (param_4 < 0x300) {
    uVar8 = 0;
  }
  puVar1 = (ulonglong *)(param_1 + 0xe80);
  *puVar1 = uVar8;
  if (0x2ff < param_4) {
    if ((param_2 == 0) || (iVar7 = *(int *)(param_2 + 4), *(char *)(iVar7 + 0x4a6c) != '\x03')) {
      uVar8 = 0;
      do {
        iVar7 = (int)uVar8;
        if ((*(char *)(iVar7 + param_3) != '\0') &&
           (piVar2 = (int *)(param_3 + iVar7 * 4 + 0x118), *piVar2 != -1)) {
          iVar6 = param_1 + iVar7 * 0x10;
          uVar9 = 0;
          *(undefined4 *)(iVar6 + 0x634c) = 0;
          iVar4 = *piVar2;
          do {
            if (*(uint *)(param_3 + 0x118 + iVar7 * 4) ==
                ((&DAT_10162090)[uVar9] |
                CONCAT13(-(0xfe < (byte)((uint)iVar4 >> 0x18)),
                         CONCAT12(-(0xfe < (byte)((uint)iVar4 >> 0x10)),
                                  CONCAT11(-(0xfe < (byte)((uint)iVar4 >> 8)),-(0xfe < (byte)iVar4))
                                 )))) {
              *puVar1 = (longlong)(int)uVar9 << ((uVar8 & 0xf) << 2) | *puVar1;
              *(uint *)(iVar6 + 0x634c) = uVar9 - 1;
              break;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < 0xc);
        }
        uVar8 = (ulonglong)(iVar7 + 1U);
      } while (iVar7 + 1U < 10);
    }
    else {
      uVar8 = 0;
      do {
        iVar6 = (int)uVar8;
        *(undefined4 *)(param_1 + 0x634c + iVar6 * 0x10) = 0;
        if ((*(char *)(iVar6 + param_3) != '\0') &&
           (iVar4 = *(int *)(param_3 + iVar6 * 4 + 0x118), iVar4 != -1)) {
          uVar9 = 0;
          do {
            if ((*(uint *)(iVar7 + 0x4850 + uVar9 * 4) |
                CONCAT13(-(0xfe < (byte)((uint)iVar4 >> 0x18)),
                         CONCAT12(-(0xfe < (byte)((uint)iVar4 >> 0x10)),
                                  CONCAT11(-(0xfe < (byte)((uint)iVar4 >> 8)),-(0xfe < (byte)iVar4))
                                 ))) == *(uint *)(param_3 + 0x118 + iVar6 * 4)) {
              pcVar3 = (char *)(uVar9 + param_2 + 0x14);
              *puVar1 = (longlong)(*pcVar3 + 1) << ((uVar8 & 0xf) << 2) | *puVar1;
              *(int *)(param_1 + iVar6 * 0x10 + 0x634c) = (int)*pcVar3;
              break;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < 0xc);
        }
        uVar8 = (ulonglong)(iVar6 + 1U);
      } while (iVar6 + 1U < 10);
    }
    if (*(char *)(param_3 + 0x147) != '\0') {
      *(undefined1 *)(param_1 + 0xf697) = 1;
    }
  }
  return;
}

