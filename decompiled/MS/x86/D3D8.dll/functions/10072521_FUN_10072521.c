/*
 * FUN_10072521 at 10072521
 * undefined __cdecl FUN_10072521(undefined4 * param_1)
 * Address ranges: 10072521-10072543
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10072521(undefined4 *param_1)

{
  int iVar1;
  void *this;
  
  iVar1 = param_1[2];
  this = (void *)*param_1;
  *(undefined1 *)(param_1[1] + 0xd5a) = *(undefined1 *)(param_1 + 3);
  FUN_10096631(this,iVar1,0);
  return;
}

