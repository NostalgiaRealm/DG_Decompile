/*
 * FUN_1801d43a8 at 1801d43a8
 * undefined FUN_1801d43a8(void)
 * Address ranges: 1801d43a8-1801d453f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801d43a8(undefined8 param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + -8;
  }
  FUN_1801e0b70(lVar1);
  if ((param_3 & 1) == 0) {
    lVar6 = 0x138;
    if (param_2 != 0) {
      lVar6 = param_2 + 0x130;
    }
    iVar5 = FUN_1801042d0(lVar6);
    piVar2 = (int *)&DAT_00000134;
    if (param_2 != 0) {
      piVar2 = (int *)(param_2 + 300);
    }
    if (*piVar2 + iVar5 == 0) {
      iVar5 = thunk_FUN_1802236e4(DAT_180258900);
      if (iVar5 == 0) {
        FUN_1801085c8();
      }
      lVar6 = 8;
      if (param_2 != 0) {
        lVar6 = param_2;
      }
      lVar3 = 0;
      if (lVar1 != 0) {
        lVar3 = lVar6;
      }
      plVar4 = (longlong *)&DAT_00000178;
      if (param_2 != 0) {
        plVar4 = (longlong *)(param_2 + 0x170);
      }
      lVar6 = *plVar4;
      if (*(uint *)(lVar6 + 0xe38) != 0) {
        uVar8 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar6 + 0xe30) + uVar8 * 8) == lVar3) {
            if ((int)uVar8 != -1) goto LAB_1801d4508;
            break;
          }
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < *(uint *)(lVar6 + 0xe38));
      }
      if (*(uint *)(lVar6 + 0xeb8) != 0) {
        uVar8 = 0;
        do {
          uVar7 = (uint)uVar8;
          if (*(longlong *)(*(longlong *)(lVar6 + 0xeb0) + uVar8 * 8) == lVar3) {
            if (uVar7 != 0xffffffff) {
              (&DAT_18024ea60)[(ulonglong)*(uint *)(lVar6 + 0xea8) * 0x4b] =
                   (&DAT_18024ea60)[(ulonglong)*(uint *)(lVar6 + 0xea8) * 0x4b] +
                   (ulonglong)*(uint *)(lVar3 + 0x114);
              uVar9 = *(uint *)(lVar6 + 0xeb8);
              if (uVar7 < uVar9) {
                while (uVar7 = (int)uVar8 + 1, uVar7 < uVar9) {
                  *(undefined8 *)(*(longlong *)(lVar6 + 0xeb0) + uVar8 * 8) =
                       *(undefined8 *)(*(longlong *)(lVar6 + 0xeb0) + (ulonglong)uVar7 * 8);
                  uVar8 = (ulonglong)uVar7;
                  uVar9 = *(uint *)(lVar6 + 0xeb8);
                }
                *(uint *)(lVar6 + 0xeb8) = uVar9 - 1;
              }
            }
            break;
          }
          uVar8 = (ulonglong)(uVar7 + 1);
        } while (uVar7 + 1 < *(uint *)(lVar6 + 0xeb8));
      }
LAB_1801d4508:
      FUN_1801e0b70(lVar1);
      if (lVar1 != 0) {
        FUN_1801e0928(lVar1);
        FUN_1802229d8(lVar1,0x188);
      }
      thunk_FUN_18022370c(DAT_180258900);
    }
  }
  return;
}

