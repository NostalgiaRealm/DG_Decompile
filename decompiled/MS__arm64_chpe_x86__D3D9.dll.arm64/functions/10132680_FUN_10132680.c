/*
 * FUN_10132680 at 10132680
 * undefined FUN_10132680(void)
 * Address ranges: 10132680-101326db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10132680(byte *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_2;
  iVar1 = *param_1 - uVar2;
  while (iVar1 == 0) {
    if ((char)uVar2 == '\0') goto LAB_101326cc;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    uVar2 = (uint)*param_2;
    iVar1 = *param_1 - uVar2;
  }
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
LAB_101326cc:
    uVar2 = (uint)(iVar1 != 0);
  }
  return uVar2;
}

