/*
 * FUN_1008ed47 at 1008ed47
 * undefined __thiscall FUN_1008ed47(void * this, int param_1, undefined4 param_2)
 * Address ranges: 1008ed47-1008ed5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1008ed47(void *this,int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_1008e138(this,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[6] = param_2;
  }
  return;
}

