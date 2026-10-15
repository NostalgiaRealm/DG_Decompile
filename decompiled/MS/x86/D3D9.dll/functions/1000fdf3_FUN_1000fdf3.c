/*
 * FUN_1000fdf3 at 1000fdf3
 * undefined4 * __thiscall FUN_1000fdf3(void * this, undefined4 * param_1)
 * Address ranges: 1000fdf3-1000fe26
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1000fdf3(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  FUN_1000fd91((void *)((int)this + 0x10),param_1 + 4);
  return this;
}

