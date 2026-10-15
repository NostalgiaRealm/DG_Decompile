/*
 * FUN_100018e5 at 100018e5
 * undefined4 * __thiscall FUN_100018e5(void * this, undefined4 * param_1)
 * Address ranges: 100018e5-1000191a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100018e5(void *this,undefined4 *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = *(undefined4 *)((int)this + -0x28);
  param_1[1] = *(undefined4 *)((int)this + -0x24);
  param_1[2] = *(undefined4 *)((int)this + -0x20);
  uVar1 = *(ushort *)((int)this + -0x90);
  iVar3 = *(int *)((int)this + -0x18);
  *param_1 = uVar2;
  param_1[3] = (uint)uVar1;
  param_1[4] = *(undefined4 *)(&DAT_100af5a8 + iVar3 * 4);
  return param_1;
}

