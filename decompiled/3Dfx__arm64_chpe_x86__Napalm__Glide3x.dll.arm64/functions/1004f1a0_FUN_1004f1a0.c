/*
 * FUN_1004f1a0 at 1004f1a0
 * undefined FUN_1004f1a0(void)
 * Address ranges: 1004f1a0-1004f223
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004f1a0(int *param_1)

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
      FUN_10083420(*(undefined4 *)(iVar1 + -0xc));
      FUN_10083420(*(undefined4 *)(iVar1 + -0x18));
      iVar1 = iVar1 + -0x1c;
    }
    FUN_10083430(piVar3,*piVar3 * 0x1c + 4);
  }
  return;
}

