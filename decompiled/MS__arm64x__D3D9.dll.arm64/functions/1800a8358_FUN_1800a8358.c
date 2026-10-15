/*
 * FUN_1800a8358 at 1800a8358
 * undefined FUN_1800a8358(void)
 * Address ranges: 1800a8358-1800a8547
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a8358(undefined8 param_1,int param_2,longlong param_3)

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
  char local_50 [8];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_18001f7f0(local_50);
  lVar4 = 0;
  uVar8 = 0;
  if (DAT_18024de20 != 0) {
    do {
      if (lVar4 != 0) goto LAB_1800a8494;
      lVar6 = *(longlong *)(DAT_18024de28 + uVar8 * 8);
      if (lVar6 != 0) {
        uVar7 = 0;
        if (*(uint *)(lVar6 + 0xf8) != 0) {
          do {
            if (lVar4 != 0) break;
            lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0xf0) + uVar7 * 8);
            if (*(uint *)(lVar5 + 0xe38) != 0) {
              uVar9 = 0;
              do {
                lVar10 = *(longlong *)(*(longlong *)(lVar5 + 0xe30) + uVar9 * 8);
                lVar4 = 0;
                if (lVar10 != 0) {
                  lVar4 = lVar10 + -8;
                }
                if (lVar4 != 0) {
                  piVar2 = (int *)&DAT_000000f0;
                  if (lVar10 != 0) {
                    piVar2 = (int *)(lVar10 + 0xe8);
                  }
                  if (param_2 == *piVar2) {
                    pcVar3 = &DAT_00000101;
                    if (lVar10 != 0) {
                      pcVar3 = (char *)(lVar10 + 0xf9);
                    }
                    if (*pcVar3 == '\0') goto LAB_1800a8478;
                  }
                }
                uVar1 = (int)uVar9 + 1;
                uVar9 = (ulonglong)uVar1;
              } while (uVar1 < *(uint *)(lVar5 + 0xe38));
            }
            if (*(uint *)(lVar5 + 0xeb8) != 0) {
              uVar9 = 0;
              do {
                lVar10 = *(longlong *)(*(longlong *)(lVar5 + 0xeb0) + uVar9 * 8);
                piVar2 = (int *)&DAT_000000f0;
                if (lVar10 != 0) {
                  piVar2 = (int *)(lVar10 + 0xe8);
                }
                if (param_2 == *piVar2) {
                  pcVar3 = &DAT_00000101;
                  if (lVar10 != 0) {
                    pcVar3 = (char *)(lVar10 + 0xf9);
                  }
                  lVar4 = lVar10 + -8;
                  if (*pcVar3 == '\0') {
                    if (lVar10 == 0) {
                      lVar4 = 0;
                    }
                    goto LAB_1800a8478;
                  }
                }
                uVar1 = (int)uVar9 + 1;
                uVar9 = (ulonglong)uVar1;
              } while (uVar1 < *(uint *)(lVar5 + 0xeb8));
            }
            lVar4 = 0;
LAB_1800a8478:
            uVar1 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar1;
          } while (uVar1 < *(uint *)(lVar6 + 0xf8));
        }
      }
      uVar1 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar1;
    } while (uVar1 < DAT_18024de20);
    if (lVar4 != 0) {
LAB_1800a8494:
      local_38 = 0;
      local_40 = *(undefined4 *)(lVar4 + 0xb0);
      uStack_3c = *(undefined4 *)(lVar4 + 0xb4);
      local_48 = 0;
      local_2c = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x24) >> 0x20);
      local_30 = (undefined4)*(undefined8 *)(param_3 + 0x24);
      FUN_18000da70(lVar4 + 8,param_3);
    }
  }
  lVar4 = DAT_18024e310;
  if (local_50[0] == '\0') {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  else {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    lVar4 = DAT_18024e310;
  }
  FUN_180001590(lVar4 + 0x30);
  return;
}

