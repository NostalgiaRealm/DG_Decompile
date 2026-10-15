/*
 * FUN_10032861 at 10032861
 * undefined __fastcall FUN_10032861(void * param_1)
 * Address ranges: 10032861-100328ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10032861(void *param_1)

{
  int iVar1;
  int iVar2;
  RECT *pRVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)((int)param_1 + 4);
  for (iVar5 = *(int *)(iVar1 + 0xb8); iVar5 != 0; iVar5 = iVar5 + -1) {
    iVar2 = *(int *)(iVar1 + 0xb4);
    iVar4 = iVar5 * 0x18;
    if (*(void **)(iVar4 + -0x18 + iVar2) == param_1) {
      pRVar3 = (RECT *)(iVar2 + -0x10 + iVar4);
      if (*(int *)(iVar4 + -0x14 + iVar2) == -1) {
        pRVar3 = (RECT *)0x0;
      }
      FUN_10032da5(param_1,pRVar3);
    }
  }
  return;
}

