/*
 * FUN_100306e0 at 100306e0
 * int * __thiscall FUN_100306e0(void * this, byte param_1)
 * Address ranges: 100306e0-100307dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_100306e0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100b22f8;
  *(undefined ***)((int)this + 0xd9b0) = &PTR_FUN_100b22f4;
  FUN_10031b50(this);
  thunk_FUN_100ad48c(*(LPVOID *)((int)this + 0xdb38));
  *(undefined4 *)((int)this + 0xdb38) = 0;
  *(undefined4 *)((int)this + 0xdb3c) = 0;
  *(undefined4 *)((int)this + 0xdb44) = 0;
  *(undefined4 *)((int)this + 0xdb40) = 0;
  thunk_FUN_100ad48c(*(LPVOID *)((int)this + 0xda44));
  FUN_1003067f((undefined4 *)((int)this + 0xda34));
  FUN_1004050a((int)this + 0xda18);
  thunk_FUN_100ad48c(*(LPVOID *)((int)this + 0xda24));
  *(undefined4 *)((int)this + 0xda24) = 0;
  *(undefined4 *)((int)this + 0xda28) = 0;
  *(undefined4 *)((int)this + 0xda30) = 0;
  *(undefined4 *)((int)this + 0xda2c) = 0;
  thunk_FUN_100ad48c(*(LPVOID *)((int)this + 0xda08));
  FUN_1003fd3f((int)this + 0xd9ec);
  thunk_FUN_100ad48c(*(LPVOID *)((int)this + 0xd9f8));
  *(undefined4 *)((int)this + 0xd9f8) = 0;
  *(undefined4 *)((int)this + 0xd9fc) = 0;
  *(undefined4 *)((int)this + 0xda04) = 0;
  *(undefined4 *)((int)this + 0xda00) = 0;
  *(undefined ***)this = &PTR_FUN_100b1f14;
  if ((param_1 & 1) != 0) {
    FUN_100ad48c(this);
  }
  return this;
}

