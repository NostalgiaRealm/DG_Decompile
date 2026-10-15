/*
 * FUN_1003f9f9 at 1003f9f9
 * undefined4 __thiscall FUN_1003f9f9(void * this, uint * param_1)
 * Address ranges: 1003f9f9-1003fa47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1003f9f9(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar3 = (int)uVar1 >> 0x1f;
  uVar2 = FUN_1003fca1(this,uVar1,uVar3);
  if (((uVar2 == *(uint *)((int)this + 8)) || (*(uint *)(*(int *)this + uVar2 * 0x10) != uVar1)) ||
     (*(uint *)(*(int *)this + 4 + uVar2 * 0x10) != uVar3)) {
    FUN_1003fe50(this,uVar2,uVar1,uVar3,param_1);
  }
  return *(undefined4 *)(*(int *)this + 0xc + uVar2 * 0x10);
}

