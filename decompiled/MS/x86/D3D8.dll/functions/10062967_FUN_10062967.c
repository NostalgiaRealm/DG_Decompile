/*
 * FUN_10062967 at 10062967
 * undefined4 __thiscall FUN_10062967(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 10062967-10062997
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10062967(void *this,undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined4 uVar4;
  uint uVar3;
  
  iVar2 = (**(code **)(*(int *)this + 100))();
  uVar3 = 0;
  if (iVar2 != 0) {
    bVar1 = FUN_10062912(this);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1) {
      uVar4 = (*(code *)**(undefined4 **)this)(param_1,param_2);
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
  return uVar3 & 0xffffff00;
}

