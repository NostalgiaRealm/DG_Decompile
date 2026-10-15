/*
 * FUN_100183a6 at 100183a6
 * undefined __cdecl FUN_100183a6(undefined4 * param_1)
 * Address ranges: 100183a6-100183c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100183a6(undefined4 *param_1)

{
  void *this;
  undefined4 *puVar1;
  
  this = (void *)param_1[1];
  puVar1 = (undefined4 *)*param_1;
  *(undefined4 *)((int)this + 0x43d0) = param_1[3];
  FUN_100085b8(this,puVar1,'\x01');
  return;
}

