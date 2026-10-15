/*
 * FUN_1800b4c48 at 1800b4c48
 * undefined FUN_1800b4c48(void)
 * Address ranges: 1800b4c48-1800b4d5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800b4c48(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  
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
  if (*(char *)(param_1 + -0x642c) == '\0') {
    if (param_2 == *(longlong *)(param_1 + 0x5c60)) goto LAB_1800b4d28;
    if (param_2 != 0) {
      FUN_1800015a0(param_2 + 0xc);
    }
    if (*(longlong *)(param_1 + 0x5c60) != 0) {
      FUN_1800c85b8();
    }
    *(longlong *)(param_1 + 0x5c60) = param_2;
    lVar3 = 0x5cd2;
  }
  else {
    param_1 = *(longlong *)
               (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    if (param_2 != 0) {
      FUN_1800015a0(param_2 + 0xc);
    }
    if (*(longlong *)(param_1 + 0x4fb8) != 0) {
      FUN_1800c85b8();
    }
    lVar3 = 0xacfc;
    *(longlong *)(param_1 + 0x4fb8) = param_2;
  }
  *(undefined1 *)(param_1 + lVar3) = 1;
LAB_1800b4d28:
  if (bVar1) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return 0;
}

