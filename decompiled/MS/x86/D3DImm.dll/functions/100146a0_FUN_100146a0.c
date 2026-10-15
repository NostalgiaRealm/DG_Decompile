/*
 * FUN_100146a0 at 100146a0
 * undefined4 * __thiscall FUN_100146a0(void * this, byte param_1)
 * Address ranges: 100146a0-10014746
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100146a0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_1005e85c;
  FUN_10014c70((int)this);
  FUN_1001a6f5((int)this + 0x1db0);
  thunk_FUN_1005c76c(*(LPVOID *)((int)this + 0x1dbc));
  *(undefined4 *)((int)this + 0x1dbc) = 0;
  *(undefined4 *)((int)this + 0x1dc0) = 0;
  *(undefined4 *)((int)this + 0x1dc8) = 0;
  *(undefined4 *)((int)this + 0x1dc4) = 0;
  thunk_FUN_1005c76c(*(LPVOID *)((int)this + 0x1d94));
  FUN_1001a043((int)this + 0x1d7c);
  thunk_FUN_1005c76c(*(LPVOID *)((int)this + 0x1d84));
  *(undefined4 *)((int)this + 0x1d84) = 0;
  *(undefined4 *)((int)this + 0x1d88) = 0;
  *(undefined4 *)((int)this + 0x1d90) = 0;
  *(undefined4 *)((int)this + 0x1d8c) = 0;
  *(undefined ***)this = &PTR_FUN_1005e914;
  if ((param_1 & 1) != 0) {
    FUN_1005c76c(this);
  }
  return this;
}

