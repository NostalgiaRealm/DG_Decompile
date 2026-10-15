/*
 * FUN_1001cef0 at 1001cef0
 * undefined FUN_1001cef0(void)
 * Address ranges: 1001cef0-1001cf73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001cef0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  param_1[0x13] = &PTR_thunk_FUN_100fffb0_10129448;
  *param_1 = &PTR_FUN_1012944c;
  iVar1 = param_1[0x14];
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

