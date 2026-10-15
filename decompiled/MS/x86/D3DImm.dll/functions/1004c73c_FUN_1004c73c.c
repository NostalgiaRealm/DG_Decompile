/*
 * FUN_1004c73c at 1004c73c
 * undefined4 __thiscall FUN_1004c73c(void * this, undefined4 * param_1, uint * param_2)
 * Address ranges: 1004c73c-1004c774
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004c73c(void *this,undefined4 *param_1,uint *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (uint *)0x0)) {
    *param_1 = *(undefined4 *)(*(int *)((int)this + 0x88) + 0xd0);
    *param_2 = (uint)(*(int *)((int)this + 0x88) != 0);
    uVar1 = 0;
  }
  return uVar1;
}

