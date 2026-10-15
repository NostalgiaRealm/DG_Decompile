/*
 * FUN_1008ed60 at 1008ed60
 * undefined __thiscall FUN_1008ed60(void * this, int param_1, undefined1 param_2)
 * Address ranges: 1008ed60-1008ed78
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1008ed60(void *this,int param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_1008e138(this,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 9) = param_2;
  }
  return;
}

