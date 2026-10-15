/*
 * FUN_1002ab5b at 1002ab5b
 * undefined4 __thiscall FUN_1002ab5b(void * this, undefined4 * param_1)
 * Address ranges: 1002ab5b-1002ab7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002ab5b(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = 0;
    *param_1 = *(undefined4 *)((int)this + 0x1b8);
    param_1[1] = *(undefined4 *)((int)this + 0x1bc);
    param_1[2] = *(undefined4 *)((int)this + 0x1c0);
    param_1[3] = *(undefined4 *)((int)this + 0x1c4);
  }
  return uVar1;
}

