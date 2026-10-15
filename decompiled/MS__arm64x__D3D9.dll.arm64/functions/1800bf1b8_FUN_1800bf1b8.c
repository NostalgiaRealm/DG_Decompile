/*
 * FUN_1800bf1b8 at 1800bf1b8
 * undefined FUN_1800bf1b8(void)
 * Address ranges: 1800bf1b8-1800bf28f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800bf1b8(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  if (param_2 != (undefined8 *)0x0) {
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
    if (*(longlong *)(param_1 + -0x67e8) == 0) {
      *param_2 = 0;
      uVar3 = 0x88760866;
    }
    else {
      uVar3 = FUN_1800c4790(*(longlong *)(param_1 + -0x67e8) + 0x80,&DAT_1802294f8,param_2);
    }
    if (bVar1) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  return uVar3;
}

