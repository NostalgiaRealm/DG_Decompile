/*
 * FUN_1000c5c0 at 1000c5c0
 * undefined FUN_1000c5c0(void)
 * Address ranges: 1000c5c0-1000c643
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000c5c0(int *param_1)

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
      FUN_1007a4e0(*(undefined4 *)(iVar1 + -0xc));
      FUN_1007a4e0(*(undefined4 *)(iVar1 + -0x18));
      iVar1 = iVar1 + -0x1c;
    }
    FUN_1007a4f0(piVar3,*piVar3 * 0x1c + 4);
  }
  return;
}

