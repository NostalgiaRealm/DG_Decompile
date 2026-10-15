/*
 * FUN_1800c3aa4 at 1800c3aa4
 * undefined __fastcall FUN_1800c3aa4(longlong param_1, uint param_2)
 * Address ranges: 1800c3aa4-1800c3ae5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c3aa4(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x40 + (ulonglong)param_2 * 8);
  LOCK();
  piVar1 = (int *)((longlong)puVar3 + 0xcc);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 + *(int *)(puVar3 + 0x19) == 0) {
    FUN_1800c32d4(puVar3);
  }
  *(undefined8 *)(param_1 + 0x40 + (ulonglong)param_2 * 8) = 0;
  return;
}

