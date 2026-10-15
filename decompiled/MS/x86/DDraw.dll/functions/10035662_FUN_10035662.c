/*
 * FUN_10035662 at 10035662
 * undefined4 __thiscall FUN_10035662(void * this, undefined4 * param_1)
 * Address ranges: 10035662-10035691
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10035662(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)(*(int *)this + 0x1b8);
    uVar1 = 0;
  }
  return uVar1;
}

