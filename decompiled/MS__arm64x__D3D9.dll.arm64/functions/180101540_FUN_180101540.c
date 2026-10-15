/*
 * FUN_180101540 at 180101540
 * undefined FUN_180101540(void)
 * Address ranges: 180101540-1801015fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180101540(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  (*__imp_KERNEL32_dll_ResetEvent)
            (*(undefined8 *)(param_1 + *(uint *)(param_1 + 0x1fc) * param_3 + 0xa8));
  uVar1 = *(int *)(param_1 + 0x1fc) + 1U & 7;
  lVar3 = param_1 + (ulonglong)uVar1 * (param_3 & 0xffffffff);
  iVar2 = (*__imp_KERNEL32_dll_WaitForSingleObject)(*(undefined8 *)(lVar3 + 0xa8),100);
  while( true ) {
    if (iVar2 == 0) {
      **(undefined8 **)(lVar3 + 0x98) = 0;
      *(undefined8 *)(lVar3 + 0x90) = *(undefined8 *)(lVar3 + 0x98);
      *(uint *)(param_1 + 0x1fc) = uVar1;
      return *(undefined8 *)(param_1 + *(uint *)(param_1 + 0x1fc) * param_3 + 0x90);
    }
    (*__imp_USER32_dll_PeekMessageA)(&stack0x00000010,0,0,0,0x400000);
    if (*(char *)(param_1 + 0x204) == '\0') break;
    iVar2 = (*__imp_KERNEL32_dll_WaitForSingleObject)(*(undefined8 *)(lVar3 + 0xa8),100);
  }
  return 0;
}

