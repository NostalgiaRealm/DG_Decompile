/*
 * FUN_10052a45 at 10052a45
 * undefined4 __thiscall FUN_10052a45(void * this, uint param_1, void * param_2, int param_3, undefined4 param_4)
 * Address ranges: 10052a45-10052ad4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10052a45(void *this,uint param_1,void *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  FUN_10058fe6(param_2,*(int *)(param_3 + 0x18),*(int *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc)
               ,*(uint *)(param_3 + 0x10),*(uint *)(param_3 + 0x14),
               *(int **)(*(int *)((int)this + 0x8e0) + 0xc),*(uint *)((int)this + 0x938),
               *(undefined4 *)((int)this + 0x93c));
  FUN_100523d9(this,param_1,0,1,0x400);
  FUN_10051fdb((int)this);
  FUN_100520d4((int)this);
  (**(code **)(**(int **)((int)this + 0x638) + 0x3c))
            (*(int **)((int)this + 0x638),param_1,param_4,0,*(undefined4 *)(param_3 + 4),
             *(uint *)(param_3 + 8) - *(uint *)(param_3 + 0x10),
             (*(int *)(param_3 + 0xc) - *(int *)(param_3 + 0x14)) -
             (uint)(*(uint *)(param_3 + 8) < *(uint *)(param_3 + 0x10)),
             *(undefined4 *)(param_3 + 0x18),0);
  uVar1 = FUN_1005208c((int)this);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

