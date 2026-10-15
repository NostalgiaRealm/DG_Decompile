/*
 * FUN_1800bfd70 at 1800bfd70
 * undefined FUN_1800bfd70(void)
 * Address ranges: 1800bfd70-1800bfe7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800bfd70(longlong param_1,uint param_2,longlong *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_2 < 0x10) {
    if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
      bVar1 = false;
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
    }
    else {
      bVar1 = true;
      iVar2 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
      if (iVar2 == 0) {
        FUN_180003398();
      }
    }
    lVar3 = *(longlong *)(param_1 + (ulonglong)param_2 * 8 + -0x170);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar3 + 0x90;
      if (lVar3 != 0) {
        FUN_1800c7b88(lVar3);
      }
    }
    param_1 = param_1 + (ulonglong)param_2 * 4;
    *param_3 = lVar3;
    *param_5 = *(undefined4 *)(param_1 + -0xf0);
    *param_4 = *(undefined4 *)(param_1 + -0xb0);
    if (bVar1) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  else {
    *param_3 = 0;
    *param_5 = 0;
    *param_4 = 0;
  }
  return 0;
}

