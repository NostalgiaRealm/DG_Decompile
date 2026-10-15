/*
 * FUN_1800bf0c0 at 1800bf0c0
 * undefined FUN_1800bf0c0(void)
 * Address ranges: 1800bf0c0-1800bf1ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800bf0c0(longlong param_1,uint param_2,undefined8 *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar3 = 0x8876086c;
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
  if (param_2 < *(uint *)(*(longlong *)(param_1 + 0x60) + 0xf0)) {
    lVar4 = *(longlong *)(param_1 + (ulonglong)param_2 * 8 + -0x6808);
    if (lVar4 == 0) {
      *param_3 = 0;
      uVar3 = 0x88760866;
    }
    else {
      uVar3 = FUN_1800c4790(lVar4 + 0x80,&DAT_1802294f8,param_3);
    }
  }
  if (bVar1) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return uVar3;
}

