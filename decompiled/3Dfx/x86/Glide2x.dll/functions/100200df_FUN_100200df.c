/*
 * FUN_100200df at 100200df
 * undefined __thiscall FUN_100200df(void * this, int param_1)
 * Address ranges: 100200df-10020176
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100200df(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)((int)this + 0x138);
  if (((*(int *)(param_1 + 0xb4) != 0) || (*(int *)(param_1 + 0xb0) != 0)) &&
     (uVar2 = FUN_1003cef0((void *)(*(int *)(*(int *)(*piVar1 + 0x3188) + 0x1304) + 4),'\0'),
     (char)uVar2 != '\0')) {
    FUN_1003d29e(*(void **)(*(int *)(*piVar1 + 0x3188) + 0x1304),*(uint *)(param_1 + 0xb0),
                 *(uint *)(param_1 + 0xb4));
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    return;
  }
  FUN_10039910(*(void **)(*(int *)(*piVar1 + 0x3180) + 0x172c0));
  return;
}

