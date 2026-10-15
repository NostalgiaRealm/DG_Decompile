/*
 * FUN_180044078 at 180044078
 * undefined __fastcall FUN_180044078(longlong * param_1, longlong param_2)
 * Address ranges: 180044078-180044118
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180044078(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x24);
  while (uVar3 != 0) {
    lVar1 = param_1[3];
    uVar3 = uVar3 - 1;
    plVar2 = *(longlong **)(lVar1 + 0x10 + (ulonglong)uVar3 * 0x18);
    uVar4 = *(uint *)(plVar2 + 1);
    while (uVar4 != 0) {
      uVar4 = uVar4 - 1;
      if (*(longlong *)(*plVar2 + 0x48 + (ulonglong)uVar4 * 0xa8) == param_2) {
        FUN_1800454f8(*param_1,*(ulonglong *)(*plVar2 + 0xa0 + (ulonglong)uVar4 * 0xa8),
                      &LAB_180044264,'\x01');
        FUN_1800445cc(plVar2,uVar4);
        *(int *)(param_1 + 5) = (int)param_1[5] + -1;
      }
    }
    if ((int)plVar2[1] == 0) {
      FUN_1800442fc(param_1 + 3,(ulonglong *)(lVar1 + 8 + (ulonglong)uVar3 * 0x18));
    }
  }
  return;
}

