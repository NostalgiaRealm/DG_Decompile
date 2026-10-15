/*
 * FUN_1800c6880 at 1800c6880
 * undefined FUN_1800c6880(void)
 * Address ranges: 1800c6880-1800c696f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800c6880(longlong param_1,uint param_2,int param_3,undefined8 *param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((*(uint *)(*(longlong *)(param_1 + 0x178) + 0xe78) >> 2 & 1) == 0) &&
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
  *param_4 = 0;
  uVar3 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + 0xd4)) && (param_3 == 0)) {
    uVar3 = FUN_1800c4790(*(longlong *)(param_1 + (ulonglong)(param_2 + 1) * 8 + 0x60) + 0x80,
                          &DAT_1802294f8,param_4);
  }
  if (bVar1) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return uVar3;
}

