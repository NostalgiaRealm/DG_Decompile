/*
 * FUN_1800e2dc4 at 1800e2dc4
 * undefined __fastcall FUN_1800e2dc4(longlong param_1, ulonglong param_2, uint * param_3, uint param_4, longlong * param_5)
 * Address ranges: 1800e2dc4-1800e2fa5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e2dc4(longlong param_1,ulonglong param_2,uint *param_3,uint param_4,longlong *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (*(longlong *)(param_1 + 0xb10) == 0) {
    return;
  }
  plVar1 = (longlong *)(param_1 + 0xb30);
  *(undefined4 *)(param_1 + 0xb38) = 0;
  uVar3 = FUN_1800ea734(*(longlong **)(param_1 + 0xb18),param_2,param_3,param_4,
                        *(longlong *)(param_1 + 0xb10),param_1,*(longlong *)(param_1 + 0xb78),
                        param_5,plVar1);
  if (*(int *)(*(longlong *)(param_1 + 0xb10) + 0x30) == 3) {
    return;
  }
  if (uVar3 == param_4) {
LAB_1800e2f3b:
    uVar6 = 0;
    if (*(int *)(param_1 + 0xb38) != 0) {
      do {
        lVar2 = *plVar1;
        uVar3 = *(uint *)(lVar2 + 4 + uVar6 * 0xc);
        uVar5 = *(uint *)(lVar2 + uVar6 * 0xc);
        if (uVar5 != uVar3) {
          if (uVar5 == 0) {
            uVar4 = uVar3;
            if ((uVar3 & 0xcc0) == uVar3) {
              uVar4 = 0;
            }
            if (uVar4 == 0) goto LAB_1800e2f8d;
          }
          FUN_1800e23ec(param_1,param_2,*(undefined4 *)(lVar2 + 8 + uVar6 * 0xc),uVar5,uVar3);
        }
LAB_1800e2f8d:
        uVar3 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar3;
      } while (uVar3 < *(uint *)(param_1 + 0xb38));
    }
  }
  else {
    if (uVar3 == 0) {
      uVar5 = param_4;
      if ((param_4 & 0xcc0) == param_4) {
        uVar5 = 0;
      }
      if (uVar5 == 0) goto LAB_1800e2f3b;
    }
    if (*(int *)(param_1 + 0xb38) != 0) {
      uVar6 = 0;
      do {
        uVar5 = *(uint *)(*plVar1 + uVar6 * 0xc);
        if (uVar5 != uVar3) {
          if (uVar5 == 0) {
            uVar4 = uVar3;
            if ((uVar3 & 0xcc0) == uVar3) {
              uVar4 = 0;
            }
            if (uVar4 == 0) goto LAB_1800e2ebb;
          }
          FUN_1800e23ec(param_1,param_2,*(undefined4 *)(*plVar1 + 8 + uVar6 * 0xc),uVar5,uVar3);
        }
LAB_1800e2ebb:
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(param_1 + 0xb38));
    }
    FUN_1800e23ec(param_1,param_2,0xffffffff,uVar3,param_4);
    uVar3 = 0;
    if (*(int *)(param_1 + 0xb38) != 0) {
      do {
        uVar5 = *(uint *)(*plVar1 + 4 + (ulonglong)uVar3 * 0xc);
        if (param_4 != uVar5) {
          if (param_4 == 0) {
            uVar4 = uVar5;
            if ((uVar5 & 0xcc0) == uVar5) {
              uVar4 = 0;
            }
            if (uVar4 == 0) goto LAB_1800e2f2f;
          }
          FUN_1800e23ec(param_1,param_2,*(undefined4 *)(*plVar1 + 8 + (ulonglong)uVar3 * 0xc),
                        param_4,uVar5);
        }
LAB_1800e2f2f:
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0xb38));
    }
  }
  return;
}

