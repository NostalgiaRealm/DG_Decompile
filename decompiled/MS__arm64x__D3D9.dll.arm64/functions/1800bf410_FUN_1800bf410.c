/*
 * FUN_1800bf410 at 1800bf410
 * undefined FUN_1800bf410(void)
 * Address ranges: 1800bf410-1800bf4f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800bf410(longlong param_1,undefined4 *param_2)

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
  if (param_2 != (undefined4 *)0x0) {
    uVar4 = 0;
    *param_2 = *(undefined4 *)(param_1 + -0x67e0);
    param_2[1] = *(undefined4 *)(param_1 + -0x67dc);
    param_2[2] = *(undefined4 *)(param_1 + -0x67d8);
    param_2[3] = *(undefined4 *)(param_1 + -0x67d4);
    param_2[4] = *(undefined4 *)(param_1 + -0x67d0);
    param_2[5] = *(undefined4 *)(param_1 + -0x67cc);
  }
  if (bVar1) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)();
  }
  else {
    *(undefined4 *)(lVar3 + 0x2c) = 0;
  }
  return uVar4;
}

