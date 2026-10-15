/*
 * FUN_1800099a8 at 1800099a8
 * undefined __fastcall FUN_1800099a8(longlong param_1, longlong * param_2, int param_3, undefined8 param_4, uint param_5, uint param_6, longlong param_7, int param_8, longlong param_9, undefined4 param_10)
 * Address ranges: 1800099a8-180009c8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800099a8(longlong param_1,longlong *param_2,int param_3,undefined8 param_4,uint param_5,
                  uint param_6,longlong param_7,int param_8,longlong param_9,undefined4 param_10)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  undefined8 in_stack_fffffffffffffe88;
  undefined4 uVar13;
  ulonglong uVar12;
  undefined4 uVar14;
  uint in_stack_fffffffffffffe98;
  undefined1 uVar15;
  longlong local_148 [34];
  
  lVar6 = param_9;
  lVar5 = param_7;
  uVar13 = (undefined4)((ulonglong)in_stack_fffffffffffffe88 >> 0x20);
  iVar10 = (int)param_4;
  bVar8 = *(int *)(param_1 + 0x69c) != 0;
  lVar1 = *param_2;
  bVar9 = *(int *)(param_1 + 0x698) != 0;
  uVar7 = param_6 * *(int *)(&DAT_1800fda58 + (longlong)param_3 * 8) +
          *(int *)(&DAT_1800fda5c + (longlong)param_3 * 8);
  if ((((*(int *)(lVar1 + 4) == 0) || (!bVar8)) || (*(uint *)(param_1 + 0x360) < 9)) ||
     (*(char *)(param_1 + 0x681b) == '\0')) {
    if ((bVar9) && (*(char *)(param_1 + 0x681b) != '\0')) {
      uVar11 = param_5;
      if (param_7 == 0) {
        iVar10 = 0;
        uVar11 = uVar7;
      }
      FUN_18001f540(param_1,param_9,lVar1,param_4,iVar10,uVar11);
    }
    plVar2 = *(longlong **)(param_1 + 0x28);
    if (lVar5 == 0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,param_3,*param_2,lVar6,param_10,uVar7,bVar8);
    }
    else {
      (**(code **)(*plVar2 + 0x40))
                (plVar2,param_3,*param_2,lVar6,param_10,param_5,lVar5,uVar7,0,param_8 == 0x66,bVar8)
      ;
    }
  }
  else {
    param_6 = FUN_18001ea4c(param_1,lVar1);
    lVar5 = FUN_18000ac60((longlong *)(param_1 + 0x348),&param_6);
    lVar1 = param_7;
    uVar11 = uVar7;
    if (param_7 != 0) {
      uVar11 = param_5 + iVar10;
    }
    lVar6 = param_1;
    bVar4 = FUN_18001e6d4(param_1,uVar11,*(int *)(lVar5 + 0xc));
    if (bVar4) {
      FUN_18001e890(lVar6,*param_2,param_9,(undefined1 *)local_148);
      uVar3 = MXCSR;
      uVar15 = 0;
      in_stack_fffffffffffffe98 = in_stack_fffffffffffffe98 & 0xffffff00;
      param_6 = 0x3fc0;
      uVar14 = 0;
      MXCSR = 0x3fc0;
      if (lVar1 == 0) {
        iVar10 = 0;
        param_5 = uVar7;
      }
      uVar12 = CONCAT44(uVar13,param_5);
      FUN_18001eb84(param_1,local_148,*(longlong *)(param_1 + 0xde8),lVar5,
                    -(uint)bVar9 & 2 | -(uint)bVar8 & 4 | 1,iVar10,param_5,0,'\0');
      lVar6 = **(longlong **)(param_1 + 0x28);
      if (lVar1 == 0) {
        (**(code **)(lVar6 + 0x38))
                  (*(longlong **)(param_1 + 0x28),param_3,lVar5,*(undefined8 *)(param_1 + 0xde8),
                   *(undefined4 *)(lVar5 + 0xc),uVar7,uVar12 & 0xffffffffffffff00,uVar14,
                   in_stack_fffffffffffffe98,uVar15);
        MXCSR = uVar3;
      }
      else {
        (**(code **)(lVar6 + 0x40))();
        MXCSR = uVar3;
      }
    }
  }
  return;
}

