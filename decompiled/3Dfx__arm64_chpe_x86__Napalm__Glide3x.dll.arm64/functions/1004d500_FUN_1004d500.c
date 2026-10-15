/*
 * FUN_1004d500 at 1004d500
 * undefined FUN_1004d500(void)
 * Address ranges: 1004d500-1004d597
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004d500(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_1009f19c;
  FUN_10083420(param_1[0x11]);
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
        FUN_1004f1a0(iVar2);
      } while (iVar3 != 0);
    }
    FUN_10083430(piVar1,*piVar1 * 0x10 + 4);
  }
  *param_1 = &PTR_FUN_1009f1ec;
  return;
}

