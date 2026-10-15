/*
 * FUN_180015a78 at 180015a78
 * char __fastcall FUN_180015a78(longlong * param_1, uint param_2, int param_3, DWORD param_4, int param_5, char param_6, longlong param_7, char param_8)
 * Address ranges: 180015a78-180015c27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_180015a78(longlong *param_1,uint param_2,int param_3,DWORD param_4,int param_5,char param_6
                  ,longlong param_7,char param_8)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  cVar2 = '\0';
  if (((param_2 != 0) && (param_4 != 0xff)) &&
     (iVar3 = FUN_180013da0(param_4,param_3 == 7 || param_3 == 2), iVar3 == 0)) {
    return '\0';
  }
  bVar1 = true;
  if (param_3 == 6) {
    plVar6 = (longlong *)param_1[0x660];
    if (((int)plVar6[0x26] == -1) ||
       ((lVar5 = (**(code **)(*plVar6 + 0x58))(),
        *(int *)(lVar5 + 0x18) == *(int *)((longlong)param_1 + 0x2a3c) &&
        (*(int *)(lVar5 + 0x1c) == (int)param_1[0x548])))) goto LAB_180015b37;
  }
  else if (((param_3 != 7) ||
           (plVar6 = (longlong *)param_1[0x660], *(int *)((longlong)plVar6 + 0x134) == -1)) ||
          ((lVar5 = (**(code **)(*plVar6 + 0x58))(), *(int *)(lVar5 + 0x18) == (int)param_1[0x54a]
           && (*(int *)(lVar5 + 0x1c) == *(int *)((longlong)param_1 + 0x2a54)))))
  goto LAB_180015b37;
  bVar1 = false;
LAB_180015b37:
  plVar6 = param_1 + 0x660;
  (**(code **)(*param_1 + 0x2f8))(param_1);
  if (bVar1) {
    FUN_180014ee4(param_1,param_3);
    uVar4 = FUN_180014854((longlong *)*plVar6,param_3);
    if (uVar4 != 0xffffffff) {
      lVar5 = (**(code **)(*(longlong *)*plVar6 + 0x58))((longlong *)*plVar6,uVar4);
      if ((param_3 == *(int *)((longlong)param_1 + 0x29fc)) || (*(char *)(lVar5 + 0x48) != '\0')) {
        (**(code **)(*param_1 + 0x2e0))(param_1);
      }
      cVar2 = FUN_180014ca4((longlong)param_1,param_2,(ulonglong)uVar4,param_4,param_5,param_6,
                            param_7,param_8,0,0,0);
      if (cVar2 != '\0') {
        if (param_3 == 6) {
          *(uint *)(*plVar6 + 0x130) = uVar4;
        }
        else if (param_3 == 7) {
          *(uint *)(*plVar6 + 0x134) = uVar4;
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x300))(param_1);
  return cVar2;
}

