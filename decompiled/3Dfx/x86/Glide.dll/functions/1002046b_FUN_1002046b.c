/*
 * FUN_1002046b at 1002046b
 * undefined __thiscall FUN_1002046b(void * this, int param_1)
 * Address ranges: 1002046b-10020502
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002046b(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)((int)this + 0x138);
  if (((*(int *)(param_1 + 0xb4) != 0) || (*(int *)(param_1 + 0xb0) != 0)) &&
     (uVar2 = FUN_1003d280((void *)(*(int *)(*(int *)(*piVar1 + 0x3188) + 0x1304) + 4),'\0'),
     (char)uVar2 != '\0')) {
    FUN_1003d62e(*(void **)(*(int *)(*piVar1 + 0x3188) + 0x1304),*(uint *)(param_1 + 0xb0),
                 *(uint *)(param_1 + 0xb4));
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    return;
  }
  FUN_10039ca0(*(void **)(*(int *)(*piVar1 + 0x3180) + 0x172c0));
  return;
}

