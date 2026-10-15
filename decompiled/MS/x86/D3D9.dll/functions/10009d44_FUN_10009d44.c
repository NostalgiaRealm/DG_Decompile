/*
 * FUN_10009d44 at 10009d44
 * undefined4 __thiscall FUN_10009d44(void * this, undefined4 * param_1)
 * Address ranges: 10009d44-10009d7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10009d44(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)((int)this + 0xdc4);
    param_1[1] = *(undefined4 *)((int)this + 0xdc8);
    param_1[2] = *(undefined4 *)((int)this + 0xdcc);
    param_1[3] = *(undefined4 *)((int)this + 0xdd0);
    uVar1 = 0;
  }
  return uVar1;
}

