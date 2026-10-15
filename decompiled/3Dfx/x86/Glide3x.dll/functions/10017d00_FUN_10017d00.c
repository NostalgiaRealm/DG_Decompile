/*
 * FUN_10017d00 at 10017d00
 * undefined __cdecl FUN_10017d00(undefined4 * param_1)
 * Address ranges: 10017d00-10017d32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10017d00(undefined4 *param_1)

{
  void *this;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_38 [13];
  
  this = (void *)*param_1;
  puVar3 = (undefined4 *)param_1[1];
  FUN_10008f74((int)this);
  puVar1 = FUN_1000e132(this,auStack_38);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

