/*
 * FUN_1008e93f at 1008e93f
 * undefined __thiscall FUN_1008e93f(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1008e93f-1008e9bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1008e93f(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  BOOL BVar3;
  longlong lVar4;
  undefined8 uVar5;
  LARGE_INTEGER local_c;
  
  local_c.s.LowPart = (DWORD)this;
  local_c.s.HighPart = (LONG)this;
  piVar2 = FUN_1008e138(this,param_1);
  if (piVar2 != (int *)0x0) {
    FUN_1008e238(this,piVar2);
    cVar1 = (**(code **)(*(int *)this + 0xb4))(param_2,param_3,param_4);
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

