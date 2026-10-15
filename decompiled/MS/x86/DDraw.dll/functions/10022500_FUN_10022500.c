/*
 * FUN_10022500 at 10022500
 * undefined4 * __thiscall FUN_10022500(void * this, undefined4 * param_1)
 * Address ranges: 10022500-10022544
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10022500(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)((int)this + -0x90);
  *param_1 = *(undefined4 *)((int)this + -0x8c);
  param_1[1] = uVar2;
  param_1[2] = 1;
  uVar2 = FUN_10031f92((int)this + -0x1e8);
  iVar1 = *(int *)((int)this + -0x1c);
  param_1[3] = uVar2;
  param_1[4] = *(undefined4 *)(&DAT_10062cd8 + iVar1 * 4);
  return param_1;
}

