/*
 * FUN_1004387a at 1004387a
 * uint __thiscall FUN_1004387a(void * this, undefined4 param_1, int param_2)
 * Address ranges: 1004387a-100438ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1004387a(void *this,undefined4 param_1,int param_2)

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

