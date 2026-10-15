/*
 * FUN_1001866d at 1001866d
 * undefined __cdecl FUN_1001866d(undefined4 * param_1)
 * Address ranges: 1001866d-10018697
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1001866d(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *this;
  int iVar2;
  
  puVar1 = (undefined4 *)*param_1;
  this = (void *)param_1[1];
  iVar2 = param_1[2];
  *(undefined4 *)((int)this + 0x43d0) = param_1[3];
  FUN_10008736(this,puVar1,puVar1 + iVar2,puVar1 + iVar2 * 2,'\x01');
  return;
}

