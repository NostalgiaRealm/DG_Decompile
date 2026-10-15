/*
 * FUN_100fef80 at 100fef80
 * undefined FUN_100fef80(void)
 * Address ranges: 100fef80-100fefdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100fef80(byte *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_2;
  iVar1 = *param_1 - uVar2;
  while (iVar1 == 0) {
    if ((char)uVar2 == '\0') goto LAB_100fefcc;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    uVar2 = (uint)*param_2;
    iVar1 = *param_1 - uVar2;
  }
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
LAB_100fefcc:
    uVar2 = (uint)(iVar1 != 0);
  }
  return uVar2;
}

