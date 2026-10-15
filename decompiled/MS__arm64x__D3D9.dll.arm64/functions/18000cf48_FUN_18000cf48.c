/*
 * FUN_18000cf48 at 18000cf48
 * undefined FUN_18000cf48(void)
 * Address ranges: 18000cf48-18000d013
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000cf48(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = DAT_18024de60;
  *(undefined1 *)(param_1 + 0x121) = 0;
  if (*(char *)(lVar3 + 0x882) != '\0') {
    if (((*(uint *)(*(longlong *)(param_1 + 0x50) + 0xe78) >> 2 & 1) == 0) &&
       (*(int *)(DAT_18024e310 + 0x30) == 0)) {
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
    lVar3 = *(longlong *)(param_1 + 0x50);
    (**(code **)(**(longlong **)(lVar3 + 0x28) + 0x28))();
    if (*(char *)(lVar3 + 0xe83) != '\0') {
      *(undefined2 *)(lVar3 + 0x6819) = 1;
    }
    if (bVar1) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  return;
}

