/*
 * FUN_1003d680 at 1003d680
 * undefined FUN_1003d680(void)
 * Address ranges: 1003d680-1003d75b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003d680(int param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  
  *param_2 = 0;
  *param_3 = 0;
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  cVar2 = (*extraout_w11)(param_1);
  if (cVar2 != '\0') {
    (*pcVar1)();
    iVar3 = (*extraout_w11_00)(param_1);
    if (*(int *)(param_1 + 0xc) == 1) {
      *param_2 = *(int *)(&DAT_101714e4 + iVar3 * 0x45);
      iVar4 = *(int *)((int)&DAT_101714e4 + iVar3 * 0x228 + 4);
    }
    else {
      iVar3 = iVar3 * 0x228;
      iVar4 = *(int *)(&DAT_1017152c + iVar3);
      *param_2 = *(int *)(&DAT_10171518 + iVar3) * *(int *)(&DAT_10171528 + iVar3);
      iVar4 = *(int *)(&DAT_1017151c + iVar3) * iVar4;
    }
    *param_3 = iVar4;
  }
  return;
}

