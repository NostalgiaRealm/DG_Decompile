/*
 * FUN_1006b98e at 1006b98e
 * undefined __thiscall FUN_1006b98e(void * this, int param_1, int param_2, int * param_3)
 * Address ranges: 1006b98e-1006b9dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1006b98e(void *this,int param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = *(int *)(*(int *)(param_2 + 0x10) + 0x4a28 + uVar2 * 4);
    if (iVar1 != 0) {
      FUN_10070c00(this,(uint *)(param_1 + -4 + iVar1 * 4),param_2,param_3);
      FUN_100c3be1((int *)(param_2 + 0x18),param_3,0x3e);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  return;
}

