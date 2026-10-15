/*
 * FUN_1008f5b4 at 1008f5b4
 * undefined __thiscall FUN_1008f5b4(void * this, undefined4 * param_1)
 * Address ranges: 1008f5b4-1008f5dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1008f5b4(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_18 [5];
  
  puVar1 = FUN_1008f0a2(*(void **)((int)this + 0x1c),local_18);
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

