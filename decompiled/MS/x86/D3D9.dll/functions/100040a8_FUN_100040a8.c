/*
 * FUN_100040a8 at 100040a8
 * undefined __thiscall FUN_100040a8(void * this, undefined4 param_1)
 * Address ranges: 100040a8-10004107
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100040a8(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)this + 0xd94);
  for (iVar2 = *(int *)((int)this + 0xd98); iVar2 != 0; iVar2 = iVar2 + -1) {
    (**(code **)(*(int *)this + 8))(*(undefined4 *)(*piVar1 + -4 + iVar2 * 4),param_1);
  }
  thunk_FUN_100cfd6c((LPVOID)*piVar1);
  iVar2 = DAT_100dea74;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0xd98) = 0;
  *(undefined4 *)((int)this + 0xd9c) = 0;
  piVar1 = (int *)(iVar2 + 0x308);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_100ccc23(iVar2);
  }
  *(undefined4 *)((int)this + 0xdec) = 0;
  return;
}

