/*
 * FUN_100179c0 at 100179c0
 * undefined FUN_100179c0(void)
 * Address ranges: 100179c0-10017a23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100179c0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    piVar3 = (int *)(iVar1 + -4);
    iVar2 = *piVar3;
    iVar1 = iVar1 + iVar2 * 0x20;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      iVar1 = iVar1 + -0x20;
      FUN_10001fd0(iVar1);
    }
    FUN_100fed10(piVar3,*piVar3 * 0x20 + 4);
  }
  return;
}

