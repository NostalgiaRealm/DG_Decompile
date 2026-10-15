/*
 * FUN_1800184b0 at 1800184b0
 * undefined1 __cdecl FUN_1800184b0(longlong * param_1, uint param_2, int param_3, uint param_4, int param_5, char param_6, longlong param_7, byte param_8)
 * Address ranges: 1800184b0-1800186c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_1800184b0(longlong *param_1,uint param_2,int param_3,uint param_4,int param_5,char param_6,
             longlong param_7,byte param_8)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 uVar7;
  
  uVar7 = 0;
  if ((param_4 != 0xff && param_2 != 0) &&
     (iVar2 = FUN_180016028(param_4,param_3 == 7 || param_3 == 2), iVar2 == 0)) {
    return 0;
  }
  bVar1 = true;
  if (param_3 == 6) {
    if (((int)((longlong *)param_1[0x660])[0x26] == -1) ||
       ((lVar5 = (**(code **)(*(longlong *)param_1[0x660] + 0x58))(),
        *(int *)(lVar5 + 0x18) == *(int *)((longlong)param_1 + 0x2a3c) &&
        (*(int *)(lVar5 + 0x1c) == (int)param_1[0x548])))) goto LAB_1800185c4;
  }
  else if (((param_3 != 7) || (*(int *)(param_1[0x660] + 0x134) == -1)) ||
          ((lVar5 = (**(code **)(*(longlong *)param_1[0x660] + 0x58))(),
           *(int *)(lVar5 + 0x18) == (int)param_1[0x54a] &&
           (*(int *)(lVar5 + 0x1c) == *(int *)((longlong)param_1 + 0x2a54))))) goto LAB_1800185c4;
  bVar1 = false;
LAB_1800185c4:
  plVar6 = param_1 + 0x660;
  (**(code **)(*param_1 + 0x2f8))(param_1);
  if (bVar1) {
    FUN_1800176c0(param_1,param_3);
    uVar3 = FUN_180016f80((longlong *)*plVar6,param_3);
    if (uVar3 != 0xffffffff) {
      lVar5 = (**(code **)(*(longlong *)*plVar6 + 0x58))((longlong *)*plVar6,uVar3);
      if ((param_3 == *(int *)((longlong)param_1 + 0x29fc)) || (*(char *)(lVar5 + 0x48) != '\0')) {
        (**(code **)(*param_1 + 0x2e0))(param_1);
      }
      uVar4 = FUN_180017418((longlong)param_1,param_2,uVar3,param_4,param_5,param_6,param_7,param_8,
                            0,0,0);
      uVar7 = (undefined1)uVar4;
      if ((uVar4 & 0xff) != 0) {
        if (param_3 == 6) {
          *(uint *)(*plVar6 + 0x130) = uVar3;
        }
        else if (param_3 == 7) {
          *(uint *)(*plVar6 + 0x134) = uVar3;
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x300))(param_1);
  return uVar7;
}

