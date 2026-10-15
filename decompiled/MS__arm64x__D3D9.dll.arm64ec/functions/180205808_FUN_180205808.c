/*
 * FUN_180205808 at 180205808
 * undefined FUN_180205808(void)
 * Address ranges: 180205808-180205907
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180205808(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  uVar2 = *(uint *)((longlong)param_1 + 0x24);
  uVar5 = (ulonglong)uVar2;
  while (uVar2 != 0) {
    uVar2 = (int)uVar5 - 1;
    uVar5 = (ulonglong)uVar2;
    lVar1 = param_1[3] + uVar5 * 0x18;
    plVar7 = *(longlong **)(lVar1 + 0x10);
    if (*(uint *)(plVar7 + 1) != 0) {
      uVar6 = (ulonglong)*(uint *)(plVar7 + 1);
      do {
        uVar3 = (int)uVar6 - 1;
        uVar6 = (ulonglong)uVar3;
        lVar4 = *plVar7 + uVar6 * 0xa8;
        if ((((*(longlong *)(lVar4 + 8) == param_2) || (*(longlong *)(lVar4 + 0x10) == param_2)) ||
            (*(longlong *)(lVar4 + 0x18) == param_2)) ||
           ((*(longlong *)(lVar4 + 0x20) == param_2 || (*(longlong *)(lVar4 + 0x28) == param_2)))) {
          FUN_18020d9f8(*param_1,*(undefined8 *)(lVar4 + 0xa0),FUN_180205c50,1);
          FUN_180205f08(plVar7,uVar6);
          *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + -1;
        }
      } while (uVar3 != 0);
    }
    if ((int)plVar7[1] == 0) {
      FUN_180205d40(param_1 + 3,lVar1 + 8);
    }
  }
  return;
}

