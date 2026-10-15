/*
 * FUN_10081569 at 10081569
 * int __stdcall FUN_10081569(undefined4 * param_1)
 * Address ranges: 10081569-100815a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10081569(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[0x3b];
  piVar1 = param_1 + 0x38;
  LOCK();
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar3 = iVar3 + -1;
  if (param_1[0x39] + iVar3 == 0) {
    FUN_10081469(param_1);
  }
  if (iVar3 == 0) {
    FUN_1007b43b(iVar2 + 0x58e0);
  }
  return iVar3;
}

