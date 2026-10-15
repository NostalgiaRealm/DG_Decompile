/*
 * FUN_1800c75a8 at 1800c75a8
 * undefined FUN_1800c75a8(void)
 * Address ranges: 1800c75a8-1800c76c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1800c75a8(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5
             )

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((((param_2 == 0) ||
       (uVar4 = 0x8876086c, (*(uint *)(*(longlong *)(param_1 + 0x18) + 0x50) >> 10 & 1) == 0)) &&
      (uVar4 = 0x8876086c, *(char *)(param_1 + -0x10) != '\0')) &&
     (param_2 < *(ushort *)(param_1 + -0x5c))) {
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
    uVar4 = FUN_18000c0d8(*(undefined8 *)(*(longlong *)(param_1 + -0x58) + (ulonglong)param_2 * 8),
                          param_3,param_4,param_5,*(int *)(param_1 + -0x1c) == 0,0);
    if (bVar2) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  return uVar4;
}

