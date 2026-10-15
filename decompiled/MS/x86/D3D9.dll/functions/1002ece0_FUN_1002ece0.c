/*
 * FUN_1002ece0 at 1002ece0
 * undefined4 * __thiscall FUN_1002ece0(void * this, byte param_1)
 * Address ranges: 1002ece0-1002ed86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1002ece0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100d52e4;
  FUN_1002f280((int)this);
  FUN_100388fc((int)this + 0xf710);
  thunk_FUN_100cfd6c(*(LPVOID *)((int)this + 0xf71c));
  *(undefined4 *)((int)this + 0xf71c) = 0;
  *(undefined4 *)((int)this + 0xf720) = 0;
  *(undefined4 *)((int)this + 0xf728) = 0;
  *(undefined4 *)((int)this + 0xf724) = 0;
  thunk_FUN_100cfd6c(*(LPVOID *)((int)this + 0xf6f4));
  FUN_100377b9((int)this + 0xf6dc);
  thunk_FUN_100cfd6c(*(LPVOID *)((int)this + 0xf6e4));
  *(undefined4 *)((int)this + 0xf6e4) = 0;
  *(undefined4 *)((int)this + 0xf6e8) = 0;
  *(undefined4 *)((int)this + 0xf6f0) = 0;
  *(undefined4 *)((int)this + 0xf6ec) = 0;
  *(undefined ***)this = &PTR_FUN_100d53f4;
  if ((param_1 & 1) != 0) {
    FUN_100cfd6c(this);
  }
  return this;
}

