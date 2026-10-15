/*
 * FUN_1801e4db0 at 1801e4db0
 * undefined FUN_1801e4db0(void)
 * Address ranges: 1801e4db0-1801e4f67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801e4db0(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar3 = FUN_1801042d0(param_1 + 8);
    if (*(int *)(param_1 + 0xc) + iVar3 == 0) {
      lVar7 = param_1 + -0xc0;
      if (((*(uint *)(*(longlong *)(param_1 + -0x40) + 0xe78) >> 2 & 1) == 0) &&
         (*(int *)(DAT_180258900 + 0x30) == 0)) {
        bVar2 = false;
        *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
      }
      else {
        bVar2 = true;
        iVar3 = thunk_FUN_1802236e4(DAT_180258900);
        if (iVar3 == 0) {
          FUN_1801085c8();
        }
      }
      plVar8 = (longlong *)(param_1 + -0x98);
      if ((*plVar8 != 0) && ((*(uint *)(param_1 + -0x78) >> 3 & 1) == 0)) {
        FUN_1802229d8(*(undefined8 *)(param_1 + -0x90));
        FUN_1802229d8(*(undefined8 *)(param_1 + -0x88));
        thunk_FUN_180223748(*plVar8,0,0x8000);
        *(undefined8 *)(param_1 + -0x90) = 0;
        *plVar8 = 0;
        *(undefined8 *)(param_1 + -0x80) = 0;
        *(undefined8 *)(param_1 + -0x88) = 0;
        *(undefined8 *)(param_1 + -0x78) = 0;
      }
      uVar6 = 0;
      if (DAT_18024e838 != 0) {
        do {
          uVar5 = (uint)uVar6;
          if (*(longlong *)(DAT_18024e830 + uVar6 * 8) == lVar7) {
            if ((uVar5 != 0xffffffff) && (uVar5 < DAT_18024e838)) {
              uVar5 = uVar5 + 1;
              if (uVar5 < DAT_18024e838) {
                do {
                  uVar6 = (ulonglong)uVar5;
                  uVar1 = uVar5 - 1;
                  uVar5 = uVar5 + 1;
                  *(undefined8 *)(DAT_18024e830 + (ulonglong)uVar1 * 8) =
                       *(undefined8 *)(DAT_18024e830 + uVar6 * 8);
                } while (uVar5 < DAT_18024e838);
              }
              DAT_18024e838 = DAT_18024e838 - 1;
            }
            break;
          }
          uVar6 = (ulonglong)(uVar5 + 1);
        } while (uVar5 + 1 < DAT_18024e838);
      }
      *(uint *)(param_1 + -0x78) = *(uint *)(param_1 + -0x78) & 0xffffffce;
      FUN_1802229d8(*(undefined8 *)(param_1 + -0x30));
      *(undefined8 *)(param_1 + -0x30) = 0;
      if (lVar7 != 0) {
        FUN_1801e4cb0(lVar7);
        FUN_1802229d8(lVar7,0xd8);
      }
      if (bVar2) {
        thunk_FUN_18022370c(DAT_180258900);
      }
      else {
        *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
      }
    }
    uVar4 = FUN_1801e6118(*(longlong *)(param_1 + -0x38) + 0x118);
  }
  return uVar4;
}

