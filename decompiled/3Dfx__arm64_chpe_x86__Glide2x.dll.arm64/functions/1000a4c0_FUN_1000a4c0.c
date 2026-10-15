/*
 * FUN_1000a4c0 at 1000a4c0
 * undefined FUN_1000a4c0(void)
 * Address ranges: 1000a4c0-1000a557
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000a4c0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_100947e4;
  FUN_1007a060(param_1[0x11]);
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
        FUN_1000c160(iVar2);
      } while (iVar3 != 0);
    }
    FUN_1007a070(piVar1,*piVar1 * 0x10 + 4);
  }
  *param_1 = &PTR_FUN_10094834;
  return;
}

