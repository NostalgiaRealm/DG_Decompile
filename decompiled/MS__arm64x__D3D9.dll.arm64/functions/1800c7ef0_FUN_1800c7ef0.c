/*
 * FUN_1800c7ef0 at 1800c7ef0
 * undefined FUN_1800c7ef0(void)
 * Address ranges: 1800c7ef0-1800c7fd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1800c7ef0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = (uint *)&DAT_00000e78;
  if (*(longlong *)(param_1 + -0x50) != 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + -0x50) + -0x59c0);
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
  uVar4 = FUN_18000afa8(param_1 + -0x60,param_2,param_3,param_4,param_5);
  if (bVar2) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return uVar4;
}

