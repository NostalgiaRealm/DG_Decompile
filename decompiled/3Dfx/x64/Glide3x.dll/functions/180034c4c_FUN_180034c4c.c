/*
 * FUN_180034c4c at 180034c4c
 * byte __fastcall FUN_180034c4c(longlong param_1, undefined8 * param_2, undefined4 param_3)
 * Address ranges: 180034c4c-180034e00
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_180034c4c(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  longlong lVar9;
  undefined4 local_58 [2];
  longlong local_50;
  undefined8 local_48;
  
  plVar1 = (longlong *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0xa0) = param_3;
  lVar6 = *plVar1;
  if (lVar6 != 0) {
    lVar9 = *(longlong *)(lVar6 + -8);
    lVar2 = lVar6 + lVar9 * 0x18;
    for (; lVar9 != 0; lVar9 = lVar9 + -1) {
      FUN_1800362d4((longlong *)(lVar2 + -0x10));
      lVar2 = lVar2 + -0x18;
    }
    FUN_180060ac0((longlong *)(lVar6 + -8));
  }
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  local_50 = 0;
  bVar3 = 0;
  bVar8 = 0;
  local_48 = 0;
  local_58[0] = 0xffffffff;
  uVar5 = FUN_18003613c(plVar1,local_58);
  if ((char)uVar5 != '\0') {
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined8 **)(param_1 + 0x38) = param_2;
    iVar4 = (**(code **)*param_2)(param_2,0,0,0);
    if (iVar4 == 0) {
      lVar6 = thunk_FUN_180060a9c(0x1000);
      *(longlong *)(param_1 + 0x30) = lVar6;
      if (lVar6 != 0) {
        lVar6 = thunk_FUN_180060a9c(0x2000);
        *(longlong *)(param_1 + 0x58) = lVar6;
        bVar8 = bVar3;
        if (lVar6 != 0) {
          lVar6 = thunk_FUN_180060a9c(0x80);
          *(longlong *)(param_1 + 0x70) = lVar6;
          if (lVar6 != 0) {
            *(undefined8 *)(param_1 + 0x78) = 0x80;
            *(undefined4 *)(param_1 + 0x54) = 1;
            *(undefined1 *)(param_1 + 0x50) = 0;
            uVar7 = FUN_180034e04(param_1);
            if ((char)uVar7 != '\0') {
              bVar3 = 1;
              do {
                if (*(char *)(param_1 + 0x50) != '\0') break;
                bVar3 = FUN_180035854(param_1);
              } while (bVar3 != 0);
            }
          }
          FUN_180060ac0(*(LPVOID *)(param_1 + 0x58));
          *(undefined8 *)(param_1 + 0x58) = 0;
          bVar8 = bVar3;
        }
        FUN_180060ac0(*(LPVOID *)(param_1 + 0x30));
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
    }
  }
  if (local_50 != 0) {
    plVar1 = (longlong *)(local_50 + -8);
    lVar6 = *plVar1;
    lVar9 = local_50 + lVar6 * 0x28;
    for (; lVar6 != 0; lVar6 = lVar6 + -1) {
      FUN_180060ac0(*(LPVOID *)(lVar9 + -0x10));
      FUN_180060ac0(*(LPVOID *)(lVar9 + -0x20));
      lVar9 = lVar9 + -0x28;
    }
    FUN_180060ac0(plVar1);
  }
  return bVar8;
}

