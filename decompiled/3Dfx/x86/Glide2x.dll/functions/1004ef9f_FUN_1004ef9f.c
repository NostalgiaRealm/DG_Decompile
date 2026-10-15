/*
 * FUN_1004ef9f at 1004ef9f
 * undefined4 __fastcall FUN_1004ef9f(int * param_1)
 * Address ranges: 1004ef9f-1004f01b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1004ef9f(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  if (param_1[3] != -1) {
    iVar4 = param_1[3] * 0xc;
    uVar5 = *(undefined4 *)(iVar4 + *param_1);
    *(undefined4 *)(iVar4 + *param_1) = 0;
    iVar4 = param_1[3];
    iVar1 = *param_1;
    iVar3 = iVar4 * 0xc;
    iVar2 = *(int *)(iVar3 + 8 + iVar1);
    if ((iVar2 != -1) && (*(int *)(iVar2 * 0xc + iVar1) != 0)) {
      param_1[3] = iVar2;
      *(undefined4 *)(iVar3 + 8 + iVar1) = *(undefined4 *)(param_1[4] * 0xc + 8 + iVar1);
      *(int *)(iVar3 + 4 + *param_1) = param_1[4];
      *(int *)(param_1[4] * 0xc + 8 + *param_1) = iVar4;
      iVar1 = *(int *)(iVar3 + 8 + *param_1);
      if (iVar1 != -1) {
        *(int *)(iVar1 * 0xc + 4 + *param_1) = iVar4;
      }
    }
  }
  return uVar5;
}

