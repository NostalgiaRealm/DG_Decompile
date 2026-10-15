/*
 * FUN_1800c34b0 at 1800c34b0
 * undefined __fastcall FUN_1800c34b0(longlong param_1)
 * Address ranges: 1800c34b0-1800c34f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c34b0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 + -1 + *(int *)(param_1 + 0xc) == 0) {
      FUN_1800c32d4((undefined8 *)(param_1 + -0xc0));
    }
    FUN_1800c3e8c(*(longlong *)(param_1 + -0x38) + 0x118);
  }
  return;
}

