/*
 * FUN_1001fdd0 at 1001fdd0
 * undefined FUN_1001fdd0(void)
 * Address ranges: 1001fdd0-1001fe47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1001fdd0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = FUN_1001fc50(param_1);
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_1003e140(param_1);
    if (((uVar4 & 1) == 0) || (*(char *)(param_1 + 0xd4) == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  else {
    iVar2 = (*(code *)PTR_FUN_1016c1bc)();
    iVar3 = FUN_1003e1e0(param_1);
    bVar1 = iVar2 != iVar3;
  }
  return bVar1;
}

