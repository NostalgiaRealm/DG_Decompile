/*
 * FUN_1800c3de4 at 1800c3de4
 * undefined __fastcall FUN_1800c3de4(longlong param_1)
 * Address ranges: 1800c3de4-1800c3e16
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c3de4(longlong param_1)

{
  int iVar1;
  int *piVar2;
  
  LOCK();
  piVar2 = (int *)(param_1 + 8);
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (iVar1 == 0) {
    piVar2 = (int *)(*(longlong *)(param_1 + -0x100) + 0xc);
    if (*(longlong *)(param_1 + -0x100) == 0) {
      piVar2 = (int *)&DAT_00006844;
    }
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return;
}

