/*
 * FUN_1000c174 at 1000c174
 * char __thiscall FUN_1000c174(void * this, int param_1, int param_2, uint param_3, char param_4, undefined4 * param_5, undefined4 * param_6)
 * Address ranges: 1000c174-1000c1bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall
FUN_1000c174(void *this,int param_1,int param_2,uint param_3,char param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  char cVar1;
  
  FUN_10048d82(*(void **)((int)this + -0x48),this,(int)this + -0x88);
  cVar1 = FUN_1000bb2c((void *)((int)this + -0x88),param_1,param_2,param_3,param_4,param_5,param_6);
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + -0x48) + 0x4a0));
  return cVar1;
}

