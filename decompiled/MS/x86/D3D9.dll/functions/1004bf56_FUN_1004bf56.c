/*
 * FUN_1004bf56 at 1004bf56
 * undefined4 __thiscall FUN_1004bf56(void * this, char param_1, char param_2, undefined4 * param_3)
 * Address ranges: 1004bf56-1004bf85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004bf56(void *this,char param_1,char param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  
  uVar2 = 0;
  bVar1 = FUN_10039e45((void *)((int)this + 4),param_1,param_2,param_3);
  if (CONCAT31(extraout_var,bVar1) == 1) {
    uVar2 = 1;
  }
  else if (CONCAT31(extraout_var,bVar1) == 2) {
    uVar2 = 2;
  }
  return uVar2;
}

