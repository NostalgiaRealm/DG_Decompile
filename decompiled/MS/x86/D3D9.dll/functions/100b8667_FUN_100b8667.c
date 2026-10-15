/*
 * FUN_100b8667 at 100b8667
 * uint __thiscall FUN_100b8667(void * this, undefined4 param_1, int param_2)
 * Address ranges: 100b8667-100b869a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100b8667(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  uint extraout_EAX;
  uint uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  if (param_2 == 0) {
    uVar2 = extraout_EAX & 0xffffff00;
  }
  else {
    iVar1 = *(int *)((int)this + 0x49c);
    *(int *)((int)this + 0x49c) = param_2;
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != param_2);
  }
  return uVar2;
}

