/*
 * FUN_1800ac868 at 1800ac868
 * undefined FUN_1800ac868(void)
 * Address ranges: 1800ac868-1800ac95b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ac868(longlong param_1,uint param_2,uint param_3,longlong param_4)

{
  bool bVar1;
  int iVar2;
  
  if (((param_2 < *(uint *)(param_1 + -0x5a00) && param_3 < 2) && param_4 != 0) &&
     (*(char *)(param_1 + -0x1c) == '\0')) {
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
    (**(code **)(**(longlong **)(param_1 + -0x59a0) + 0xa0))
              (0x477fff00,*(longlong **)(param_1 + -0x59a0),
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(param_1 + -0x5a08) + (ulonglong)param_2 * 8) + 0xec),
               param_4,param_4 + 0x200,param_4 + 0x400);
    if (bVar1) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  return;
}

