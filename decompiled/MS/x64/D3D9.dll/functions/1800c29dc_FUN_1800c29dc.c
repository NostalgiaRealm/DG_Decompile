/*
 * FUN_1800c29dc at 1800c29dc
 * undefined __fastcall FUN_1800c29dc(longlong param_1)
 * Address ranges: 1800c29dc-1800c2a0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c29dc(longlong param_1)

{
  int iVar1;
  int *piVar2;
  
  LOCK();
  piVar2 = (int *)(param_1 + 8);
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (iVar1 == 0) {
    piVar2 = (int *)(*(longlong *)(param_1 + -0x50) + 0xc);
    if (*(longlong *)(param_1 + -0x50) == 0) {
      piVar2 = (int *)&DAT_00006844;
    }
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return;
}

