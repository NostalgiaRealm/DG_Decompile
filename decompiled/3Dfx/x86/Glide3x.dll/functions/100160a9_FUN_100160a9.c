/*
 * FUN_100160a9 at 100160a9
 * undefined __cdecl FUN_100160a9(undefined4 * param_1)
 * Address ranges: 100160a9-100160d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100160a9(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *this;
  int iVar2;
  
  puVar1 = (undefined4 *)*param_1;
  this = (void *)param_1[1];
  iVar2 = param_1[2];
  *(undefined4 *)((int)this + 0x4038) = param_1[3];
  FUN_1000818c(this,puVar1,puVar1 + iVar2,puVar1 + iVar2 * 2,'\x01');
  return;
}

