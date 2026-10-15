/*
 * FUN_1003960a at 1003960a
 * undefined4 __thiscall FUN_1003960a(void * this, int param_1)
 * Address ranges: 1003960a-1003964a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1003960a(void *this,int param_1)

{
  int iVar1;
  undefined4 uStack_c;
  
  uStack_c = 0;
  iVar1 = *(int *)(param_1 * 0x16c0 + 0x6c0 + *(int *)((int)this + 0x3a8));
  if (iVar1 == 0xb000) {
    uStack_c = 3;
  }
  else if (iVar1 == 0xc000) {
    uStack_c = 5;
  }
  else if (iVar1 == 0xc100) {
    uStack_c = 6;
  }
  return uStack_c;
}

