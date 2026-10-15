/*
 * FUN_1004f4dd at 1004f4dd
 * undefined __thiscall FUN_1004f4dd(void * this, undefined4 * param_1, int param_2, int param_3)
 * Address ranges: 1004f4dd-1004f505
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004f4dd(void *this,undefined4 *param_1,int param_2,int param_3)

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

