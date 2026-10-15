/*
 * FUN_18009355c at 18009355c
 * bool __fastcall FUN_18009355c(longlong param_1, undefined8 * param_2)
 * Address ranges: 18009355c-180093622
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18009355c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  if (param_2 == (undefined8 *)0x0) {
LAB_180093616:
    bVar3 = false;
  }
  else {
    plVar5 = (longlong *)*param_2;
    uVar6 = -(ulonglong)(plVar5 != (longlong *)0x0) & (ulonglong)(plVar5 + -0x1c);
    *(ulonglong *)(param_1 + 0x120) = uVar6;
    if ((*(char *)(param_2 + 3) == '\0') && (uVar6 != 0)) {
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)&DAT_000000e0;
      }
      iVar4 = (**(code **)(*plVar5 + 0x48))();
      if (((iVar4 == 1) && (lVar1 = *(longlong *)(param_1 + 0x120), *(int *)(lVar1 + 0x34) == 1)) &&
         ((piVar2 = (int *)param_2[1], piVar2 == (int *)0x0 ||
          ((((*piVar2 == 0 && (piVar2[1] == 0)) && (*(int *)(lVar1 + 0x24) == piVar2[2])) &&
           (*(int *)(lVar1 + 0x28) == piVar2[3])))))) {
        piVar2 = (int *)param_2[2];
        if (piVar2 == (int *)0x0) goto LAB_180093616;
        if (((*piVar2 == 0) && (piVar2[1] == 0)) &&
           (*(int *)(*(longlong *)(param_1 + 0x118) + 0x18) == piVar2[2])) {
          return *(int *)(*(longlong *)(param_1 + 0x118) + 0x1c) != piVar2[3];
        }
      }
    }
    bVar3 = true;
  }
  return bVar3;
}

