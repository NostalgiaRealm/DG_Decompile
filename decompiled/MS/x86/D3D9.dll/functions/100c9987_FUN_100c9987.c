/*
 * FUN_100c9987 at 100c9987
 * undefined4 * __thiscall FUN_100c9987(void * this, int param_1, undefined4 param_2, int param_3)
 * Address ranges: 100c9987-100c99f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100c9987(void *this,int param_1,undefined4 param_2,int param_3)

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
    if (param_3 != 3) goto LAB_100c99c4;
    iVar4 = iVar1 + 0x1a90;
  }
  iVar4 = iVar4 + param_1 * 0x16c0;
LAB_100c99c4:
  puVar2 = FUN_100bf645(-(uint)(iVar1 != 0) & iVar1 + 0x520U,param_1,iVar4,param_2,0);
  puVar3 = puVar2 + 0xe;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  return puVar3;
}

