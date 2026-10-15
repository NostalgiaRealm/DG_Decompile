/*
 * FUN_100885f4 at 100885f4
 * undefined __cdecl FUN_100885f4(undefined4 * param_1)
 * Address ranges: 100885f4-10088616
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100885f4(undefined4 *param_1)

{
  int iVar1;
  void *this;
  
  iVar1 = param_1[2];
  this = (void *)*param_1;
  *(undefined1 *)(param_1[1] + 0xd5a) = *(undefined1 *)(param_1 + 3);
  FUN_100b8c84(this,iVar1,0);
  return;
}

