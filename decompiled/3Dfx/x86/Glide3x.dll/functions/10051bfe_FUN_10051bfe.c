/*
 * FUN_10051bfe at 10051bfe
 * undefined4 __thiscall FUN_10051bfe(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 10051bfe-10051c2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10051bfe(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 extraout_EAX;
  
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  *(undefined4 *)((int)this + 0x54) = 0xffffffff;
  *(undefined4 *)((int)this + 0x50) = 0xffffffff;
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}

