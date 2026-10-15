/*
 * FUN_10083500 at 10083500
 * undefined FUN_10083500(void)
 * Address ranges: 10083500-1008355b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10083500(byte *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_2;
  iVar1 = *param_1 - uVar2;
  while (iVar1 == 0) {
    if ((char)uVar2 == '\0') goto LAB_1008354c;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    uVar2 = (uint)*param_2;
    iVar1 = *param_1 - uVar2;
  }
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
LAB_1008354c:
    uVar2 = (uint)(iVar1 != 0);
  }
  return uVar2;
}

