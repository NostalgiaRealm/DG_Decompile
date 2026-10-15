/*
 * FUN_10003aa0 at 10003aa0
 * undefined __thiscall FUN_10003aa0(void * this, undefined4 param_1)
 * Address ranges: 10003aa0-10003aff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10003aa0(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)this + 0xad0);
  for (iVar2 = *(int *)((int)this + 0xad4); iVar2 != 0; iVar2 = iVar2 + -1) {
    (**(code **)(*(int *)this + 8))(*(undefined4 *)(*piVar1 + -4 + iVar2 * 4),param_1);
  }
  thunk_FUN_100ad48c((LPVOID)*piVar1);
  iVar2 = DAT_100ba2b4;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0xad4) = 0;
  *(undefined4 *)((int)this + 0xad8) = 0;
  piVar1 = (int *)(iVar2 + 0x308);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_100aa354(iVar2);
  }
  *(undefined4 *)((int)this + 0xb28) = 0;
  return;
}

