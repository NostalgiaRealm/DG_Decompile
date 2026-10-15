/*
 * FUN_10082d20 at 10082d20
 * undefined FUN_10082d20(void)
 * Address ranges: 10082d20-10082d7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10082d20(byte *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_2;
  iVar1 = *param_1 - uVar2;
  while (iVar1 == 0) {
    if ((char)uVar2 == '\0') goto LAB_10082d6c;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    uVar2 = (uint)*param_2;
    iVar1 = *param_1 - uVar2;
  }
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
LAB_10082d6c:
    uVar2 = (uint)(iVar1 != 0);
  }
  return uVar2;
}

