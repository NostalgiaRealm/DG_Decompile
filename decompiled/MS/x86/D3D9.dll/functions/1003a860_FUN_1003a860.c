/*
 * FUN_1003a860 at 1003a860
 * int * __thiscall FUN_1003a860(void * this, byte param_1)
 * Address ranges: 1003a860-1003a9d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_1003a860(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100d5890;
  *(undefined ***)((int)this + 0xf6b0) = &PTR_FUN_100d588c;
  FUN_1003c4a0(this);
  thunk_FUN_100cfd6c(*(LPVOID *)((int)this + 0xf8f0));
  *(undefined4 *)((int)this + 0xf8f0) = 0;
  *(undefined4 *)((int)this + 0xf8f4) = 0;
  *(undefined4 *)((int)this + 0xf8fc) = 0;
  *(undefined4 *)((int)this + 0xf8f8) = 0;
  *(undefined ***)((int)this + 0xf768) = &PTR_FUN_100d59ec;
  thunk_FUN_100cfd6c(*(LPVOID *)((int)this + 0xf7b8));
  *(undefined4 *)((int)this + 0xf7b8) = 0;
  *(undefined4 *)((int)this + 0xf7bc) = 0;
  *(undefined4 *)((int)this + 0xf7c4) = 0;
  *(undefined4 *)((int)this + 0xf7c0) = 0;
  thunk_FUN_100cfd6c(*(LPVOID *)((int)this + 0xf790));
  thunk_FUN_100cfd6c(*(LPVOID *)((int)this + 0xf77c));
  *(undefined4 *)((int)this + 0xf77c) = 0;
  *(undefined4 *)((int)this + 0xf780) = 0;
  *(undefined4 *)((int)this + 0xf788) = 0;
  *(undefined4 *)((int)this + 0xf784) = 0;
  thunk_FUN_100cfd6c(*(LPVOID *)((int)this + 0xf744));
  FUN_1003a490((undefined4 *)((int)this + 0xf734));
  FUN_1004e452((int)this + 0xf718);
  thunk_FUN_100cfd6c(*(LPVOID *)((int)this + 0xf724));
  *(undefined4 *)((int)this + 0xf724) = 0;
  *(undefined4 *)((int)this + 0xf728) = 0;
  *(undefined4 *)((int)this + 0xf730) = 0;
  *(undefined4 *)((int)this + 0xf72c) = 0;
  thunk_FUN_100cfd6c(*(LPVOID *)((int)this + 0xf708));
  FUN_1004c7c3((int)this + 0xf6ec);
  thunk_FUN_100cfd6c(*(LPVOID *)((int)this + 0xf6f8));
  *(undefined4 *)((int)this + 0xf6f8) = 0;
  *(undefined4 *)((int)this + 0xf6fc) = 0;
  *(undefined4 *)((int)this + 0xf704) = 0;
  *(undefined4 *)((int)this + 0xf700) = 0;
  *(undefined ***)this = &PTR_FUN_100d53f4;
  if ((param_1 & 1) != 0) {
    FUN_100cfd6c(this);
  }
  return this;
}

