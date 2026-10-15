/*
 * FUN_1000c160 at 1000c160
 * undefined FUN_1000c160(void)
 * Address ranges: 1000c160-1000c1e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000c160(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    piVar3 = (int *)(iVar1 + -4);
    iVar2 = *piVar3;
    iVar1 = iVar1 + iVar2 * 0x1c;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_1007a060(*(undefined4 *)(iVar1 + -0xc));
      FUN_1007a060(*(undefined4 *)(iVar1 + -0x18));
      iVar1 = iVar1 + -0x1c;
    }
    FUN_1007a070(piVar3,*piVar3 * 0x1c + 4);
  }
  return;
}

