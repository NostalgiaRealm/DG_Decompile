/*
 * FUN_1802218f8 at 1802218f8
 * undefined FUN_1802218f8(void)
 * Address ranges: 1802218f8-1802219a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1802218f8(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  thunk_FUN_180223a90(*(undefined8 *)(param_1 + *(uint *)(param_1 + 0x1fc) * param_3 + 0xa8));
  uVar1 = *(int *)(param_1 + 0x1fc) + 1U & 7;
  lVar3 = param_1 + (ulonglong)uVar1 * (param_3 & 0xffffffff);
  iVar2 = thunk_FUN_1802238ec(*(undefined8 *)(lVar3 + 0xa8),100);
  if (iVar2 != 0) {
    do {
      thunk_FUN_180223c0c(&stack0x00000010,0,0,0,0x400000);
      if (*(char *)(param_1 + 0x204) == '\0') {
        return 0;
      }
      iVar2 = thunk_FUN_1802238ec(*(undefined8 *)(lVar3 + 0xa8),100);
    } while (iVar2 != 0);
  }
  DataMemoryBarrier(2,3);
  **(undefined8 **)(lVar3 + 0x98) = 0;
  *(undefined8 *)(lVar3 + 0x90) = *(undefined8 *)(lVar3 + 0x98);
  *(uint *)(param_1 + 0x1fc) = uVar1;
  return *(undefined8 *)(param_1 + *(uint *)(param_1 + 0x1fc) * param_3 + 0x90);
}

