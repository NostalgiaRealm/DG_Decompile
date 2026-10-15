/*
 * FUN_10077e00 at 10077e00
 * undefined __thiscall FUN_10077e00(void * this, undefined4 param_1)
 * Address ranges: 10077e00-10077e45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10077e00(void *this,undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar3;
  
  iVar2 = FUN_10077c40((int)this);
  iVar3 = extraout_ECX;
  if (((char)iVar2 == '\0') &&
     (((cVar1 = FUN_10077be8(extraout_ECX), cVar1 == '\0' ||
       (iVar3 = extraout_ECX_00, *(int *)((int)this + 0x28) != 0)) &&
      (cVar1 = FUN_1003a4d0(*(int *)((int)this + 0x34)), iVar3 = extraout_ECX_01, cVar1 == '\0'))))
  {
    FUN_100784ed(param_1);
    return;
  }
  FUN_100783fd(this,iVar3,(char)param_1);
  return;
}

