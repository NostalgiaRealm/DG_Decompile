/*
 * FUN_1001c67c at 1001c67c
 * undefined __thiscall FUN_1001c67c(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 1001c67c-1001c6b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1001c67c(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)this;
  iVar3 = param_1 * 0x20;
  *(undefined4 *)(iVar3 + iVar1) = param_2;
  *(undefined4 *)(iVar3 + 4 + iVar1) = param_3;
  puVar4 = (undefined4 *)(*(int *)this + 8 + iVar3);
  *puVar4 = *param_4;
  puVar4[1] = param_4[1];
  puVar4[2] = param_4[2];
  puVar4[3] = param_4[3];
  iVar1 = *(int *)this;
  uVar2 = FUN_10049e49(param_4);
  *(undefined4 *)(iVar3 + 0x18 + iVar1) = uVar2;
  return;
}

