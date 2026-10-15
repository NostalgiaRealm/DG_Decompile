/*
 * FUN_1802218b0 at 1802218b0
 * undefined FUN_1802218b0(void)
 * Address ranges: 1802218b0-1802218f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1802218b0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_60 [48];
  
  if ((uint)(((int)*(undefined8 *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1fc) * 0x28 + 0x98) -
             (int)*(undefined8 *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1fc) * 0x28 + 0x90)) +
            *(int *)(param_1 + 0x1f0)) <= param_2 + 0x18U) {
    thunk_FUN_180223a90(*(undefined8 *)
                         (param_1 + (ulonglong)*(uint *)(param_1 + 0x1fc) * 0x28 + 0xa8));
    uVar1 = *(int *)(param_1 + 0x1fc) + 1U & 7;
    lVar3 = param_1 + (ulonglong)uVar1 * 0x28;
    iVar2 = thunk_FUN_1802238ec(*(undefined8 *)(lVar3 + 0xa8),100);
    if (iVar2 != 0) {
      do {
        thunk_FUN_180223c0c(auStack_60,0,0,0,0x400000);
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
  }
  return *(undefined8 *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1fc) * 0x28 + 0x90);
}

