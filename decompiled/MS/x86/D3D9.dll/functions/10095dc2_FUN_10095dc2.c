/*
 * FUN_10095dc2 at 10095dc2
 * undefined __thiscall FUN_10095dc2(void * this, int param_1, undefined4 param_2, undefined4 param_3, uint * param_4)
 * Address ranges: 10095dc2-10095e19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10095dc2(void *this,int param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint local_258 [149];
  
  iVar4 = param_1 * 0x260;
  iVar2 = *(int *)this;
  *(undefined4 *)(iVar4 + iVar2) = param_2;
  *(undefined4 *)(iVar4 + 4 + iVar2) = param_3;
  uVar1 = *param_4;
  *(uint *)(iVar4 + 8 + *(int *)this) = uVar1;
  FUN_10072f77(uVar1,*(char *)((int)this + 0xc),local_258);
  puVar3 = local_258;
  puVar5 = (uint *)(iVar4 + 0xc + *(int *)this);
  for (iVar2 = 0x95; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  return;
}

