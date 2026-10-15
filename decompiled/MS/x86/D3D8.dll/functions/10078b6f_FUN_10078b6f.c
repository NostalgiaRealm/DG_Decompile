/*
 * FUN_10078b6f at 10078b6f
 * undefined __thiscall FUN_10078b6f(void * this, int param_1, undefined4 param_2)
 * Address ranges: 10078b6f-10078b87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10078b6f(void *this,int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_10077f60(this,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[6] = param_2;
  }
  return;
}

