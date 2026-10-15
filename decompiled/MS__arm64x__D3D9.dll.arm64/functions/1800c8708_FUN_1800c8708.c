/*
 * FUN_1800c8708 at 1800c8708
 * undefined FUN_1800c8708(void)
 * Address ranges: 1800c8708-1800c883b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800c8708(longlong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar7 = CONCAT44(0,param_3);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar7;
  lVar8 = uVar7 << 3;
  if (SUB168(auVar2 * ZEXT816(8),8) != 0) {
    lVar8 = -1;
  }
  lVar8 = thunk_FUN_180102f80(lVar8);
  if (lVar8 == 0) {
    bVar4 = false;
  }
  else {
    *(longlong *)(param_1 + 0x280) = lVar8;
    thunk_FUN_180001218(lVar8,param_2,uVar7 << 3);
    *(uint *)(param_1 + 0x288) = param_3;
    bVar4 = true;
    if (*(int *)(param_1 + 0x30) != 1) {
      lVar8 = FUN_180102f80(0x254);
      bVar4 = lVar8 != 0;
      *(longlong *)(param_1 + 0x278) = lVar8;
      if (lVar8 != 0) {
        FUN_180079cb8(param_1 + 0x20,lVar8);
      }
    }
    if (*(char *)(param_1 + 0x293) == '\0') {
      uVar1 = *(uint *)(param_1 + 0x28);
      bVar3 = false;
      uVar6 = 0;
      do {
        if (uVar1 <= uVar6) break;
        if ((*(char *)(param_1 + 0x234 + (ulonglong)uVar6) != '\0') ||
           (bVar3 = true, *(char *)(param_1 + 0x39) != '\0' && *(char *)(param_1 + 0x39) != -0x70))
        {
          bVar3 = false;
        }
        uVar6 = uVar6 + 1;
      } while (!bVar3);
      *(bool *)(param_1 + 0x290) = bVar3;
      uVar7 = 0;
      if (uVar1 != 0) {
        do {
          if (4 < *(byte *)(param_1 + 0x38 + (ulonglong)*(byte *)(param_1 + 0x234 + uVar7) * 8)) {
            uVar5 = 0;
            goto LAB_1800c879c;
          }
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
        } while (uVar6 < uVar1);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x290) = 1;
    }
    uVar5 = 1;
LAB_1800c879c:
    *(undefined1 *)(param_1 + 0x291) = uVar5;
  }
  return bVar4;
}

