/*
 * FUN_10007a92 at 10007a92
 * undefined __thiscall FUN_10007a92(void * this, uint param_1, undefined4 * param_2)
 * Address ranges: 10007a92-10007abe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10007a92(void *this,uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(int *)((int)this + 0x9cc) + param_1 * 0x40);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_1000797f(this,param_1);
  return;
}

