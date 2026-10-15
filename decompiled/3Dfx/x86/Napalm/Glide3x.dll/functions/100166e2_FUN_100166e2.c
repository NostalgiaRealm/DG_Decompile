/*
 * FUN_100166e2 at 100166e2
 * undefined __cdecl FUN_100166e2(undefined4 * param_1)
 * Address ranges: 100166e2-1001670b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100166e2(undefined4 *param_1)

{
  uint *puVar1;
  void *this;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  this = (void *)*param_1;
  puVar1 = param_1 + 1;
  param_1 = (undefined4 *)CONCAT31(param_1._1_3_,*(undefined1 *)(param_1 + 2));
  FUN_10015f10(this,*puVar1,(uint)param_1,(uint)*(ushort *)(puVar2 + 3),*(byte *)(puVar2 + 4));
  return;
}

