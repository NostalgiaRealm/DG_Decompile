/*
 * FUN_1001aa70 at 1001aa70
 * undefined FUN_1001aa70(void)
 * Address ranges: 1001aa70-1001aae7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1001aa70(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = FUN_1001a8f0(param_1);
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_10034270(param_1);
    if (((uVar4 & 1) == 0) || (*(char *)(param_1 + 0xd4) == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  else {
    iVar2 = (*(code *)PTR_FUN_101341bc)();
    iVar3 = FUN_10034310(param_1);
    bVar1 = iVar2 != iVar3;
  }
  return bVar1;
}

