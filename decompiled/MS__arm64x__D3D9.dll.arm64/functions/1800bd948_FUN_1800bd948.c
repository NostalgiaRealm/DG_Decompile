/*
 * FUN_1800bd948 at 1800bd948
 * undefined FUN_1800bd948(void)
 * Address ranges: 1800bd948-1800bda77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1800bd948(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5
             ,undefined8 *param_6,longlong param_7)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  if ((param_6 != (undefined8 *)0x0) && (*param_6 = 0, param_7 == 0)) {
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
    if ((param_5 < 4) && ((0xdU >> (ulonglong)(param_5 & 0x1f) & 1) != 0)) {
      uVar3 = FUN_1800b78d8(param_1 + -0x6838,param_2,param_3,param_4,0,0,param_5,0,1,param_6);
    }
    else {
      uVar3 = 0x8876086c;
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

