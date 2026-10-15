/*
 * FUN_10014b03 at 10014b03
 * undefined __thiscall FUN_10014b03(void * this, int param_1)
 * Address ranges: 10014b03-10014b9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10014b03(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)((int)this + 0x138);
  if (((*(int *)(param_1 + 0xb4) != 0) || (*(int *)(param_1 + 0xb0) != 0)) &&
     (uVar2 = FUN_10042dde((void *)(*(int *)(*(int *)(*piVar1 + 0x3688) + 0x1304) + 4),'\0'),
     (char)uVar2 != '\0')) {
    FUN_1004318c(*(void **)(*(int *)(*piVar1 + 0x3688) + 0x1304),*(uint *)(param_1 + 0xb0),
                 *(uint *)(param_1 + 0xb4));
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    return;
  }
  FUN_1003f803(*(void **)(*(int *)(*piVar1 + 0x3680) + 0x172c0));
  return;
}

