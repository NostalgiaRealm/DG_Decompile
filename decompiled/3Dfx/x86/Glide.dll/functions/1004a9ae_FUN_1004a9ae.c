/*
 * FUN_1004a9ae at 1004a9ae
 * undefined4 * __thiscall FUN_1004a9ae(void * this, int param_1, undefined4 param_2, int param_3)
 * Address ranges: 1004a9ae-1004aa18
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1004a9ae(void *this,int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = *(int *)((int)this + 4);
  if (param_3 == 1) {
    iVar4 = iVar1 + 0x19d0;
  }
  else if (param_3 == 2) {
    iVar4 = iVar1 + 0x1a30;
  }
  else {
    if (param_3 != 3) goto LAB_1004a9eb;
    iVar4 = iVar1 + 0x1a90;
  }
  iVar4 = iVar4 + param_1 * 0x16c0;
LAB_1004a9eb:
  puVar2 = FUN_10038f51(-(uint)(iVar1 != 0) & iVar1 + 0x520U,param_1,iVar4,param_2,0);
  puVar3 = puVar2 + 0xe;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  return puVar3;
}

