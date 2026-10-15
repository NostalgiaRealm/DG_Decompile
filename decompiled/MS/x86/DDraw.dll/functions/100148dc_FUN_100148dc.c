/*
 * FUN_100148dc at 100148dc
 * bool __thiscall FUN_100148dc(void * this, int param_1, int param_2)
 * Address ranges: 100148dc-10014920
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_100148dc(void *this,int param_1,int param_2)

{
  longlong lVar1;
  SIZE_T SVar2;
  int *piVar3;
  
  lVar1 = (ulonglong)(uint)(param_1 * param_2) * 0x20;
  SVar2 = (SIZE_T)lVar1;
  if ((int)((ulonglong)lVar1 >> 0x20) != 0) {
    SVar2 = 0xffffffff;
  }
  piVar3 = (int *)FUN_10060bfe(SVar2);
  *(int **)((int)this + 0x14) = piVar3;
  if (piVar3 != (int *)0x0) {
    FUN_10060d45(piVar3,0,param_1 * param_2 * 0x20);
  }
  return *(int *)((int)this + 0x14) != 0;
}

