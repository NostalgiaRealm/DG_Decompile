/*
 * FUN_10001829 at 10001829
 * undefined __thiscall FUN_10001829(void * this, undefined4 * param_1, uint param_2)
 * Address ranges: 10001829-10001876
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10001829(void *this,undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  
  if (*(uint *)((int)this + 8) < (*(int *)((int)this + 4) - *(int *)this) + param_2) {
    FUN_100017d3(this,param_2);
  }
  puVar2 = param_1;
  puVar4 = *(undefined4 **)((int)this + 4);
  for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = (undefined1 *)((param_2 & 0xfffffffc) + (int)param_1);
  puVar5 = (undefined1 *)(*(int *)((int)this + 4) + (param_2 & 0xfffffffc));
  for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  return;
}

