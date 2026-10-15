/*
 * FUN_1003fa48 at 1003fa48
 * uint __thiscall FUN_1003fa48(void * this, uint * param_1)
 * Address ranges: 1003fa48-1003fa82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1003fa48(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_1003fca1(this,uVar1,(int)uVar1 >> 0x1f);
  if (uVar2 != *(uint *)((int)this + 8)) {
    uVar2 = uVar2 * 0x10;
    if ((*(uint *)(uVar2 + *(int *)this) == uVar1) &&
       (*(uint *)(uVar2 + 4 + *(int *)this) == (int)uVar1 >> 0x1f)) {
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}

