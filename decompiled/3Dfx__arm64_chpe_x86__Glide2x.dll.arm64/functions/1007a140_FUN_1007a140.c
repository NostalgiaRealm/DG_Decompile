/*
 * FUN_1007a140 at 1007a140
 * undefined FUN_1007a140(void)
 * Address ranges: 1007a140-1007a19b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1007a140(byte *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_2;
  iVar1 = *param_1 - uVar2;
  while (iVar1 == 0) {
    if ((char)uVar2 == '\0') goto LAB_1007a18c;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    uVar2 = (uint)*param_2;
    iVar1 = *param_1 - uVar2;
  }
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
LAB_1007a18c:
    uVar2 = (uint)(iVar1 != 0);
  }
  return uVar2;
}

