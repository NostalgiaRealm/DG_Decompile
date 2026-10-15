/*
 * FUN_1001bd7d at 1001bd7d
 * undefined __cdecl FUN_1001bd7d(undefined4 * param_1)
 * Address ranges: 1001bd7d-1001bd9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1001bd7d(undefined4 *param_1)

{
  int iVar1;
  void *this;
  
  iVar1 = param_1[2];
  this = (void *)*param_1;
  *(undefined1 *)(param_1[1] + 0xd5a) = *(undefined1 *)(param_1 + 3);
  FUN_1004939f(this,iVar1,0);
  return;
}

