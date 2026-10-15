/*
 * FUN_1004719f at 1004719f
 * undefined __thiscall FUN_1004719f(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 1004719f-100471ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1004719f(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar2 = *(int *)this;
  iVar3 = param_1 * 0x118;
  *(undefined4 *)(iVar3 + iVar2) = param_2;
  *(undefined4 *)(iVar3 + 4 + iVar2) = param_3;
  puVar4 = param_4;
  puVar5 = (undefined4 *)(*(int *)this + 8 + iVar3);
  for (iVar2 = 0x42; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar1 = FUN_100469da(*(void **)((int)this + 0xc),*(int *)((int)this + 0x10),param_4);
  *(undefined4 *)(iVar3 + 0x110 + *(int *)this) = uVar1;
  return;
}

