/*
 * FUN_100507cd at 100507cd
 * undefined4 __thiscall FUN_100507cd(void * this, uint * param_1)
 * Address ranges: 100507cd-1005081b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100507cd(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar3 = (int)uVar1 >> 0x1f;
  uVar2 = FUN_10050a75(this,uVar1,uVar3);
  if (((uVar2 == *(uint *)((int)this + 8)) || (*(uint *)(*(int *)this + uVar2 * 0x10) != uVar1)) ||
     (*(uint *)(*(int *)this + 4 + uVar2 * 0x10) != uVar3)) {
    FUN_10050c24(this,uVar2,uVar1,uVar3,param_1);
  }
  return *(undefined4 *)(*(int *)this + 0xc + uVar2 * 0x10);
}

