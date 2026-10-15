/*
 * FUN_10059ed9 at 10059ed9
 * undefined __thiscall FUN_10059ed9(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 10059ed9-10059f17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10059ed9(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0x28) = param_4;
  *(undefined4 *)((int)this + 0x2c) = param_5;
  *(undefined4 *)((int)this + 0x30) = param_6;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined1 *)((int)this + 0x5c) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  return;
}

