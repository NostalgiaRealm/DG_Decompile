/*
 * FUN_1002c7ca at 1002c7ca
 * undefined4 * __thiscall FUN_1002c7ca(void * this, undefined4 param_1, int param_2, undefined4 * param_3)
 * Address ranges: 1002c7ca-1002c801
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1002c7ca(void *this,undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_1002e6d2(*(int *)((int)this + 0xd9b0),*(int *)((int)this + 0x10),param_3,param_1,
                        param_2,*(undefined4 *)((int)this + 0x7c),*(undefined1 *)((int)this + 0x86))
  ;
  puVar2 = puVar1 + 6;
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  return puVar2;
}

