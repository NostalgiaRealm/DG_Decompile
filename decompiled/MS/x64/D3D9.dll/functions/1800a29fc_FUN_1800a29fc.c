/*
 * FUN_1800a29fc at 1800a29fc
 * bool __fastcall FUN_1800a29fc(longlong param_1, undefined8 * param_2)
 * Address ranges: 1800a29fc-1800a2ac2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800a29fc(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  if (param_2 == (undefined8 *)0x0) {
LAB_1800a2ab6:
    bVar3 = false;
  }
  else {
    plVar5 = (longlong *)*param_2;
    uVar6 = -(ulonglong)(plVar5 != (longlong *)0x0) & (ulonglong)(plVar5 + -0x20);
    *(ulonglong *)(param_1 + 0x140) = uVar6;
    if ((*(char *)(param_2 + 3) == '\0') && (uVar6 != 0)) {
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)&DAT_00000100;
      }
      iVar4 = (**(code **)(*plVar5 + 0x48))();
      if (((iVar4 == 1) && (lVar1 = *(longlong *)(param_1 + 0x140), *(int *)(lVar1 + 0x34) == 1)) &&
         ((piVar2 = (int *)param_2[1], piVar2 == (int *)0x0 ||
          ((((*piVar2 == 0 && (piVar2[1] == 0)) && (*(int *)(lVar1 + 0x24) == piVar2[2])) &&
           (*(int *)(lVar1 + 0x28) == piVar2[3])))))) {
        piVar2 = (int *)param_2[2];
        if (piVar2 == (int *)0x0) goto LAB_1800a2ab6;
        if (((*piVar2 == 0) && (piVar2[1] == 0)) &&
           (*(int *)(*(longlong *)(param_1 + 0x138) + 0x18) == piVar2[2])) {
          return *(int *)(*(longlong *)(param_1 + 0x138) + 0x1c) != piVar2[3];
        }
      }
    }
    bVar3 = true;
  }
  return bVar3;
}

