/*
 * FUN_1007e4d4 at 1007e4d4
 * undefined4 * __thiscall FUN_1007e4d4(void * this, int param_1, int param_2, int param_3, int param_4, undefined4 param_5, int param_6, int param_7, int param_8, uint param_9)
 * Address ranges: 1007e4d4-1007e54d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1007e4d4(void *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            int param_6,int param_7,int param_8,uint param_9)

{
  void *this_00;
  undefined4 *puVar1;
  undefined4 uVar2;
  uint local_8;
  
  this_00 = (void *)FUN_100cfd55(0x1f0);
  if (this_00 != (void *)0x0) {
    local_8 = CONCAT31((int3)((uint)this >> 8),*(int *)(*(int *)((int)this + 4) + 0x7c) != 2);
    puVar1 = FUN_1008506c(this_00,(int)this,param_3,param_4,param_6,param_7,param_1,param_2,param_5,
                          param_8,param_9,local_8);
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = FUN_10084819(puVar1);
      if ((char)uVar2 != '\0') {
        return puVar1 + 0x30;
      }
      FUN_100851b3(puVar1);
      FUN_100cfd6c(puVar1);
    }
  }
  return (undefined4 *)0x0;
}

