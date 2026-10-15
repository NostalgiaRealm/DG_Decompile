/*
 * FUN_1800bff08 at 1800bff08
 * undefined FUN_1800bff08(void)
 * Address ranges: 1800bff08-1800bfffb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800bff08(longlong param_1,uint param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  if (param_2 < *(uint *)(param_1 + -0x5a00) && param_3 != 0) {
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
    lVar4 = *(longlong *)(*(longlong *)(param_1 + -0x5a08) + (ulonglong)param_2 * 8);
    if (lVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(lVar4 + 0xec);
    }
    (**(code **)(**(longlong **)(param_1 + -0x59a0) + 0x98))
              (0x437f0000,*(longlong **)(param_1 + -0x59a0),uVar3,param_3,param_3 + 0x200,
               param_3 + 0x400);
    if (bVar1) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  return;
}

