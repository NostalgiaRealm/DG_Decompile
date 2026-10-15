/*
 * FUN_10013057 at 10013057
 * undefined __thiscall FUN_10013057(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 10013057-100130a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10013057(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_14 [3];
  void *local_8;
  
  iVar2 = *(int *)this;
  iVar3 = param_1 * 0x50;
  *(undefined4 *)(iVar3 + iVar2) = param_2;
  *(undefined4 *)(iVar3 + 4 + iVar2) = param_3;
  puVar1 = param_4;
  puVar4 = (undefined4 *)(*(int *)this + 8 + iVar3);
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  local_8 = this;
  puVar1 = FUN_1000f0e9(this,local_14,(int)param_4);
  puVar4 = (undefined4 *)(*(int *)this + iVar3 + 0x40);
  *puVar4 = *puVar1;
  puVar4[1] = puVar1[1];
  puVar4[2] = puVar1[2];
  return;
}

