/*
 * FUN_1004976b at 1004976b
 * uint __thiscall FUN_1004976b(void * this, undefined4 param_1, int param_2)
 * Address ranges: 1004976b-1004979e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1004976b(void *this,undefined4 param_1,int param_2)

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

