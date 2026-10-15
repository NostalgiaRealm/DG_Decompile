/*
 * FUN_10078767 at 10078767
 * undefined __thiscall FUN_10078767(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10078767-100787e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10078767(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  BOOL BVar3;
  longlong lVar4;
  undefined8 uVar5;
  LARGE_INTEGER local_c;
  
  local_c.s.LowPart = (DWORD)this;
  local_c.s.HighPart = (LONG)this;
  piVar2 = FUN_10077f60(this,param_1);
  if (piVar2 != (int *)0x0) {
    FUN_10078060(this,piVar2);
    cVar1 = (**(code **)(*(int *)this + 0xa4))(param_2,param_3,param_4);
    if (cVar1 == '\0') {
      BVar3 = QueryPerformanceFrequency(&local_c);
      if (BVar3 != 0) {
        lVar4 = __allmul(*(uint *)(piVar2[5] * 0xc18 + 0x10ca8 + (int)this),
                         *(int *)(piVar2[5] * 0xc18 + 0x10cac + (int)this),1000,0);
        uVar5 = __alldiv((uint)lVar4,(uint)((ulonglong)lVar4 >> 0x20),local_c.s.LowPart,
                         local_c.s.HighPart);
        Sleep((DWORD)uVar5);
      }
    }
  }
  return;
}

