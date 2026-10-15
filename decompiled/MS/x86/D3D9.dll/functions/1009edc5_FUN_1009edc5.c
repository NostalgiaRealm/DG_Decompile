/*
 * FUN_1009edc5 at 1009edc5
 * undefined __thiscall FUN_1009edc5(void * this, int param_1)
 * Address ranges: 1009edc5-1009edfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1009edc5(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)this + param_1 * 4 + 0x38);
  LOCK();
  piVar1 = puVar3 + 0x26;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (puVar3[0x25] + iVar2 + -1 == 0) {
    FUN_1009e951(puVar3);
  }
  *(undefined4 *)((int)this + param_1 * 4 + 0x38) = 0;
  return;
}

