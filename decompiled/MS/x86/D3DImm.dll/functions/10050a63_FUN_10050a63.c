/*
 * FUN_10050a63 at 10050a63
 * undefined __thiscall FUN_10050a63(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 10050a63-10050abe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10050a63(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = *(int *)this;
  iVar3 = param_1 * 0x40;
  *(undefined4 *)(iVar3 + iVar2) = param_2;
  *(undefined4 *)(iVar3 + 4 + iVar2) = param_3;
  puVar4 = (undefined4 *)(*(int *)this + 8 + iVar3);
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *param_4;
    param_4 = param_4 + 1;
    puVar4 = puVar4 + 1;
  }
  piVar1 = (int *)FUN_1005c755(0x2d0);
  if (piVar1 != (int *)0x0) {
    FUN_1005c9cc(piVar1,0,0x2d0);
  }
  *(int **)(iVar3 + 0x3c + *(int *)this) = piVar1;
  return;
}

