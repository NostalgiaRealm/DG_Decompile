/*
 * FUN_1000172c at 1000172c
 * undefined __thiscall FUN_1000172c(void * this, undefined4 * param_1)
 * Address ranges: 1000172c-1000175b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000172c(void *this,undefined4 *param_1)

{
  ushort uVar1;
  int iVar2;
  
  *param_1 = *(undefined4 *)((int)this + -0x24);
  param_1[1] = *(undefined4 *)((int)this + -0x20);
  uVar1 = *(ushort *)((int)this + -0x40);
  iVar2 = *(int *)((int)this + -0x14);
  param_1[2] = 1;
  param_1[3] = (uint)uVar1;
  param_1[4] = *(undefined4 *)(&DAT_100d15a0 + iVar2 * 4);
  return;
}

