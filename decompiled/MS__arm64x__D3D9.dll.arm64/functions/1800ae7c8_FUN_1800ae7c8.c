/*
 * FUN_1800ae7c8 at 1800ae7c8
 * undefined FUN_1800ae7c8(void)
 * Address ranges: 1800ae7c8-1800ae8d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800ae7c8(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar1 = true;
    iVar3 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar3 == 0) {
      FUN_180003398();
    }
  }
  uVar4 = 0x8876086c;
  if (*(char *)(param_1 + -0x5b27) == '\0') {
    uVar4 = 0x88760868;
    if (((*(longlong **)(param_1 + -0x6808) == (longlong *)0x0) ||
        (cVar2 = (**(code **)(**(longlong **)(param_1 + -0x6808) + 0x20))(), cVar2 != '\0')) &&
       ((*(longlong **)(param_1 + -0x67e8) == (longlong *)0x0 ||
        (cVar2 = (**(code **)(**(longlong **)(param_1 + -0x67e8) + 0x20))(), cVar2 != '\0')))) {
      *(undefined1 *)(param_1 + -0x5b27) = 1;
      uVar4 = 0;
    }
  }
  if (bVar1) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return uVar4;
}

