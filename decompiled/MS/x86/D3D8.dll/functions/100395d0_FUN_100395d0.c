/*
 * FUN_100395d0 at 100395d0
 * undefined __thiscall FUN_100395d0(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 100395d0-10039646
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100395d0(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = *(int *)this;
  iVar3 = param_1 * 0x158;
  *(undefined4 *)(iVar3 + iVar2) = param_2;
  *(undefined4 *)(iVar3 + 4 + iVar2) = param_3;
  puVar1 = param_4;
  puVar4 = (undefined4 *)(*(int *)this + 8 + iVar3);
  for (iVar2 = 0x52; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar1 = (undefined4 *)FUN_100ad475(0x148);
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = puVar1;
    for (iVar2 = 0x52; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *param_4;
      param_4 = param_4 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 **)(iVar3 + 0x150 + *(int *)this) = puVar1;
    return;
  }
  *(undefined4 *)(iVar3 + 0x150 + *(int *)this) = 0;
  return;
}

