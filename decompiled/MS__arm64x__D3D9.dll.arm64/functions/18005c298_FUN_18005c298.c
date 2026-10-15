/*
 * FUN_18005c298 at 18005c298
 * undefined FUN_18005c298(void)
 * Address ranges: 18005c298-18005c4db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005c298(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  if ((param_2 != 0) && (*(char *)(*(longlong *)(param_2 + 8) + 0x4a6c) == '\x03')) {
    if (*(char *)(*(longlong *)(param_2 + 8) + 0x4885) != '\0') {
      uVar6 = 0;
      do {
        cVar4 = *(char *)(param_2 + 0x20 + uVar6);
        iVar7 = 0xd;
        if (-1 < cVar4) {
          iVar7 = cVar4 + 2;
        }
        iVar5 = (int)uVar6;
        uVar9 = iVar5 + 1;
        uVar6 = (ulonglong)uVar9;
        *(int *)(param_1 + 0x5350 + (ulonglong)(uint)(iVar5 << 2) * 4) = iVar7;
      } while (uVar9 < 0xc);
      *(undefined1 *)(param_1 + 0xf6b4) = 1;
    }
    iVar7 = 0;
    if (param_4 < 0x300) {
      iVar7 = *(int *)(param_2 + 0x70);
    }
    if (*(int *)(param_1 + 0x5410) != iVar7) {
      *(int *)(param_1 + 0x5410) = iVar7;
      *(undefined1 *)(param_1 + 0xf6b4) = 1;
    }
  }
  uVar2 = 0x8000000000000000;
  if (param_4 < 0x300) {
    uVar2 = 0;
  }
  *(undefined8 *)(param_1 + 0xea0) = uVar2;
  if (0x2ff < param_4) {
    if ((param_2 == 0) || (lVar8 = *(longlong *)(param_2 + 8), *(char *)(lVar8 + 0x4a6c) != '\x03'))
    {
      uVar6 = 0;
      do {
        if ((*(char *)(param_3 + uVar6) != '\0') && (*(int *)(param_3 + 0x118 + uVar6 * 4) != -1)) {
          uVar1 = (int)uVar6 * 4;
          uVar9 = uVar1 + 3;
          *(undefined4 *)(param_1 + 0x6360 + (ulonglong)uVar9 * 4) = 0;
          uVar3 = *(uint *)(param_3 + 0x118 + uVar6 * 4);
          uVar10 = 0;
          do {
            if (uVar3 == ((&DAT_18022c150)[(int)uVar10] |
                         CONCAT13(-(0xfe < (byte)(uVar3 >> 0x18)),
                                  CONCAT12(-(0xfe < (byte)(uVar3 >> 0x10)),
                                           CONCAT11(-(0xfe < (byte)(uVar3 >> 8)),
                                                    -(0xfe < (byte)uVar3)))))) {
              *(ulonglong *)(param_1 + 0xea0) =
                   (longlong)(int)uVar10 << ((ulonglong)uVar1 & 0x3f) |
                   *(ulonglong *)(param_1 + 0xea0);
              *(uint *)(param_1 + 0x6360 + (ulonglong)uVar9 * 4) = uVar10 - 1;
              break;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < 0xc);
        }
        uVar9 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar9;
      } while (uVar9 < 10);
    }
    else {
      uVar9 = 0;
      do {
        uVar10 = uVar9 * 4 + 3;
        *(undefined4 *)(param_1 + 0x6360 + (ulonglong)uVar10 * 4) = 0;
        if ((*(char *)(param_3 + (ulonglong)uVar9) != '\0') &&
           (uVar3 = *(uint *)(param_3 + 0x118 + (ulonglong)uVar9 * 4), uVar3 != 0xffffffff)) {
          uVar6 = 0;
          do {
            if ((*(uint *)(lVar8 + 0x4850 + uVar6 * 4) |
                CONCAT13(-(0xfe < (byte)(uVar3 >> 0x18)),
                         CONCAT12(-(0xfe < (byte)(uVar3 >> 0x10)),
                                  CONCAT11(-(0xfe < (byte)(uVar3 >> 8)),-(0xfe < (byte)uVar3))))) ==
                uVar3) {
              *(ulonglong *)(param_1 + 0xea0) =
                   (longlong)(*(char *)(param_2 + 0x20 + uVar6) + 1) <<
                   ((ulonglong)(uVar9 * 4) & 0x3f) | *(ulonglong *)(param_1 + 0xea0);
              *(int *)(param_1 + 0x6360 + (ulonglong)uVar10 * 4) =
                   (int)*(char *)(param_2 + 0x20 + uVar6);
              break;
            }
            uVar1 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar1;
          } while (uVar1 < 0xc);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < 10);
    }
    if (*(char *)(param_3 + 0x147) != '\0') {
      *(undefined1 *)(param_1 + 0xf6b7) = 1;
    }
  }
  return;
}

