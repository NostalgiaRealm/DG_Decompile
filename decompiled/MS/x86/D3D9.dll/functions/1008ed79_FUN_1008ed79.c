/*
 * FUN_1008ed79 at 1008ed79
 * undefined __thiscall FUN_1008ed79(void * this, int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1008ed79-1008ed97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1008ed79(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_1008e138(this,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[7] = param_2;
    puVar1[8] = param_3;
  }
  return;
}

