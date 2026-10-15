/*
 * FUN_10009443 at 10009443
 * undefined4 * __thiscall FUN_10009443(void * this, int param_1, int param_2, int param_3, int param_4, undefined4 param_5, int param_6, undefined4 param_7, int param_8, uint param_9)
 * Address ranges: 10009443-100094bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_10009443(void *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            int param_6,undefined4 param_7,int param_8,uint param_9)

{
  bool bVar1;
  void *this_00;
  undefined4 *puVar2;
  uint local_8;
  
  this_00 = (void *)FUN_10060bca(0x184);
  if (this_00 != (void *)0x0) {
    local_8 = CONCAT31((int3)((uint)this >> 8),*(int *)(*(int *)((int)this + 4) + 0x7c) != 2);
    puVar2 = FUN_1000cbdc(this_00,(int)this,param_3,param_4,param_6,param_7,param_1,param_2,param_5,
                          param_8,param_9,local_8);
    if (puVar2 != (undefined4 *)0x0) {
      bVar1 = FUN_1000bc60(puVar2);
      if (bVar1) {
        return puVar2 + 0x22;
      }
      FUN_1000cd37(puVar2);
      FUN_10060be1(puVar2);
    }
  }
  return (undefined4 *)0x0;
}

