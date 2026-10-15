/*
 * FUN_180048510 at 180048510
 * undefined __cdecl FUN_180048510(longlong * param_1, longlong param_2)
 * Address ranges: 180048510-1800485d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048510(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  uVar2 = *(uint *)((longlong)param_1 + 0x24);
  uVar5 = (ulonglong)uVar2;
  while (uVar2 != 0) {
    uVar2 = (int)uVar5 - 1;
    uVar5 = (ulonglong)uVar2;
    lVar1 = param_1[3] + uVar5 * 0x18;
    plVar6 = *(longlong **)(lVar1 + 0x10);
    uVar3 = *(uint *)(plVar6 + 1);
    while (uVar3 != 0) {
      uVar3 = uVar3 - 1;
      lVar4 = *plVar6 + (ulonglong)uVar3 * 0xa8;
      if (*(longlong *)(lVar4 + 0x38) == param_2) {
        FUN_1800497b8(*param_1,*(ulonglong *)(lVar4 + 0xa0),&LAB_180048830,1);
        FUN_180048a08(plVar6,uVar3);
        *(int *)(param_1 + 5) = (int)param_1[5] + -1;
      }
    }
    if ((int)plVar6[1] == 0) {
      FUN_180048840(param_1 + 3,(ulonglong *)(lVar1 + 8));
    }
  }
  return;
}

