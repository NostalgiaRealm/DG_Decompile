/*
 * FUN_100370b4 at 100370b4
 * uint __thiscall FUN_100370b4(void * this, uint param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 100370b4-100370ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100370b4(void *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0xc);
  uVar2 = *(uint *)((int)this + 8);
  if ((uVar1 < param_4) || ((uVar1 == param_4 && (uVar2 < param_3)))) {
LAB_100370e8:
    uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
  }
  else {
    if ((uVar2 == param_3) && (uVar1 == param_4)) {
      uVar2 = *(uint *)((int)this + 4);
      if ((uVar2 < param_2) || ((uVar2 == param_2 && (uVar2 = *(uint *)this, uVar2 < param_1))))
      goto LAB_100370e8;
    }
    uVar2 = uVar2 & 0xffffff00;
  }
  return uVar2;
}

