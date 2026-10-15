/*
 * FUN_1800526e8 at 1800526e8
 * undefined FUN_1800526e8(void)
 * Address ranges: 1800526e8-1800527af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800526e8(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  
  uVar1 = *param_2;
  (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0xc0);
  uVar2 = *(uint *)(param_1 + 0xa8);
  if (uVar2 != 0) {
    uVar5 = 0;
    uVar4 = uVar2;
    do {
      uVar6 = uVar4 + uVar5 >> 1;
      uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar6 * 0x2e0);
      uVar3 = uVar6;
      if (uVar8 <= uVar1) {
        if (uVar1 <= uVar8) break;
        uVar5 = uVar6 + 1;
        uVar6 = uVar6 + 1;
        uVar3 = uVar4;
      }
      uVar4 = uVar3;
    } while (uVar4 != uVar5);
    if (uVar6 != uVar2) {
      uVar8 = (ulonglong)uVar6 * 0x2e0;
      lVar7 = *(longlong *)(param_1 + 0xa0);
      if (*(ulonglong *)(lVar7 + uVar8) == (ulonglong)uVar1) {
        uVar9 = 0xffffffff;
        if (lVar7 + (uVar8 | 0x10) != 0) {
          uVar9 = *(undefined4 *)(lVar7 + uVar8 + 0x29c);
        }
        goto LAB_180052790;
      }
    }
  }
  uVar9 = 0xffffffff;
LAB_180052790:
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0xc0);
  return uVar9;
}

