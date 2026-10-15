/*
 * FUN_100100f2 at 100100f2
 * undefined __thiscall FUN_100100f2(void * this, uint * param_1)
 * Address ranges: 100100f2-10010140
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100100f2(void *this,uint *param_1)

{
  int iVar1;
  int iVar2;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)(iVar1 + 4);
  FUN_10039456(&local_14,param_1,*(uint *)(iVar2 + 0xae),*(uint *)(iVar2 + 0xb2),
               *(uint *)(iVar2 + 0xb6),*(uint *)(iVar2 + 0xba));
  SetRect((LPRECT)(iVar1 + 0xbc),local_14,local_10,local_c,local_8);
  return;
}

