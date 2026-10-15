/*
 * FUN_10011aed at 10011aed
 * undefined4 * __thiscall FUN_10011aed(void * this, int param_1, int param_2, int param_3, int param_4, undefined4 param_5, int param_6, undefined4 param_7, int param_8, uint param_9)
 * Address ranges: 10011aed-10011b66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_10011aed(void *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            int param_6,undefined4 param_7,int param_8,uint param_9)

{
  void *this_00;
  undefined4 *puVar1;
  undefined4 uVar2;
  uint local_8;
  
  this_00 = (void *)FUN_10060bca(0x1f0);
  if (this_00 != (void *)0x0) {
    local_8 = CONCAT31((int3)((uint)this >> 8),*(int *)(*(int *)((int)this + 4) + 0x7c) != 2);
    puVar1 = FUN_100185d0(this_00,(int)this,param_3,param_4,param_6,param_7,param_1,param_2,param_5,
                          param_8,param_9,local_8);
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = FUN_10017d70(puVar1);
      if ((char)uVar2 != '\0') {
        return puVar1 + 0x30;
      }
      FUN_10018717(puVar1);
      FUN_10060be1(puVar1);
    }
  }
  return (undefined4 *)0x0;
}

