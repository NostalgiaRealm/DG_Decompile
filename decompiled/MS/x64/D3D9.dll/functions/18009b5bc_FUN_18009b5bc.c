/*
 * FUN_18009b5bc at 18009b5bc
 * undefined4 __fastcall FUN_18009b5bc(longlong * param_1, char param_2)
 * Address ranges: 18009b5bc-18009b744
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18009b5bc(longlong *param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  BOOL BVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((*(uint *)((longlong)param_1 + 0x2c) - 0x15 < 0xb) ||
     (((*(uint *)(&DAT_1800ff000 + (ulonglong)*(uint *)((longlong)param_1 + 0x2c) * 4) <=
        (-(uint)(*(int *)((longlong)param_1 + 0x44) != 0) & 0xfffffffe) + 7 &&
       ((int)param_1[7] == 0)) || (*(int *)((longlong)param_1 + 0x44) - 3U < 3)))) {
    uVar7 = 0;
    uVar6 = 0;
    uVar8 = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      do {
        lVar5 = *(longlong *)((longlong)param_1 + 0x164);
        if (((lVar5 != 0) || (lVar5 = *(longlong *)((longlong)param_1 + 0x84), lVar5 != 0)) &&
           (BVar4 = IsRectEmpty((RECT *)(((ulonglong)(uVar6 * *(int *)((longlong)param_1 + 0x3c)) <<
                                          5 | 0x10) + lVar5)), BVar4 == 0)) {
          uVar7 = uVar7 | 1 << ((byte)uVar6 & 0x1f);
        }
        if ((int)param_1[6] != 0) {
          uVar8 = 0;
          do {
            cVar2 = (**(code **)(*param_1 + 8))(param_1,uVar8,uVar6,1);
            uVar1 = 1 << ((byte)uVar6 & 0x1f) | uVar7;
            if (cVar2 == '\0') {
              uVar1 = uVar7;
            }
            uVar7 = uVar1;
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(uint *)(param_1 + 6));
        }
        uVar8 = *(uint *)((longlong)param_1 + 0x34);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar8);
    }
    if (param_2 == '\0') {
      lVar5 = 0x16c;
      if (*(int *)((longlong)param_1 + 0x16c) == -1) {
        lVar5 = 0x8c;
      }
      uVar3 = *(undefined4 *)((longlong)param_1 + lVar5);
    }
    else if (*(int *)((longlong)param_1 + 0x16c) == -1) {
      FUN_18009ade0(param_1 + 0xc,uVar8 != 1,0);
      uVar3 = (undefined4)param_1[0x13];
    }
    else {
      FUN_18009ade0(param_1 + 0x28,uVar8 != 1,*(longlong *)((longlong)param_1 + 0x74));
      uVar3 = (undefined4)param_1[0x2f];
    }
    if (uVar7 != 0) {
      FUN_18009c65c(param_1,(longlong)(param_1 + 0xc),uVar7,*(uint *)((longlong)param_1 + 0x8c),0,0)
      ;
    }
  }
  else {
    uVar3 = FUN_18009dff8(param_1,param_2);
  }
  return uVar3;
}

