/*
 * FUN_18000ce78 at 18000ce78
 * undefined FUN_18000ce78(void)
 * Address ranges: 18000ce78-18000cf43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000ce78(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  lVar2 = DAT_18024de60;
  *(undefined1 *)(param_1 + 0x121) = 1;
  lVar4 = DAT_18024e310;
  if (*(char *)(lVar2 + 0x882) != '\0') {
    if (((*(uint *)(*(longlong *)(param_1 + 0x50) + 0xe78) >> 2 & 1) == 0) &&
       (*(int *)(DAT_18024e310 + 0x30) == 0)) {
      bVar1 = false;
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
    }
    else {
      bVar1 = true;
      iVar3 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
      lVar4 = DAT_18024e310;
      if (iVar3 == 0) {
        FUN_180003398();
        lVar4 = DAT_18024e310;
      }
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x681a) = 1;
    if (bVar1) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)();
    }
    else {
      *(undefined4 *)(lVar4 + 0x2c) = 0;
    }
  }
  (*__imp_USER32_dll_ShowWindowAsync)(param_2,1);
  return;
}

