/*
 * FUN_100b2c17 at 100b2c17
 * undefined __thiscall FUN_100b2c17(void * this, undefined4 * param_1, int param_2, int param_3)
 * Address ranges: 100b2c17-100b2c3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100b2c17(void *this,undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(int *)(param_2 * 0xc + 400 + (int)this) + param_3 * 0x14c);
  for (iVar1 = 0x53; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

