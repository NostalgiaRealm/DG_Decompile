/*
 * FUN_10027360 at 10027360
 * undefined4 * __thiscall FUN_10027360(void * this, byte param_1)
 * Address ranges: 10027360-10027406
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10027360(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100b1e30;
  FUN_100278f0((int)this);
  FUN_1002ec20((int)this + 0xda10);
  thunk_FUN_100ad48c(*(LPVOID *)((int)this + 0xda1c));
  *(undefined4 *)((int)this + 0xda1c) = 0;
  *(undefined4 *)((int)this + 0xda20) = 0;
  *(undefined4 *)((int)this + 0xda28) = 0;
  *(undefined4 *)((int)this + 0xda24) = 0;
  thunk_FUN_100ad48c(*(LPVOID *)((int)this + 0xd9f4));
  FUN_1002e053((int)this + 0xd9dc);
  thunk_FUN_100ad48c(*(LPVOID *)((int)this + 0xd9e4));
  *(undefined4 *)((int)this + 0xd9e4) = 0;
  *(undefined4 *)((int)this + 0xd9e8) = 0;
  *(undefined4 *)((int)this + 0xd9f0) = 0;
  *(undefined4 *)((int)this + 0xd9ec) = 0;
  *(undefined ***)this = &PTR_FUN_100b1f14;
  if ((param_1 & 1) != 0) {
    FUN_100ad48c(this);
  }
  return this;
}

