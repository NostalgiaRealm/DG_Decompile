/*
 * FUN_18016c9b0 at 18016c9b0
 * undefined FUN_18016c9b0(void)
 * Address ranges: 18016c9b0-18016cbfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18016c9b0(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  
  if ((param_2 != 0) && (*(char *)(*(longlong *)(param_2 + 8) + 0x4a6c) == '\x03')) {
    if (*(char *)(*(longlong *)(param_2 + 8) + 0x4885) != '\0') {
      uVar8 = 0;
      do {
        cVar4 = *(char *)(param_2 + 0x20 + uVar8);
        iVar5 = 0xd;
        if (-1 < cVar4) {
          iVar5 = cVar4 + 2;
        }
        iVar7 = (int)uVar8;
        uVar9 = iVar7 + 1;
        uVar8 = (ulonglong)uVar9;
        *(int *)(param_1 + 0x5350 + (ulonglong)(uint)(iVar7 << 2) * 4) = iVar5;
      } while (uVar9 < 0xc);
      *(undefined1 *)(param_1 + 0xf6b4) = 1;
    }
    iVar5 = 0;
    if (param_4 < 0x300) {
      iVar5 = *(int *)(param_2 + 0x70);
    }
    if (*(int *)(param_1 + 0x5410) != iVar5) {
      *(int *)(param_1 + 0x5410) = iVar5;
      *(undefined1 *)(param_1 + 0xf6b4) = 1;
    }
  }
  uVar2 = 0x8000000000000000;
  if (param_4 < 0x300) {
    uVar2 = 0;
  }
  *(undefined8 *)(param_1 + 0xea0) = uVar2;
  if (0x2ff < param_4) {
    if ((param_2 == 0) || (lVar6 = *(longlong *)(param_2 + 8), *(char *)(lVar6 + 0x4a6c) != '\x03'))
    {
      uVar8 = 0;
      do {
        if ((*(char *)(param_3 + uVar8) != '\0') && (*(int *)(param_3 + 0x118 + uVar8 * 4) != -1)) {
          uVar1 = (int)uVar8 * 4;
          uVar9 = uVar1 + 3;
          *(undefined4 *)(param_1 + 0x6360 + (ulonglong)uVar9 * 4) = 0;
          uVar3 = *(uint *)(param_3 + 0x118 + uVar8 * 4);
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
        uVar9 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar9;
      } while (uVar9 < 10);
    }
    else {
      uVar9 = 0;
      do {
        uVar10 = uVar9 * 4 + 3;
        *(undefined4 *)(param_1 + 0x6360 + (ulonglong)uVar10 * 4) = 0;
        if ((*(char *)(param_3 + (ulonglong)uVar9) != '\0') &&
           (uVar3 = *(uint *)(param_3 + 0x118 + (ulonglong)uVar9 * 4), uVar3 != 0xffffffff)) {
          uVar8 = 0;
          do {
            if ((*(uint *)(lVar6 + 0x4850 + uVar8 * 4) |
                CONCAT13(-(0xfe < (byte)(uVar3 >> 0x18)),
                         CONCAT12(-(0xfe < (byte)(uVar3 >> 0x10)),
                                  CONCAT11(-(0xfe < (byte)(uVar3 >> 8)),-(0xfe < (byte)uVar3))))) ==
                uVar3) {
              *(ulonglong *)(param_1 + 0xea0) =
                   (longlong)(*(char *)(param_2 + 0x20 + uVar8) + 1) <<
                   ((ulonglong)(uVar9 * 4) & 0x3f) | *(ulonglong *)(param_1 + 0xea0);
              *(int *)(param_1 + 0x6360 + (ulonglong)uVar10 * 4) =
                   (int)*(char *)(param_2 + 0x20 + uVar8);
              break;
            }
            uVar1 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar1;
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

