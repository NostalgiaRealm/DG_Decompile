/*
 * FUN_1801c1420 at 1801c1420
 * undefined FUN_1801c1420(void)
 * Address ranges: 1801c1420-1801c163b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801c1420(undefined8 param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_50 [48];
  
  iVar4 = FUN_1801042e0(DAT_180258900 + 0x30);
  if (iVar4 == 1) {
    while (*(int *)(DAT_180258900 + 0x2c) != 0) {
      thunk_FUN_180223c0c(auStack_50,0,0,0,0x400000);
    }
  }
  iVar4 = thunk_FUN_1802236e4(DAT_180258900);
  if (iVar4 == 0) {
    FUN_1801085c8();
  }
  lVar5 = 0;
  uVar10 = 0;
  if (DAT_18024d8fc != 0) {
    do {
      if (lVar5 != 0) goto LAB_1801c15a4;
      lVar8 = *(longlong *)(DAT_18024d900 + uVar10 * 8);
      if (lVar8 != 0) {
        uVar9 = 0;
        if (*(uint *)(lVar8 + 0xf8) != 0) {
          do {
            if (lVar5 != 0) break;
            lVar7 = *(longlong *)(*(longlong *)(lVar8 + 0xf0) + uVar9 * 8);
            if (*(uint *)(lVar7 + 0xe38) != 0) {
              uVar6 = 0;
              do {
                lVar11 = *(longlong *)(*(longlong *)(lVar7 + 0xe30) + uVar6 * 8);
                lVar5 = 0;
                if (lVar11 != 0) {
                  lVar5 = lVar11 + -8;
                }
                if (lVar5 != 0) {
                  piVar2 = (int *)&DAT_000000f0;
                  if (lVar11 != 0) {
                    piVar2 = (int *)(lVar11 + 0xe8);
                  }
                  if (param_2 == *piVar2) {
                    pcVar3 = &DAT_00000101;
                    if (lVar11 != 0) {
                      pcVar3 = (char *)(lVar11 + 0xf9);
                    }
                    if (*pcVar3 == '\0') goto LAB_1801c1588;
                  }
                }
                uVar1 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar1;
              } while (uVar1 < *(uint *)(lVar7 + 0xe38));
            }
            if (*(uint *)(lVar7 + 0xeb8) != 0) {
              uVar6 = 0;
              do {
                lVar11 = *(longlong *)(*(longlong *)(lVar7 + 0xeb0) + uVar6 * 8);
                piVar2 = (int *)&DAT_000000f0;
                if (lVar11 != 0) {
                  piVar2 = (int *)(lVar11 + 0xe8);
                }
                if (param_2 == *piVar2) {
                  pcVar3 = &DAT_00000101;
                  if (lVar11 != 0) {
                    pcVar3 = (char *)(lVar11 + 0xf9);
                  }
                  lVar5 = lVar11 + -8;
                  if (*pcVar3 == '\0') {
                    if (lVar11 == 0) {
                      lVar5 = 0;
                    }
                    goto LAB_1801c1588;
                  }
                }
                uVar1 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar1;
              } while (uVar1 < *(uint *)(lVar7 + 0xeb8));
            }
            lVar5 = 0;
LAB_1801c1588:
            uVar1 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar1;
          } while (uVar1 < *(uint *)(lVar8 + 0xf8));
        }
      }
      uVar1 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar1;
    } while (uVar1 < DAT_18024d8fc);
    if (lVar5 != 0) {
LAB_1801c15a4:
      FUN_180118f88(lVar5 + 8,param_3);
    }
  }
  thunk_FUN_18022370c(DAT_180258900);
  FUN_1801042d0(DAT_180258900 + 0x30);
  return;
}

