/*
 * FUN_10060282 at 10060282
 * int * __thiscall FUN_10060282(void * this, undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4, int param_5, uint param_6)
 * Address ranges: 10060282-100602e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall
FUN_10060282(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
            int param_5,uint param_6)

{
  char cVar1;
  void *this_00;
  int *piVar2;
  uint local_8;
  
  this_00 = (void *)FUN_100ad475(0xdc);
  if (this_00 != (void *)0x0) {
    local_8 = CONCAT31((int3)((uint)this >> 8),*(int *)(*(int *)((int)this + 4) + 0x7c) != 2);
    piVar2 = FUN_10061e74(this_00,(int)this,param_1,param_2,param_3,param_4,param_5,param_6,local_8)
    ;
    if (piVar2 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar2 + 0x70))();
      if (cVar1 != '\0') {
        return piVar2 + 0x22;
      }
      (**(code **)piVar2[0x22])(1);
    }
  }
  return (int *)0x0;
}

