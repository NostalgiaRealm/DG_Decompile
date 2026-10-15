/*
 * FUN_1009ce3c at 1009ce3c
 * undefined __thiscall FUN_1009ce3c(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 1009ce3c-1009ceaa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1009ce3c(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar2 = *(int *)this;
  iVar5 = param_1 * 0x40;
  *(undefined4 *)(iVar5 + iVar2) = param_2;
  *(undefined4 *)(iVar5 + 4 + iVar2) = param_3;
  puVar6 = (undefined4 *)(*(int *)this + 8 + iVar5);
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *param_4;
    param_4 = param_4 + 1;
    puVar6 = puVar6 + 1;
  }
  piVar1 = (int *)FUN_100ad475(0x2d0);
  if (piVar1 != (int *)0x0) {
    FUN_100ada8e(piVar1,0,0x2d0);
    uVar3 = 0;
    do {
      uVar4 = uVar3 + 1;
      piVar1[uVar3 * 9 + 7] = -1;
      uVar3 = uVar4;
    } while (uVar4 < 0x14);
  }
  *(int **)(iVar5 + 0x3c + *(int *)this) = piVar1;
  return;
}

