/*
 * FUN_10017849 at 10017849
 * undefined __cdecl FUN_10017849(undefined4 * param_1)
 * Address ranges: 10017849-1001785e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10017849(undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)param_1[1];
  uVar2 = FUN_10010f73((int *)*param_1);
  *puVar1 = uVar2;
  return;
}

