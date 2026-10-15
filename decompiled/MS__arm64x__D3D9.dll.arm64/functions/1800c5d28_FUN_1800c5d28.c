/*
 * FUN_1800c5d28 at 1800c5d28
 * undefined FUN_1800c5d28(void)
 * Address ranges: 1800c5d28-1800c5ea7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800c5d28(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  
  lVar9 = *(longlong *)(param_1 + 0x178);
  iVar3 = FUN_180001590(param_1 + 0x134);
  if (*(int *)(param_1 + 0x138) + iVar3 == 0) {
    iVar4 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar4 == 0) {
      FUN_180003398();
    }
    lVar1 = 0;
    if (param_1 != 0) {
      lVar1 = param_1 + 8;
    }
    lVar5 = *(longlong *)(param_1 + 0x178);
    if (*(uint *)(lVar5 + 0xe38) != 0) {
      uVar7 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0xe30) + uVar7 * 8) == lVar1) {
          if ((int)uVar7 != -1) goto LAB_1800c5e58;
          break;
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(lVar5 + 0xe38));
    }
    if (*(uint *)(lVar5 + 0xeb8) != 0) {
      uVar7 = 0;
      do {
        uVar6 = (uint)uVar7;
        if (*(longlong *)(*(longlong *)(lVar5 + 0xeb0) + uVar7 * 8) == lVar1) {
          if (uVar6 != 0xffffffff) {
            puVar2 = (uint *)&DAT_00000114;
            if (param_1 != 0) {
              puVar2 = (uint *)(param_1 + 0x11c);
            }
            (&DAT_180253a70)[(ulonglong)*(uint *)(lVar5 + 0xea8) * 0x4b] =
                 (&DAT_180253a70)[(ulonglong)*(uint *)(lVar5 + 0xea8) * 0x4b] + (ulonglong)*puVar2;
            uVar8 = *(uint *)(lVar5 + 0xeb8);
            if (uVar6 < uVar8) {
              while (uVar6 = (int)uVar7 + 1, uVar6 < uVar8) {
                *(undefined8 *)(*(longlong *)(lVar5 + 0xeb0) + uVar7 * 8) =
                     *(undefined8 *)(*(longlong *)(lVar5 + 0xeb0) + (ulonglong)uVar6 * 8);
                uVar7 = (ulonglong)uVar6;
                uVar8 = *(uint *)(lVar5 + 0xeb8);
              }
              *(uint *)(lVar5 + 0xeb8) = uVar8 - 1;
            }
          }
          break;
        }
        uVar7 = (ulonglong)(uVar6 + 1);
      } while (uVar6 + 1 < *(uint *)(lVar5 + 0xeb8));
    }
LAB_1800c5e58:
    FUN_1800c5710(param_1);
    FUN_1800c5538(param_1);
    FUN_180102fc0(param_1,0x188);
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  if (iVar3 == 0) {
    FUN_1800a9f28(lVar9 + 0x6838);
  }
  return iVar3;
}

