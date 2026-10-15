/*
 * FUN_100134f4 at 100134f4
 * undefined __thiscall FUN_100134f4(void * this, int param_1)
 * Address ranges: 100134f4-1001358b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100134f4(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)((int)this + 0x138);
  if (((*(int *)(param_1 + 0xb4) != 0) || (*(int *)(param_1 + 0xb0) != 0)) &&
     (uVar2 = FUN_1003f9d5((void *)(*(int *)(*(int *)(*piVar1 + 0x3308) + 0x1304) + 4),'\0'),
     (char)uVar2 != '\0')) {
    FUN_1003fd83(*(void **)(*(int *)(*piVar1 + 0x3308) + 0x1304),*(uint *)(param_1 + 0xb0),
                 *(uint *)(param_1 + 0xb4));
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    return;
  }
  FUN_1003c3f5(*(void **)(*(int *)(*piVar1 + 0x3300) + 0x172c0));
  return;
}

