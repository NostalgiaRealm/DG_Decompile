/*
 * FUN_100b20f0 at 100b20f0
 * undefined __thiscall FUN_100b20f0(void * this, undefined1 * param_1, int param_2)
 * Address ranges: 100b20f0-100b212c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100b20f0(void *this,undefined1 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x3a8);
  iVar2 = param_2 * 0x18;
  *param_1 = *(undefined1 *)(iVar1 + 0x530 + iVar2);
  param_1[1] = *(undefined1 *)(iVar1 + 0x531 + iVar2);
  param_1[2] = *(undefined1 *)(iVar1 + 0x532 + iVar2);
  param_1[3] = *(undefined1 *)(iVar1 + 0x533 + iVar2);
  return;
}

