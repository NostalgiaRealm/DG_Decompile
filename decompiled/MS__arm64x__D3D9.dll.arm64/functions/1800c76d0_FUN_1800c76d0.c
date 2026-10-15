/*
 * FUN_1800c76d0 at 1800c76d0
 * undefined FUN_1800c76d0(void)
 * Address ranges: 1800c76d0-1800c77bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800c76d0(longlong param_1,uint param_2)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  uVar4 = 0x8876086c;
  if (param_2 < *(ushort *)(param_1 + -0x5c)) {
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
    uVar4 = 0;
    lVar5 = *(longlong *)(*(longlong *)(param_1 + -0x58) + (ulonglong)param_2 * 8);
    if ((*(uint *)(*(longlong *)(lVar5 + 8) + 0x100) >> 0xb & 1) != 0) {
      uVar4 = FUN_18000ca28(lVar5,0);
    }
    if (bVar2) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  return uVar4;
}

