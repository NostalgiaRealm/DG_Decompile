/*
 * FUN_1001a2c4 at 1001a2c4
 * undefined __cdecl FUN_1001a2c4(undefined4 * param_1)
 * Address ranges: 1001a2c4-1001a2f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1001a2c4(undefined4 *param_1)

{
  void *this;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_38 [13];
  
  this = (void *)*param_1;
  puVar3 = (undefined4 *)param_1[1];
  FUN_100097c0((int)this);
  puVar1 = FUN_1000f3ec(this,auStack_38);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

