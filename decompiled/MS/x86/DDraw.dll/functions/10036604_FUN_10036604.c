/*
 * FUN_10036604 at 10036604
 * undefined1 __thiscall FUN_10036604(void * this, int * param_1)
 * Address ranges: 10036604-10036651
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_10036604(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined1 uVar3;
  void *local_c;
  undefined4 uStack_8;
  
  local_c = this;
  uStack_8 = this;
  FUN_10023df9((int)&uStack_8 + 3);
  local_c = *(void **)((int)this + 0xfc);
  if (local_c != (void *)0x0) {
    puVar1 = (undefined4 *)FUN_10036652((uint *)&local_c);
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = FUN_100363ff((void *)*puVar1,this,extraout_ECX,param_1);
      uVar3 = (undefined1)uVar2;
      goto LAB_10036644;
    }
  }
  uVar3 = 0;
LAB_10036644:
  FUN_10023e27();
  return uVar3;
}

