/*
 * FUN_100bcac4 at 100bcac4
 * undefined4 __thiscall FUN_100bcac4(void * this, uint param_1, void * param_2, int param_3, undefined4 param_4)
 * Address ranges: 100bcac4-100bcb53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_100bcac4(void *this,uint param_1,void *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  FUN_100c09c4(param_2,*(int *)(param_3 + 0x18),*(int *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc)
               ,*(uint *)(param_3 + 0x10),*(uint *)(param_3 + 0x14),
               *(int **)(*(int *)((int)this + 0x8e0) + 0xc),*(uint *)((int)this + 0x938),
               *(undefined4 *)((int)this + 0x93c));
  FUN_100baf7e(this,param_1,0,1,0x400);
  FUN_100ba856((int)this);
  FUN_100ba94f((int)this);
  (**(code **)(**(int **)((int)this + 0x638) + 0x3c))
            (*(int **)((int)this + 0x638),param_1,param_4,0,*(undefined4 *)(param_3 + 4),
             *(uint *)(param_3 + 8) - *(uint *)(param_3 + 0x10),
             (*(int *)(param_3 + 0xc) - *(int *)(param_3 + 0x14)) -
             (uint)(*(uint *)(param_3 + 8) < *(uint *)(param_3 + 0x10)),
             *(undefined4 *)(param_3 + 0x18),0);
  uVar1 = FUN_100ba907((int)this);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

