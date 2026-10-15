/*
 * FUN_18009a4ac at 18009a4ac
 * char __fastcall FUN_18009a4ac(longlong * param_1, int * param_2, int * param_3, int * param_4, longlong param_5, longlong param_6, int * param_7, int * param_8, uint param_9, uint param_10, char param_11)
 * Address ranges: 18009a4ac-18009a5f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_18009a4ac(longlong *param_1,int *param_2,int *param_3,int *param_4,longlong param_5,
                  longlong param_6,int *param_7,int *param_8,uint param_9,uint param_10,
                  char param_11)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  
  if (param_7 == (int *)0x0) {
    iVar5 = 0;
    if (param_8 != (int *)0x0) {
      iVar5 = *param_8;
    }
  }
  else {
    iVar5 = *param_7;
  }
  if ((param_4[9] != 1) || (param_4[10] != 0)) {
    piVar4 = param_2;
    if (param_3 != (int *)0x0) {
      piVar4 = param_3;
    }
    plVar2 = FUN_18009a3d0(param_1,piVar4,param_3,param_4,iVar5);
    *(longlong **)((longlong)param_1 + 0x1c) = plVar2;
    if (plVar2 == (longlong *)0x0) {
      return '\0';
    }
  }
  param_4[9] = 1;
  param_4[10] = 0;
  plVar2 = FUN_18009a3d0(param_1,param_2,param_3,param_4,iVar5);
  cVar1 = '\0';
  *(longlong **)((longlong)param_1 + 0x14) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_18009a050(param_1,param_5,param_6,(longlong)param_7,(longlong)param_8,param_9,
                          param_10,param_11);
    cVar1 = (char)uVar3;
    if (cVar1 != '\0') goto LAB_18009a5b1;
    FUN_18009a470((longlong)param_1,*(longlong **)((longlong)param_1 + 0x14));
    *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  }
  if (*(longlong **)((longlong)param_1 + 0x1c) != (longlong *)0x0) {
    FUN_18009a470((longlong)param_1,*(longlong **)((longlong)param_1 + 0x1c));
    *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  }
LAB_18009a5b1:
  if (*(longlong *)((longlong)param_1 + 0x1c) == 0) {
    if (*(longlong *)((longlong)param_1 + 0x14) != 0) {
      *(longlong *)((longlong)param_1 + 0x14) =
           *(longlong *)((longlong)param_1 + 0x14) +
           (ulonglong)*(uint *)(*param_1 + 0x30 + (ulonglong)*(uint *)(param_1 + 1) * 0x28);
    }
  }
  else {
    *(longlong *)((longlong)param_1 + 0x1c) =
         *(longlong *)((longlong)param_1 + 0x1c) +
         (ulonglong)*(uint *)(*param_1 + 0x30 + (ulonglong)*(uint *)(param_1 + 1) * 0x28);
  }
  return cVar1;
}

