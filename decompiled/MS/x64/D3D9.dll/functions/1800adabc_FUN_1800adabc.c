/*
 * FUN_1800adabc at 1800adabc
 * ulonglong __fastcall FUN_1800adabc(int param_1)
 * Address ranges: 1800adabc-1800adc15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800adabc(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  char *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar6 = 0;
  uVar10 = 0;
  if (DAT_180111f0c != 0) {
    do {
      if (uVar6 != 0) {
        return uVar6;
      }
      lVar1 = *(longlong *)(DAT_180111f10 + uVar10 * 8);
      if ((lVar1 != 0) && (uVar7 = 0, *(int *)(lVar1 + 0xf8) != 0)) {
        do {
          if (uVar6 != 0) break;
          lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xf0) + uVar7 * 8);
          if (*(uint *)(lVar2 + 0xe38) != 0) {
            uVar9 = 0;
            do {
              lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xe30) + uVar9 * 8);
              uVar6 = -(ulonglong)(lVar3 != 0) & lVar3 - 8U;
              if (uVar6 != 0) {
                piVar4 = (int *)(lVar3 + 0xe8);
                if (lVar3 == 0) {
                  piVar4 = (int *)&DAT_000000f0;
                }
                if (param_1 == *piVar4) {
                  pcVar5 = (char *)(lVar3 + 0xf9);
                  if (lVar3 == 0) {
                    pcVar5 = &DAT_00000101;
                  }
                  if (*pcVar5 == '\0') goto LAB_1800adbda;
                }
              }
              uVar8 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar8;
            } while (uVar8 < *(uint *)(lVar2 + 0xe38));
          }
          if (*(uint *)(lVar2 + 0xeb8) != 0) {
            uVar6 = 0;
            do {
              lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xeb0) + uVar6 * 8);
              piVar4 = (int *)(lVar3 + 0xe8);
              if (lVar3 == 0) {
                piVar4 = (int *)&DAT_000000f0;
              }
              if (param_1 == *piVar4) {
                pcVar5 = (char *)(lVar3 + 0xf9);
                if (lVar3 == 0) {
                  pcVar5 = &DAT_00000101;
                }
                if (*pcVar5 == '\0') {
                  uVar6 = -(ulonglong)(lVar3 != 0) & lVar3 - 8U;
                  goto LAB_1800adbda;
                }
              }
              uVar8 = (int)uVar6 + 1;
              uVar6 = (ulonglong)uVar8;
            } while (uVar8 < *(uint *)(lVar2 + 0xeb8));
          }
          uVar6 = 0;
LAB_1800adbda:
          uVar8 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar8;
        } while (uVar8 < *(uint *)(lVar1 + 0xf8));
      }
      uVar8 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar8;
    } while (uVar8 < DAT_180111f0c);
  }
  return uVar6;
}

