/*
 * FUN_1007b620 at 1007b620
 * undefined1 __thiscall FUN_1007b620(void * this, int param_1, int param_2, int param_3, int param_4, uint * param_5)
 * Address ranges: 1007b620-1007b689
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall
FUN_1007b620(void *this,int param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  undefined1 uVar1;
  uint uVar3;
  undefined4 uVar2;
  
  if (*(char *)((int)this + 0xc9) == '\0') {
    uVar3 = FUN_100793b5(this,param_1,param_2,param_3,param_4,param_5);
    uVar1 = (undefined1)uVar3;
  }
  else {
    FUN_100b8667(*(void **)((int)this + -0x48),this,(int)this + -0x88);
    uVar2 = FUN_10079015((void *)((int)this + -0x88),param_1,param_2,param_3,param_4,(int *)param_5)
    ;
    uVar1 = (undefined1)uVar2;
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + -0x48) + 0x4a0));
  }
  return uVar1;
}

