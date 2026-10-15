/*
 * FUN_1000a876 at 1000a876
 * undefined __thiscall FUN_1000a876(void * this, int param_1, int param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 1000a876-1000a8cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1000a876(void *this,int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar3 = param_1 * 0x40;
  iVar4 = *(int *)this;
  *(int *)(iVar3 + iVar4) = param_2;
  *(undefined4 *)(iVar3 + 4 + iVar4) = param_3;
  puVar5 = param_4;
  puVar6 = (undefined4 *)(*(int *)this + iVar3 + 8);
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  piVar2 = FUN_1000690d(this,&param_2,(int)param_4);
  iVar4 = piVar2[1];
  iVar1 = *(int *)this;
  *(int *)(iVar3 + 0x34 + iVar1) = *piVar2;
  *(int *)(iVar3 + 0x38 + iVar1) = iVar4;
  return;
}

