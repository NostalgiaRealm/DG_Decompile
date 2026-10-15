/*
 * FUN_10047e40 at 10047e40
 * undefined FUN_10047e40(void)
 * Address ranges: 10047e40-10047ed7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10047e40(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_10098dbc;
  FUN_1007dd80(param_1[0x11]);
  param_1[0x11] = 0;
  iVar2 = param_1[0x17];
  if (iVar2 != 0) {
    piVar1 = (int *)(iVar2 + -4);
    iVar3 = *piVar1;
    if (iVar3 != 0) {
      iVar2 = iVar2 + iVar3 * 0x10 + 4;
      do {
        iVar2 = iVar2 + -0x10;
        iVar3 = iVar3 + -1;
        FUN_10049af0(iVar2);
      } while (iVar3 != 0);
    }
    FUN_1007dd90(piVar1,*piVar1 * 0x10 + 4);
  }
  *param_1 = &PTR_FUN_10098e0c;
  return;
}

