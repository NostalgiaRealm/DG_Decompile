/*
 * FUN_1800bfb28 at 1800bfb28
 * undefined FUN_1800bfb28(void)
 * Address ranges: 1800bfb28-1800bfc2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800bfb28(longlong param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  lVar3 = DAT_18024e310;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar1 = true;
    iVar2 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    lVar3 = DAT_18024e310;
    if (iVar2 == 0) {
      FUN_180003398();
      lVar3 = DAT_18024e310;
    }
  }
  uVar4 = 0x8876086c;
  if (((param_2 < 8 && param_3 != 0) && param_3 < 0x21) && param_4 != (undefined4 *)0x0) {
    if (*(char *)(*(longlong *)(param_1 + -0x6828) + (longlong)(int)param_3 * 0xc) == '\0') {
      *param_4 = 0;
    }
    else {
      uVar4 = 0;
      *param_4 = *(undefined4 *)
                  ((longlong)(int)param_3 * 4 + (ulonglong)param_2 * 0x84 + param_1 + -0x6078);
    }
  }
  if (bVar1) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)();
  }
  else {
    *(undefined4 *)(lVar3 + 0x2c) = 0;
  }
  return uVar4;
}

