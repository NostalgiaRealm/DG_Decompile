/*
 * FUN_1800bd820 at 1800bd820
 * undefined FUN_1800bd820(void)
 * Address ranges: 1800bd820-1800bd93b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1800bd820(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
             undefined4 param_6,undefined8 param_7,undefined8 *param_8,longlong param_9)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  if ((param_8 != (undefined8 *)0x0) && (*param_8 = 0, param_9 == 0)) {
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
    uVar3 = FUN_1800b78d8(param_1 + -0x6838,param_2,param_3,param_4,param_5,param_6,0,2,
                          param_4 == 0x46,param_8);
    if (bVar1) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  return uVar3;
}

