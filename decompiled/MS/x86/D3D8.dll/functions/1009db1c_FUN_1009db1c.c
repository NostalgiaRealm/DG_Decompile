/*
 * FUN_1009db1c at 1009db1c
 * undefined __thiscall FUN_1009db1c(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 1009db1c-1009db5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1009db1c(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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

