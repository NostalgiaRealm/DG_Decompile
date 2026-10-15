/*
 * FUN_100249cc at 100249cc
 * undefined __cdecl FUN_100249cc(undefined4 * param_1)
 * Address ranges: 100249cc-100249fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100249cc(undefined4 *param_1)

{
  void *this;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_38 [13];
  
  this = (void *)*param_1;
  puVar3 = (undefined4 *)param_1[1];
  FUN_100153a4((int)this);
  puVar1 = FUN_1001dcdc(this,local_38);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

