/*
 * FUN_180063e10 at 180063e10
 * undefined __fastcall FUN_180063e10(longlong param_1, longlong param_2, longlong param_3, uint param_4)
 * Address ranges: 180063e10-180064016
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180063e10(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  
  if ((param_2 != 0) && (*(char *)(*(longlong *)(param_2 + 8) + 0x4a6c) == '\x03')) {
    if (*(char *)(*(longlong *)(param_2 + 8) + 0x4885) != '\0') {
      uVar8 = 0;
      do {
        cVar1 = *(char *)(param_2 + 0x20 + uVar8);
        iVar9 = cVar1 + 2;
        if (cVar1 < '\0') {
          iVar9 = 0xd;
        }
        iVar4 = (int)uVar8;
        uVar7 = iVar4 + 1;
        uVar8 = (ulonglong)uVar7;
        *(int *)(param_1 + 0x5350 + (ulonglong)(uint)(iVar4 * 4) * 4) = iVar9;
      } while (uVar7 < 0xc);
      *(undefined1 *)(param_1 + 0xf6b4) = 1;
    }
    if (param_4 < 0x300) {
      iVar9 = *(int *)(param_2 + 0x70);
    }
    else {
      iVar9 = 0;
    }
    if (*(int *)(param_1 + 0x5410) != iVar9) {
      *(int *)(param_1 + 0x5410) = iVar9;
      *(undefined1 *)(param_1 + 0xf6b4) = 1;
    }
  }
  *(ulonglong *)(param_1 + 0xea0) = ~-(ulonglong)(param_4 < 0x300) & 0x8000000000000000;
  if (0x2ff < param_4) {
    if ((param_2 == 0) || (lVar3 = *(longlong *)(param_2 + 8), *(char *)(lVar3 + 0x4a6c) != '\x03'))
    {
      uVar8 = 0;
      do {
        if ((*(char *)(param_3 + uVar8) != '\0') && (*(int *)(param_3 + 0x118 + uVar8 * 4) != -1)) {
          iVar9 = (int)uVar8 * 4;
          uVar7 = iVar9 + 3;
          uVar5 = 0;
          *(undefined4 *)(param_1 + 0x6360 + (ulonglong)uVar7 * 4) = 0;
          uVar2 = *(uint *)(param_3 + 0x118 + uVar8 * 4);
          do {
            if (uVar2 == (CONCAT13(-((char)(uVar2 >> 0x18) == -1),
                                   CONCAT12(-((char)(uVar2 >> 0x10) == -1),
                                            CONCAT11(-((char)(uVar2 >> 8) == -1),
                                                     -((char)uVar2 == -1)))) |
                         (&DAT_180102640)[(int)uVar5])) {
              *(ulonglong *)(param_1 + 0xea0) =
                   *(ulonglong *)(param_1 + 0xea0) | (longlong)(int)uVar5 << ((byte)iVar9 & 0x3f);
              *(uint *)(param_1 + 0x6360 + (ulonglong)uVar7 * 4) = uVar5 - 1;
              break;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < 0xc);
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 < 10);
    }
    else {
      uVar8 = 0;
      do {
        iVar9 = (int)uVar8 * 4;
        uVar7 = iVar9 + 3;
        *(undefined4 *)(param_1 + 0x6360 + (ulonglong)uVar7 * 4) = 0;
        if ((*(char *)(param_3 + uVar8) != '\0') &&
           (uVar2 = *(uint *)(param_3 + 0x118 + uVar8 * 4), uVar2 != 0xffffffff)) {
          uVar6 = 0;
          do {
            if ((CONCAT13(-((char)(uVar2 >> 0x18) == -1),
                          CONCAT12(-((char)(uVar2 >> 0x10) == -1),
                                   CONCAT11(-((char)(uVar2 >> 8) == -1),-((char)uVar2 == -1)))) |
                *(uint *)(lVar3 + 0x4850 + uVar6 * 4)) == uVar2) {
              *(ulonglong *)(param_1 + 0xea0) =
                   *(ulonglong *)(param_1 + 0xea0) |
                   (longlong)(*(char *)(param_2 + 0x20 + uVar6) + 1) << ((byte)iVar9 & 0x3f);
              *(int *)(param_1 + 0x6360 + (ulonglong)uVar7 * 4) =
                   (int)*(char *)(param_2 + 0x20 + uVar6);
              break;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while (uVar5 < 0xc);
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 < 10);
    }
    if (*(char *)(param_3 + 0x147) != '\0') {
      *(undefined1 *)(param_1 + 0xf6b7) = 1;
    }
  }
  return;
}

