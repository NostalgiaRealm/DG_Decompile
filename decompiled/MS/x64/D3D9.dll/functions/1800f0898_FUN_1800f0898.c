/*
 * FUN_1800f0898 at 1800f0898
 * int __fastcall FUN_1800f0898(undefined8 * param_1)
 * Address ranges: 1800f0898-1800f08e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800f0898(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 3);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 + -1 == 0) && (param_1 != (undefined8 *)0x0)) {
    *param_1 = &PTR_FUN_1801073f8;
    FUN_1800fbcf0((LPVOID)param_1[2]);
    FUN_1800fbcf0(param_1);
  }
  return iVar2 + -1;
}

