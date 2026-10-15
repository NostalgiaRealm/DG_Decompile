/*
 * FUN_1003eacd at 1003eacd
 * undefined4 __thiscall FUN_1003eacd(void * this, uint param_1, void * param_2, int param_3, undefined4 param_4)
 * Address ranges: 1003eacd-1003eb5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1003eacd(void *this,uint param_1,void *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  FUN_1004a094(param_2,*(int *)(param_3 + 0x18),*(int *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc)
               ,*(uint *)(param_3 + 0x10),*(uint *)(param_3 + 0x14),
               *(int **)(*(int *)((int)this + 0x8e0) + 0xc),*(uint *)((int)this + 0x938),
               *(undefined4 *)((int)this + 0x93c));
  FUN_1003d12e(this,param_1,0,1,0x400);
  FUN_1003ca21((int)this);
  FUN_1003cb1a((int)this);
  (**(code **)(**(int **)((int)this + 0x638) + 0x3c))
            (*(int **)((int)this + 0x638),param_1,param_4,0,*(undefined4 *)(param_3 + 4),
             *(uint *)(param_3 + 8) - *(uint *)(param_3 + 0x10),
             (*(int *)(param_3 + 0xc) - *(int *)(param_3 + 0x14)) -
             (uint)(*(uint *)(param_3 + 8) < *(uint *)(param_3 + 0x10)),
             *(undefined4 *)(param_3 + 0x18),0);
  uVar1 = FUN_1003cad2((int)this);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

