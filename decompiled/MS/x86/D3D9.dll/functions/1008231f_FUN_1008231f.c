/*
 * FUN_1008231f at 1008231f
 * undefined __thiscall FUN_1008231f(void * this, undefined4 param_1)
 * Address ranges: 1008231f-10082364
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1008231f(void *this,undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar4;
  
  iVar2 = FUN_10077c40((int)this);
  iVar3 = extraout_ECX;
  uVar4 = extraout_EDX;
  if (((char)iVar2 == '\0') &&
     (((cVar1 = FUN_10077be8(extraout_ECX), cVar1 == '\0' ||
       (iVar3 = extraout_ECX_00, uVar4 = extraout_EDX_00, *(int *)((int)this + 0x28) != 0)) &&
      (cVar1 = FUN_1003a4d0(*(int *)((int)this + 0x34)), iVar3 = extraout_ECX_01,
      uVar4 = extraout_EDX_01, cVar1 == '\0')))) {
    FUN_100844c9(param_1);
    return;
  }
  FUN_100843d6(this,uVar4,iVar3,(char)param_1);
  return;
}

