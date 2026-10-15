/*
 * FUN_10078b88 at 10078b88
 * undefined __thiscall FUN_10078b88(void * this, int param_1, undefined1 param_2)
 * Address ranges: 10078b88-10078ba0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10078b88(void *this,int param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_10077f60(this,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 9) = param_2;
  }
  return;
}

