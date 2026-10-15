/*
 * FUN_10062fe0 at 10062fe0
 * char __thiscall FUN_10062fe0(void * this, int param_1, int param_2, uint param_3, char param_4, undefined4 * param_5, undefined4 * param_6)
 * Address ranges: 10062fe0-10063029
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall
FUN_10062fe0(void *this,int param_1,int param_2,uint param_3,char param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  char cVar1;
  
  FUN_10096014(*(void **)((int)this + -0x48),this,(int)this + -0x88);
  cVar1 = FUN_10062998((void *)((int)this + -0x88),param_1,param_2,param_3,param_4,param_5,param_6);
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + -0x48) + 0x4a0));
  return cVar1;
}

