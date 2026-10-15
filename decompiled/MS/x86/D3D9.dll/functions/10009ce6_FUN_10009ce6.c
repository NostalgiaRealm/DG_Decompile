/*
 * FUN_10009ce6 at 10009ce6
 * undefined __thiscall FUN_10009ce6(void * this, int param_1, uint param_2, undefined4 param_3, uint * param_4)
 * Address ranges: 10009ce6-10009d43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10009ce6(void *this,int param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint local_258 [149];
  
  uVar1 = param_3;
  iVar4 = param_1 * 0x260;
  param_3 = 0;
  iVar3 = *(int *)this;
  *(uint *)(iVar4 + iVar3) = param_2;
  *(undefined4 *)(iVar4 + 4 + iVar3) = uVar1;
  param_2 = *param_4;
  *(uint *)(iVar4 + 8 + *(int *)this) = param_2;
  puVar2 = FUN_100288b3(local_258,&param_2);
  puVar5 = (uint *)(iVar4 + 0xc + *(int *)this);
  for (iVar3 = 0x95; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  return;
}

