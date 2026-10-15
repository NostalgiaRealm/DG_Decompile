/*
 * FUN_180101500 at 180101500
 * undefined FUN_180101500(void)
 * Address ranges: 180101500-18010153f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180101500(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_60 [48];
  
  if ((uint)(((int)*(undefined8 *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1fc) * 0x28 + 0x98) -
             (int)*(undefined8 *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1fc) * 0x28 + 0x90)) +
            *(int *)(param_1 + 0x1f0)) <= param_2 + 0x18U) {
    (*__imp_KERNEL32_dll_ResetEvent)
              (*(undefined8 *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1fc) * 0x28 + 0xa8));
    uVar1 = *(int *)(param_1 + 0x1fc) + 1U & 7;
    lVar3 = param_1 + (ulonglong)uVar1 * 0x28;
    iVar2 = (*__imp_KERNEL32_dll_WaitForSingleObject)(*(undefined8 *)(lVar3 + 0xa8),100);
    while (iVar2 != 0) {
      (*__imp_USER32_dll_PeekMessageA)(auStack_60,0,0,0,0x400000);
      if (*(char *)(param_1 + 0x204) == '\0') {
        return 0;
      }
      iVar2 = (*__imp_KERNEL32_dll_WaitForSingleObject)(*(undefined8 *)(lVar3 + 0xa8),100);
    }
    **(undefined8 **)(lVar3 + 0x98) = 0;
    *(undefined8 *)(lVar3 + 0x90) = *(undefined8 *)(lVar3 + 0x98);
    *(uint *)(param_1 + 0x1fc) = uVar1;
  }
  return *(undefined8 *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1fc) * 0x28 + 0x90);
}

