/*
 * FUN_10024ab3 at 10024ab3
 * undefined __thiscall FUN_10024ab3(void * this, uint param_1)
 * Address ranges: 10024ab3-10024ae0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10024ab3(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x11c) * 0x228;
  uVar1 = *(uint *)(&DAT_1006c4a8 + iVar2);
  *(uint *)(&DAT_1006c4a8 + iVar2) = param_1 + *(uint *)(&DAT_1006c4a8 + iVar2);
  *(uint *)(&DAT_1006c4ac + iVar2) = *(int *)(&DAT_1006c4ac + iVar2) + (uint)CARRY4(param_1,uVar1);
  return;
}

