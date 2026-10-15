/*
 * FUN_1800c74a0 at 1800c74a0
 * undefined FUN_1800c74a0(void)
 * Address ranges: 1800c74a0-1800c759f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800c74a0(longlong param_1,uint param_2,longlong param_3)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  puVar1 = (uint *)&DAT_00000e78;
  if (*(longlong *)(param_1 + -0x80) != 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + -0x80) + -0x59c0);
  }
  if (((*puVar1 >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar2 = true;
    iVar3 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar3 == 0) {
      FUN_180003398();
    }
  }
  if ((*(uint *)(param_1 + -0x28) >> 10 & 1) == 0) {
    uVar5 = (uint)*(ushort *)(param_1 + -0x5c);
  }
  else {
    uVar5 = 1;
  }
  uVar4 = 0x8876086c;
  if ((param_2 < uVar5) && (param_3 != 0)) {
    uVar4 = FUN_1800c4790(*(longlong *)(param_1 + (ulonglong)param_2 * 8 + 0x18) + 0x80,
                          &DAT_1802294f8,param_3);
  }
  if (bVar2) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return uVar4;
}

