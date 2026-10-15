/*
 * FUN_1009f56a at 1009f56a
 * uint __thiscall FUN_1009f56a(void * this, uint * param_1)
 * Address ranges: 1009f56a-1009f5a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1009f56a(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_1009f7c3(this,uVar1,(int)uVar1 >> 0x1f);
  if (uVar2 != *(uint *)((int)this + 8)) {
    uVar2 = uVar2 * 0x10;
    if ((*(uint *)(uVar2 + *(int *)this) == uVar1) &&
       (*(uint *)(uVar2 + 4 + *(int *)this) == (int)uVar1 >> 0x1f)) {
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}

