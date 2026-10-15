/*
 * FUN_10017a90 at 10017a90
 * undefined FUN_10017a90(void)
 * Address ranges: 10017a90-10017b03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10017a90(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  *param_1 = &PTR_thunk_FUN_100fffb0_10129448;
  iVar1 = param_1[3];
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

