/*
 * FUN_10078ba1 at 10078ba1
 * undefined __thiscall FUN_10078ba1(void * this, int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10078ba1-10078bbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10078ba1(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_10077f60(this,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[7] = param_2;
    puVar1[8] = param_3;
  }
  return;
}

