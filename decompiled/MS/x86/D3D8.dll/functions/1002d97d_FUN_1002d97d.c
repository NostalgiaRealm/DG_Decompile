/*
 * FUN_1002d97d at 1002d97d
 * uint __thiscall FUN_1002d97d(void * this, uint param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 1002d97d-1002d9b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1002d97d(void *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0xc);
  uVar2 = *(uint *)((int)this + 8);
  if ((param_4 < uVar1) || ((param_4 <= uVar1 && (param_3 < uVar2)))) {
LAB_1002d9b1:
    uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
  }
  else {
    if ((uVar2 == param_3) && (uVar1 == param_4)) {
      uVar2 = *(uint *)((int)this + 4);
      if ((param_2 < uVar2) || ((param_2 <= uVar2 && (uVar2 = *(uint *)this, param_1 < uVar2))))
      goto LAB_1002d9b1;
    }
    uVar2 = uVar2 & 0xffffff00;
  }
  return uVar2;
}

