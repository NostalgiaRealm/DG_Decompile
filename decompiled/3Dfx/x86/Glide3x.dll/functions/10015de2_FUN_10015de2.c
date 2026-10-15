/*
 * FUN_10015de2 at 10015de2
 * undefined __cdecl FUN_10015de2(undefined4 * param_1)
 * Address ranges: 10015de2-10015dff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10015de2(undefined4 *param_1)

{
  void *this;
  undefined4 *puVar1;
  
  this = (void *)param_1[1];
  puVar1 = (undefined4 *)*param_1;
  *(undefined4 *)((int)this + 0x4038) = param_1[3];
  FUN_1000800e(this,puVar1,'\x01');
  return;
}

