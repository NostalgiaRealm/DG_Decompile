/*
 * FUN_1005c6c0 at 1005c6c0
 * undefined FUN_1005c6c0(void)
 * Address ranges: 1005c6c0-1005c757
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005c6c0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_100b2c10;
  FUN_100914d0(param_1[0x11]);
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
        FUN_1005e360(iVar2);
      } while (iVar3 != 0);
    }
    FUN_100914e0(piVar1,*piVar1 * 0x10 + 4);
  }
  *param_1 = &PTR_FUN_100b2c60;
  return;
}

