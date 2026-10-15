/*
 * FUN_1800b7038 at 1800b7038
 * undefined FUN_1800b7038(void)
 * Address ranges: 1800b7038-1800b7147
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b7038(longlong param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  if (param_2 + 7U < 0xf) {
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
    iVar2 = (**(code **)(*(longlong *)
                          (&DAT_180253850)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] + 0x130))
                      ();
    if (iVar2 == 2) {
      uVar3 = 0x88760870;
    }
    else {
      (**(code **)(*(longlong *)(&DAT_180253850)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] +
                  0x140))((longlong *)
                          (&DAT_180253850)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b],param_2);
      uVar3 = 0;
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

