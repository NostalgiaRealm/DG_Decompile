/*
 * FUN_1000e93c at 1000e93c
 * undefined1 __thiscall FUN_1000e93c(void * this, int param_1, int param_2, int param_3, int param_4, uint * param_5)
 * Address ranges: 1000e93c-1000e9a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall
FUN_1000e93c(void *this,int param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  undefined1 uVar1;
  uint uVar3;
  undefined4 uVar2;
  
  if (*(char *)((int)this + 0xc9) == '\0') {
    uVar3 = FUN_1000c73d(this,param_1,param_2,param_3,param_4,param_5);
    uVar1 = (undefined1)uVar3;
  }
  else {
    FUN_10048d82(*(void **)((int)this + -0x48),this,(int)this + -0x88);
    uVar2 = FUN_1000c39d((void *)((int)this + -0x88),param_1,param_2,param_3,param_4,(int *)param_5)
    ;
    uVar1 = (undefined1)uVar2;
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + -0x48) + 0x4a0));
  }
  return uVar1;
}

