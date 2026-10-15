/*
 * FUN_1007cb7c at 1007cb7c
 * undefined __thiscall FUN_1007cb7c(void * this, int param_1, undefined4 param_2, undefined4 param_3, uint * param_4)
 * Address ranges: 1007cb7c-1007cbd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1007cb7c(void *this,int param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint local_b4 [44];
  
  iVar3 = param_1 * 0xc0;
  iVar1 = *(int *)this;
  *(undefined4 *)(iVar3 + iVar1) = param_2;
  *(undefined4 *)(iVar3 + 4 + iVar1) = param_3;
  *(uint *)(iVar3 + 8 + *(int *)this) = *param_4;
  FUN_1005d2bc(*param_4,*(char *)((int)this + 0xc),local_b4);
  puVar2 = local_b4;
  puVar4 = (uint *)(iVar3 + 0xc + *(int *)this);
  for (iVar1 = 0x2c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}

