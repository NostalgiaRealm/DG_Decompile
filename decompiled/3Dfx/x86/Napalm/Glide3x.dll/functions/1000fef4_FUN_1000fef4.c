/*
 * FUN_1000fef4 at 1000fef4
 * int * __thiscall FUN_1000fef4(void * this, int param_1)
 * Address ranges: 1000fef4-1000ff82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_1000fef4(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 2;
  *(undefined ***)this = &PTR_LAB_100590c8;
  puVar2 = (undefined4 *)((int)this + 0x10c);
  do {
    FUN_1000793b(puVar2);
    puVar2 = puVar2 + 0x14;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(int *)((int)this + 0x1b0) = param_1;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined1 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined1 *)((int)this + 0x1e4) = 0;
  FUN_100083eb(this);
  return this;
}

