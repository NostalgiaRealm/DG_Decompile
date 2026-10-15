/*
 * FUN_1800b52b0 at 1800b52b0
 * undefined FUN_1800b52b0(void)
 * Address ranges: 1800b52b0-1800b53e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800b52b0(float param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  
  if (((*(uint *)(param_2 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
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
  if (*(char *)(param_2 + -0x642c) == '\0') {
    *(float *)(param_2 + 0x5ca8) = param_1;
    if ((*(uint *)(*(longlong *)(param_2 + 0x60) + 0x1c) >> 0x18 & 1) != 0) {
      uVar1 = *(uint *)(*(longlong *)(param_2 + -0x6820) + 0x9eb);
      if (uVar1 < 9) {
        if (uVar1 != 0) {
          param_1 = (float)uVar1;
        }
      }
      else {
        param_1 = 8.0;
      }
      (**(code **)(**(longlong **)(param_2 + -0x6810) + 0x138))
                (param_1,*(longlong **)(param_2 + -0x6810),uVar1 != 0);
    }
  }
  else {
    lVar4 = *(longlong *)
             (*(longlong *)(param_2 + -0x6440) + (ulonglong)*(uint *)(param_2 + -0x6430) * 8);
    *(float *)(lVar4 + 0x4fe8) = param_1;
    *(undefined1 *)(lVar4 + 0xacfd) = 1;
  }
  if (bVar2) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return 0;
}

