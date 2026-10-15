/*
 * FUN_18008e824 at 18008e824
 * longlong __fastcall FUN_18008e824(longlong * param_1, byte param_2)
 * Address ranges: 18008e824-18008e98f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18008e824(longlong *param_1,byte param_2)

{
  uint uVar1;
  char cVar2;
  BOOL BVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  if ((*(uint *)((longlong)param_1 + 0x2c) - 0x15 < 0xb) ||
     (((*(uint *)(&DAT_1800ff000 + (ulonglong)*(uint *)((longlong)param_1 + 0x2c) * 4) <=
        (-(uint)(*(int *)((longlong)param_1 + 0x44) != 0) & 0xfffffffe) + 7 &&
       ((int)param_1[7] == 0)) || (*(int *)((longlong)param_1 + 0x44) - 3U < 3)))) {
    uVar7 = 0;
    uVar5 = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      do {
        lVar4 = param_1[0x29];
        if (((lVar4 != 0) || (lVar4 = param_1[0x12], lVar4 != 0)) &&
           (BVar3 = IsRectEmpty((RECT *)(lVar4 + (ulonglong)
                                                 (uVar5 * *(int *)((longlong)param_1 + 0x3c)) * 0x28
                                                 + 0x18)), BVar3 == 0)) {
          uVar7 = uVar7 | 1 << ((byte)uVar5 & 0x1f);
        }
        if ((int)param_1[6] != 0) {
          uVar8 = 0;
          do {
            cVar2 = (**(code **)(*param_1 + 8))(param_1,uVar8,uVar5,1);
            uVar1 = 1 << ((byte)uVar5 & 0x1f) | uVar7;
            if (cVar2 == '\0') {
              uVar1 = uVar7;
            }
            uVar7 = uVar1;
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(uint *)(param_1 + 6));
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)((longlong)param_1 + 0x34));
    }
    lVar4 = param_1[0x28];
    if (param_2 == 0) {
      if (lVar4 == 0) {
        lVar4 = param_1[0x11];
      }
    }
    else {
      if (lVar4 == 0) {
        lVar6 = 0x98;
        lVar4 = 0;
        uVar5 = 0x60;
      }
      else {
        lVar4 = param_1[0xf];
        lVar6 = 0x150;
        uVar5 = 0x118;
      }
      FUN_18008e464((ulonglong)uVar5 + (longlong)param_1,lVar4);
      lVar4 = *(longlong *)((longlong)param_1 + lVar6);
    }
    if (uVar7 != 0) {
      FUN_18008f918(param_1,(longlong)(param_1 + 0xc),0,uVar7,*(int *)((longlong)param_1 + 0x3c));
    }
  }
  else {
    lVar4 = FUN_18008f088(param_1,param_2);
  }
  return lVar4;
}

