/*
 * FUN_1800b7150 at 1800b7150
 * undefined FUN_1800b7150(void)
 * Address ranges: 1800b7150-1800b7237
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b7150(longlong param_1,int param_2)

{
  ulonglong uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0x8876086c;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
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
  if (param_2 == 0) {
    uVar1 = (ulonglong)*(uint *)(param_1 + -0x5990);
    (**(code **)(*(longlong *)(&DAT_180253850)[uVar1 * 0x4b] + 0xb0))
              ((longlong *)(&DAT_180253850)[uVar1 * 0x4b],(&DAT_180253870)[uVar1 * 0x96],
               *(undefined4 *)(&DAT_1802539e0 + uVar1 * 0x4b),
               *(undefined4 *)((longlong)&DAT_1802539e0 + uVar1 * 600 + 4),1);
    uVar4 = 0;
  }
  if (bVar2) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return uVar4;
}

