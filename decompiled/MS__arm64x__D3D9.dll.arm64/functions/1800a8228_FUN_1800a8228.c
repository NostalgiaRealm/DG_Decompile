/*
 * FUN_1800a8228 at 1800a8228
 * undefined FUN_1800a8228(void)
 * Address ranges: 1800a8228-1800a8357
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

bool FUN_1800a8228(undefined8 param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar5 = 0;
  uVar8 = 0;
  if (DAT_18024de20 != 0) {
    do {
      if (lVar5 != 0) break;
      lVar9 = *(longlong *)(DAT_18024de28 + uVar8 * 8);
      if (lVar9 != 0) {
        uVar7 = 0;
        if (*(uint *)(lVar9 + 0xf8) != 0) {
          do {
            if (lVar5 != 0) break;
            lVar10 = *(longlong *)(*(longlong *)(lVar9 + 0xf0) + uVar7 * 8);
            if (*(uint *)(lVar10 + 0xe38) != 0) {
              uVar6 = 0;
              do {
                lVar4 = *(longlong *)(*(longlong *)(lVar10 + 0xe30) + uVar6 * 8);
                lVar5 = 0;
                if (lVar4 != 0) {
                  lVar5 = lVar4 + -8;
                }
                if (lVar5 != 0) {
                  piVar2 = (int *)&DAT_000000f0;
                  if (lVar4 != 0) {
                    piVar2 = (int *)(lVar4 + 0xe8);
                  }
                  if (param_2 == *piVar2) {
                    pcVar3 = &DAT_00000101;
                    if (lVar4 != 0) {
                      pcVar3 = (char *)(lVar4 + 0xf9);
                    }
                    if (*pcVar3 == '\0') goto LAB_1800a8320;
                  }
                }
                uVar1 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar1;
              } while (uVar1 < *(uint *)(lVar10 + 0xe38));
            }
            if (*(uint *)(lVar10 + 0xeb8) != 0) {
              uVar6 = 0;
              do {
                lVar4 = *(longlong *)(*(longlong *)(lVar10 + 0xeb0) + uVar6 * 8);
                piVar2 = (int *)&DAT_000000f0;
                if (lVar4 != 0) {
                  piVar2 = (int *)(lVar4 + 0xe8);
                }
                if (param_2 == *piVar2) {
                  pcVar3 = &DAT_00000101;
                  if (lVar4 != 0) {
                    pcVar3 = (char *)(lVar4 + 0xf9);
                  }
                  lVar5 = lVar4 + -8;
                  if (*pcVar3 == '\0') {
                    if (lVar4 == 0) {
                      lVar5 = 0;
                    }
                    goto LAB_1800a8320;
                  }
                }
                uVar1 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar1;
              } while (uVar1 < *(uint *)(lVar10 + 0xeb8));
            }
            lVar5 = 0;
LAB_1800a8320:
            uVar1 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar1;
          } while (uVar1 < *(uint *)(lVar9 + 0xf8));
        }
      }
      uVar1 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar1;
    } while (uVar1 < DAT_18024de20);
  }
  return lVar5 != 0;
}

