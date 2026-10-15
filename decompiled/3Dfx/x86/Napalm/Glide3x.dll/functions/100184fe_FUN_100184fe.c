/*
 * FUN_100184fe at 100184fe
 * undefined __cdecl FUN_100184fe(undefined4 * param_1)
 * Address ranges: 100184fe-10018524
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100184fe(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *this;
  int iVar2;
  
  puVar1 = (undefined4 *)*param_1;
  this = (void *)param_1[1];
  iVar2 = param_1[2];
  *(undefined4 *)((int)this + 0x43d0) = param_1[3];
  FUN_1000865a(this,puVar1,puVar1 + iVar2,'\x01');
  return;
}

