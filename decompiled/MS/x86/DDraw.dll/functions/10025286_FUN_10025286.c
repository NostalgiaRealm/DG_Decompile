/*
 * FUN_10025286 at 10025286
 * undefined __thiscall FUN_10025286(void * this, int param_1)
 * Address ranges: 10025286-100252bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10025286(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x11c) * 0xa4;
  if (*(undefined4 **)(&DAT_1006994c + param_1 * 4 + iVar1) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(&DAT_1006994c + param_1 * 4 + iVar1))(1);
    *(undefined4 *)(&DAT_1006994c + param_1 * 4 + iVar1) = 0;
  }
  return;
}

