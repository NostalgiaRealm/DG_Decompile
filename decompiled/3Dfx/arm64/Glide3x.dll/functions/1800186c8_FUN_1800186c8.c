/*
 * FUN_1800186c8 at 1800186c8
 * undefined8 __cdecl FUN_1800186c8(longlong * param_1, uint param_2, int param_3, undefined4 param_4, LONG param_5, LONG param_6, LONG param_7, LONG param_8, byte param_9)
 * Address ranges: 1800186c8-1800189cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800186c8(longlong *param_1,uint param_2,int param_3,undefined4 param_4,LONG param_5,
             LONG param_6,LONG param_7,LONG param_8,byte param_9)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  
  uVar9 = 0;
  if (param_3 == 0) {
    iVar8 = 0;
  }
  else if (param_3 == 1) {
    iVar8 = 1;
  }
  else if (param_3 == 2) {
    iVar8 = 2;
  }
  else {
    if (param_3 == 6) {
      iVar8 = *(int *)(param_1[0x660] + 0x130);
      *(undefined4 *)(param_1[0x660] + 0x130) = 0xffffffff;
    }
    else {
      if (param_3 != 7) {
        return 0;
      }
      iVar8 = *(int *)(param_1[0x660] + 0x134);
      *(undefined4 *)(param_1[0x660] + 0x134) = 0xffffffff;
    }
    if (iVar8 == -1) {
      return 0;
    }
  }
  (**(code **)(*param_1 + 0x2f8))(param_1);
  lVar6 = (**(code **)(*(longlong *)param_1[0x660] + 0x58))((longlong *)param_1[0x660],iVar8);
  lVar7 = lVar6 + (ulonglong)(param_2 & 1) * 4;
  iVar1 = *(int *)(lVar7 + 0x74);
  if (iVar1 != 0) {
    *(int *)(lVar7 + 0x74) = iVar1 + -1;
    if ((*(int *)(lVar6 + 0x74) == 0) && (*(int *)(lVar6 + 0x78) == 0)) {
      uVar9 = FUN_180016dc8((longlong *)param_1[0x660],iVar8,param_4,param_5,param_6,param_7,param_8
                            ,(uint)param_9);
      *(byte *)(lVar6 + 0x9a) = (byte)uVar9 | *(byte *)(lVar6 + 0x9a) & 0xfc;
    }
    if (2 < iVar8) {
      plVar10 = (longlong *)param_1[0x660];
      iVar1 = *(int *)((longlong)param_1 + 0x2a44);
      uVar2 = *(uint *)(param_1 + 0x548);
      uVar3 = *(uint *)((longlong)param_1 + 0x2a3c);
      lVar7 = (**(code **)(*plVar10 + 0x58))(plVar10,iVar8);
      uVar4 = *(uint *)(lVar7 + 0x18);
      if ((uVar3 < uVar4 && uVar2 <= uVar4) ||
         (bVar5 = false, *(uint *)(lVar7 + 0x1c) <= uVar3 && *(uint *)(lVar7 + 0x1c) < uVar2)) {
        bVar5 = true;
      }
      if ((*(uint *)(lVar7 + 0x1c) != uVar4 && !bVar5) &&
         ((((uVar3 != uVar4 || uVar2 != *(uint *)(lVar7 + 0x1c) || (iVar1 != *(int *)(lVar7 + 0x14))
            ) && (*(int *)(lVar7 + 0x74) == 0)) && (*(int *)(lVar7 + 0x78) == 0)))) {
        if ((*(byte *)(lVar7 + 0x4a) >> 1 & 1) != 0) {
          (**(code **)(*plVar10 + 0x40))(plVar10,iVar8,1,0);
          FUN_18002df68((longlong *)plVar10[1],iVar8);
        }
        (**(code **)(*plVar10 + 0x68))(plVar10,iVar8);
        *(undefined4 *)(lVar7 + 0x18) = 0;
        *(undefined4 *)(lVar7 + 0x1c) = 0;
      }
      plVar10 = (longlong *)param_1[0x660];
      lVar7 = param_1[0x54b];
      uVar2 = *(uint *)((longlong)param_1 + 0x2a54);
      uVar3 = *(uint *)(param_1 + 0x54a);
      lVar6 = (**(code **)(*plVar10 + 0x58))(plVar10,iVar8);
      uVar4 = *(uint *)(lVar6 + 0x18);
      if ((uVar3 < uVar4 && uVar2 <= uVar4) ||
         (bVar5 = false, *(uint *)(lVar6 + 0x1c) <= uVar3 && *(uint *)(lVar6 + 0x1c) < uVar2)) {
        bVar5 = true;
      }
      if ((((*(uint *)(lVar6 + 0x1c) != uVar4 && !bVar5) &&
           ((uVar3 != uVar4 || uVar2 != *(uint *)(lVar6 + 0x1c) ||
            ((int)lVar7 != *(int *)(lVar6 + 0x14))))) && (*(int *)(lVar6 + 0x74) == 0)) &&
         (*(int *)(lVar6 + 0x78) == 0)) {
        if ((*(byte *)(lVar6 + 0x4a) >> 1 & 1) != 0) {
          (**(code **)(*plVar10 + 0x40))(plVar10,iVar8,1,0);
          FUN_18002df68((longlong *)plVar10[1],iVar8);
        }
        (**(code **)(*plVar10 + 0x68))(plVar10,iVar8);
        *(undefined4 *)(lVar6 + 0x18) = 0;
        *(undefined4 *)(lVar6 + 0x1c) = 0;
      }
    }
    uVar9 = 1;
  }
  (**(code **)(*param_1 + 0x300))(param_1);
  return uVar9;
}

