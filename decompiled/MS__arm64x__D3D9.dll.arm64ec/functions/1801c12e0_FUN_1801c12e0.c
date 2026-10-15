/*
 * FUN_1801c12e0 at 1801c12e0
 * undefined FUN_1801c12e0(void)
 * Address ranges: 1801c12e0-1801c1417
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1801c12e0(undefined8 param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  lVar6 = 0;
  uVar9 = 0;
  if (DAT_18024d8fc != 0) {
    do {
      if (lVar6 != 0) break;
      lVar10 = *(longlong *)(DAT_18024d900 + uVar9 * 8);
      if (lVar10 != 0) {
        uVar8 = 0;
        if (*(uint *)(lVar10 + 0xf8) != 0) {
          do {
            if (lVar6 != 0) break;
            lVar5 = *(longlong *)(*(longlong *)(lVar10 + 0xf0) + uVar8 * 8);
            if (*(uint *)(lVar5 + 0xe38) != 0) {
              uVar7 = 0;
              do {
                lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0xe30) + uVar7 * 8);
                lVar6 = 0;
                if (lVar4 != 0) {
                  lVar6 = lVar4 + -8;
                }
                if (lVar6 != 0) {
                  piVar2 = (int *)&DAT_000000f0;
                  if (lVar4 != 0) {
                    piVar2 = (int *)(lVar4 + 0xe8);
                  }
                  if (param_2 == *piVar2) {
                    pcVar3 = &DAT_00000101;
                    if (lVar4 != 0) {
                      pcVar3 = (char *)(lVar4 + 0xf9);
                    }
                    if (*pcVar3 == '\0') goto LAB_1801c13dc;
                  }
                }
                uVar1 = (int)uVar7 + 1;
                uVar7 = (ulonglong)uVar1;
              } while (uVar1 < *(uint *)(lVar5 + 0xe38));
            }
            if (*(uint *)(lVar5 + 0xeb8) != 0) {
              uVar7 = 0;
              do {
                lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0xeb0) + uVar7 * 8);
                piVar2 = (int *)&DAT_000000f0;
                if (lVar4 != 0) {
                  piVar2 = (int *)(lVar4 + 0xe8);
                }
                if (param_2 == *piVar2) {
                  pcVar3 = &DAT_00000101;
                  if (lVar4 != 0) {
                    pcVar3 = (char *)(lVar4 + 0xf9);
                  }
                  lVar6 = lVar4 + -8;
                  if (*pcVar3 == '\0') {
                    if (lVar4 == 0) {
                      lVar6 = 0;
                    }
                    goto LAB_1801c13dc;
                  }
                }
                uVar1 = (int)uVar7 + 1;
                uVar7 = (ulonglong)uVar1;
              } while (uVar1 < *(uint *)(lVar5 + 0xeb8));
            }
            lVar6 = 0;
LAB_1801c13dc:
            uVar1 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar1;
          } while (uVar1 < *(uint *)(lVar10 + 0xf8));
        }
      }
      uVar1 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar1;
    } while (uVar1 < DAT_18024d8fc);
  }
  return lVar6 != 0;
}

