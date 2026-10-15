/*
 * FUN_18021fb80 at 18021fb80
 * undefined FUN_18021fb80(void)
 * Address ranges: 18021fb80-18021fbbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18021fb80(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(*param_1 + 0xd2);
  if (iVar1 == 2) {
    uVar2 = 1;
  }
  else if (iVar1 == 3) {
    uVar2 = 2;
  }
  else if (iVar1 == 4) {
    uVar2 = 3;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

