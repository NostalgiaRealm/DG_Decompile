/*
 * FUN_100caf80 at 100caf80
 * undefined FUN_100caf80(void)
 * Address ranges: 100caf80-100cb003
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100caf80(int *param_1)

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
      FUN_100fed00(*(undefined4 *)(iVar1 + -0xc));
      FUN_100fed00(*(undefined4 *)(iVar1 + -0x18));
      iVar1 = iVar1 + -0x1c;
    }
    FUN_100fed10(piVar3,*piVar3 * 0x1c + 4);
  }
  return;
}

