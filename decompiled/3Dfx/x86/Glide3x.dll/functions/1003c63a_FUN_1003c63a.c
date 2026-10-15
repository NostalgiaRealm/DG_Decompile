/*
 * FUN_1003c63a at 1003c63a
 * uint __thiscall FUN_1003c63a(void * this, uint * param_1)
 * Address ranges: 1003c63a-1003c674
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1003c63a(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_1003c893(this,uVar1,(int)uVar1 >> 0x1f);
  if (uVar2 != *(uint *)((int)this + 8)) {
    uVar2 = uVar2 * 0x10;
    if ((*(uint *)(uVar2 + *(int *)this) == uVar1) &&
       (*(uint *)(uVar2 + 4 + *(int *)this) == (int)uVar1 >> 0x1f)) {
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}

