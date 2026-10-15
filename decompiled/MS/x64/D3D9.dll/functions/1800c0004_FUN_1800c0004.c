/*
 * FUN_1800c0004 at 1800c0004
 * undefined __fastcall FUN_1800c0004(longlong param_1)
 * Address ranges: 1800c0004-1800c0033
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c0004(longlong param_1)

{
  int iVar1;
  int *piVar2;
  
  LOCK();
  piVar2 = (int *)(param_1 + 8);
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (iVar1 == 0) {
    piVar2 = (int *)(*(longlong *)(param_1 + -0x38) + 0xc);
    if (*(longlong *)(param_1 + -0x38) == 0) {
      piVar2 = (int *)&DAT_00006844;
    }
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return;
}

