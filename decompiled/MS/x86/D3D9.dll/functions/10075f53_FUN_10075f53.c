/*
 * FUN_10075f53 at 10075f53
 * undefined4 * __thiscall FUN_10075f53(void * this, int param_1, int param_2, int param_3, int param_4, undefined4 param_5, int param_6, int param_7, int param_8, uint param_9)
 * Address ranges: 10075f53-10075fcc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_10075f53(void *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            int param_6,int param_7,int param_8,uint param_9)

{
  bool bVar1;
  void *this_00;
  undefined4 *puVar2;
  uint local_8;
  
  this_00 = (void *)FUN_100cfd55(0x184);
  if (this_00 != (void *)0x0) {
    local_8 = CONCAT31((int3)((uint)this >> 8),*(int *)(*(int *)((int)this + 4) + 0x7c) != 2);
    puVar2 = FUN_10079854(this_00,(int)this,param_3,param_4,param_6,param_7,param_1,param_2,param_5,
                          param_8,param_9,local_8);
    if (puVar2 != (undefined4 *)0x0) {
      bVar1 = FUN_10078925(puVar2);
      if (bVar1) {
        return puVar2 + 0x22;
      }
      FUN_100799af(puVar2);
      FUN_100cfd6c(puVar2);
    }
  }
  return (undefined4 *)0x0;
}

