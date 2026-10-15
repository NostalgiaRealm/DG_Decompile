/*
 * FUN_1800c1140 at 1800c1140
 * undefined __fastcall FUN_1800c1140(undefined8 * param_1)
 * Address ranges: 1800c1140-1800c1162
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c1140(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0xac);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 + *(int *)(param_1 + 0x15) == 0) {
    FUN_1800c1164(param_1);
  }
  return;
}

