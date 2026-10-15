/*
 * FUN_1001b770 at 1001b770
 * int * __thiscall FUN_1001b770(void * this, byte param_1)
 * Address ranges: 1001b770-1001b862
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_1001b770(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_1005ec94;
  FUN_1001cbb0(this);
  thunk_FUN_1005c76c(*(LPVOID *)((int)this + 0x1ec0));
  *(undefined4 *)((int)this + 0x1ec0) = 0;
  *(undefined4 *)((int)this + 0x1ec4) = 0;
  *(undefined4 *)((int)this + 0x1ecc) = 0;
  *(undefined4 *)((int)this + 0x1ec8) = 0;
  thunk_FUN_1005c76c(*(LPVOID *)((int)this + 0x1de0));
  FUN_1001b730((undefined4 *)((int)this + 0x1dd0));
  FUN_10028446((int)this + 0x1db4);
  thunk_FUN_1005c76c(*(LPVOID *)((int)this + 0x1dc0));
  *(undefined4 *)((int)this + 0x1dc0) = 0;
  *(undefined4 *)((int)this + 0x1dc4) = 0;
  *(undefined4 *)((int)this + 0x1dcc) = 0;
  *(undefined4 *)((int)this + 0x1dc8) = 0;
  thunk_FUN_1005c76c(*(LPVOID *)((int)this + 0x1da4));
  FUN_100280ec((int)this + 0x1d88);
  thunk_FUN_1005c76c(*(LPVOID *)((int)this + 0x1d94));
  *(undefined4 *)((int)this + 0x1d94) = 0;
  *(undefined4 *)((int)this + 0x1d98) = 0;
  *(undefined4 *)((int)this + 0x1da0) = 0;
  *(undefined4 *)((int)this + 0x1d9c) = 0;
  *(undefined ***)this = &PTR_FUN_1005e914;
  if ((param_1 & 1) != 0) {
    FUN_1005c76c(this);
  }
  return this;
}

