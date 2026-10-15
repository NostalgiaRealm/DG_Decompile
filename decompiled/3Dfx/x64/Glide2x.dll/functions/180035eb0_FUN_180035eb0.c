/*
 * FUN_180035eb0 at 180035eb0
 * undefined __fastcall FUN_180035eb0(longlong param_1)
 * Address ranges: 180035eb0-180035f6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180035eb0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar3 = *(longlong *)(param_1 + 8);
  iVar4 = -1;
  iVar1 = *(int *)(lVar3 + 0x2984);
  iVar5 = 1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  else if (iVar1 == 1) {
    iVar4 = 1;
  }
  else if (iVar1 == 2) {
    iVar4 = 2;
  }
  iVar1 = *(int *)(lVar3 + 0x2988);
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  else if ((iVar1 != 1) && (iVar5 = -1, iVar1 == 2)) {
    iVar5 = 2;
  }
  if (iVar4 != -1) {
    lVar3 = (**(code **)(**(longlong **)(lVar3 + 0x3180) + 0x58))
                      (*(longlong **)(lVar3 + 0x3180),iVar4);
    FUN_180027c18(lVar3);
  }
  if (((iVar5 != -1) &&
      (plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x3180),
      lVar3 = (**(code **)(*plVar2 + 0x58))(plVar2,iVar5),
      *(char *)(*(longlong *)(param_1 + 8) + 0x2adc) != '\0')) && (*(char *)(lVar3 + 0x48) != '\0'))
  {
    FUN_180027c18(lVar3);
  }
  return;
}

