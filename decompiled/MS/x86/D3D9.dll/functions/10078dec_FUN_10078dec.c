/*
 * FUN_10078dec at 10078dec
 * char __thiscall FUN_10078dec(void * this, int param_1, int param_2, uint param_3, char param_4, undefined4 * param_5, undefined4 * param_6)
 * Address ranges: 10078dec-10078e35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall
FUN_10078dec(void *this,int param_1,int param_2,uint param_3,char param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  char cVar1;
  
  FUN_100b8667(*(void **)((int)this + -0x48),this,(int)this + -0x88);
  cVar1 = FUN_100787f1((void *)((int)this + -0x88),param_1,param_2,param_3,param_4,param_5,param_6);
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + -0x48) + 0x4a0));
  return cVar1;
}

