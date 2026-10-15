/*
 * FUN_180041dac at 180041dac
 * undefined __fastcall FUN_180041dac(longlong * param_1, longlong param_2)
 * Address ranges: 180041dac-180041e6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180041dac(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)((longlong)param_1 + 0x24);
  while (uVar6 != 0) {
    lVar1 = param_1[3];
    uVar6 = uVar6 - 1;
    plVar2 = *(longlong **)(lVar1 + 0x10 + (ulonglong)uVar6 * 0x18);
    uVar5 = *(uint *)(plVar2 + 1);
    while (uVar5 != 0) {
      uVar5 = uVar5 - 1;
      lVar4 = (ulonglong)uVar5 * 0xa8;
      lVar3 = *plVar2;
      if ((((*(longlong *)(lVar3 + 8 + lVar4) == param_2) ||
           (*(longlong *)(lVar3 + 0x10 + lVar4) == param_2)) ||
          (*(longlong *)(lVar3 + 0x18 + lVar4) == param_2)) ||
         ((*(longlong *)(lVar3 + 0x20 + lVar4) == param_2 ||
          (*(longlong *)(lVar3 + 0x28 + lVar4) == param_2)))) {
        FUN_180043394(*param_1,*(ulonglong *)(lVar3 + 0xa0 + lVar4),&LAB_180042100,'\x01');
        FUN_180042468(plVar2,uVar5);
        *(int *)(param_1 + 5) = (int)param_1[5] + -1;
      }
    }
    if ((int)plVar2[1] == 0) {
      FUN_180042198(param_1 + 3,(ulonglong *)(lVar1 + 8 + (ulonglong)uVar6 * 0x18));
    }
  }
  return;
}

