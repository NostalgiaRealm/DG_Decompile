/*
 * FUN_1800bf938 at 1800bf938
 * undefined FUN_1800bf938(void)
 * Address ranges: 1800bf938-1800bfa1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800bf938(longlong param_1,uint param_2,undefined4 *param_3)

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
  if ((param_2 < 0xd2 && param_2 != 0) && param_3 != (undefined4 *)0x0) {
    if (*(char *)(*(longlong *)(param_1 + -0x6830) +
                 (-(ulonglong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulonglong)param_2 << 3)) ==
        '\0') {
      *param_3 = 0;
    }
    else {
      uVar4 = 0;
      *param_3 = *(undefined4 *)(param_1 + (longlong)(int)param_2 * 4 + -0x63c0);
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

