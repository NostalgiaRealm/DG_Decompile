/*
 * FUN_10081083 at 10081083
 * bool __thiscall FUN_10081083(void * this, int param_1, int param_2)
 * Address ranges: 10081083-100810c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_10081083(void *this,int param_1,int param_2)

{
  longlong lVar1;
  SIZE_T SVar2;
  int *piVar3;
  
  lVar1 = (ulonglong)(uint)(param_1 * param_2) * 0x20;
  SVar2 = (SIZE_T)lVar1;
  if ((int)((ulonglong)lVar1 >> 0x20) != 0) {
    SVar2 = 0xffffffff;
  }
  piVar3 = (int *)FUN_100cfd89(SVar2);
  *(int **)((int)this + 0x14) = piVar3;
  if (piVar3 != (int *)0x0) {
    FUN_100cfed0(piVar3,0,param_1 * param_2 * 0x20);
  }
  return *(int *)((int)this + 0x14) != 0;
}

