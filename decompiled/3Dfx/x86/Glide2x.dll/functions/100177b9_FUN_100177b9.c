/*
 * FUN_100177b9 at 100177b9
 * undefined __thiscall FUN_100177b9(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 100177b9-1001780e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100177b9(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = *(int *)this;
  iVar3 = param_1 * 0x40;
  *(undefined4 *)(iVar3 + iVar2) = param_2;
  *(undefined4 *)(iVar3 + 4 + iVar2) = param_3;
  puVar1 = param_4;
  puVar4 = (undefined4 *)(*(int *)this + 8 + iVar3);
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar1 = (undefined4 *)FUN_1004f60f(0x34);
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = puVar1;
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *param_4;
      param_4 = param_4 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  *(undefined4 **)(iVar3 + 0x3c + *(int *)this) = puVar1;
  return;
}

