/*
 * FUN_10015f3a at 10015f3a
 * undefined __cdecl FUN_10015f3a(undefined4 * param_1)
 * Address ranges: 10015f3a-10015f60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10015f3a(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *this;
  int iVar2;
  
  puVar1 = (undefined4 *)*param_1;
  this = (void *)param_1[1];
  iVar2 = param_1[2];
  *(undefined4 *)((int)this + 0x4038) = param_1[3];
  FUN_100080b0(this,puVar1,puVar1 + iVar2,'\x01');
  return;
}

