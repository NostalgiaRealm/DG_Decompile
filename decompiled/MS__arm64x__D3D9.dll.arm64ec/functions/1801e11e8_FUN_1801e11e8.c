/*
 * FUN_1801e11e8 at 1801e11e8
 * undefined FUN_1801e11e8(void)
 * Address ranges: 1801e11e8-1801e1357
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801e11e8(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  
  lVar9 = *(longlong *)(param_1 + 0x178);
  iVar3 = FUN_1801042d0(param_1 + 0x134);
  if (*(int *)(param_1 + 0x138) + iVar3 == 0) {
    iVar4 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar4 == 0) {
      FUN_1801085c8();
    }
    lVar1 = 0;
    if (param_1 != 0) {
      lVar1 = param_1 + 8;
    }
    lVar5 = *(longlong *)(param_1 + 0x178);
    if (*(uint *)(lVar5 + 0xe38) != 0) {
      uVar7 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0xe30) + uVar7 * 8) == lVar1) {
          if ((int)uVar7 != -1) goto LAB_1801e1310;
          break;
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(lVar5 + 0xe38));
    }
    if (*(uint *)(lVar5 + 0xeb8) != 0) {
      uVar7 = 0;
      do {
        uVar6 = (uint)uVar7;
        if (*(longlong *)(*(longlong *)(lVar5 + 0xeb0) + uVar7 * 8) == lVar1) {
          if (uVar6 != 0xffffffff) {
            puVar2 = (uint *)&DAT_00000114;
            if (param_1 != 0) {
              puVar2 = (uint *)(param_1 + 0x11c);
            }
            (&DAT_18024ea60)[(ulonglong)*(uint *)(lVar5 + 0xea8) * 0x4b] =
                 (&DAT_18024ea60)[(ulonglong)*(uint *)(lVar5 + 0xea8) * 0x4b] + (ulonglong)*puVar2;
            uVar8 = *(uint *)(lVar5 + 0xeb8);
            if (uVar6 < uVar8) {
              while (uVar6 = (int)uVar7 + 1, uVar6 < uVar8) {
                *(undefined8 *)(*(longlong *)(lVar5 + 0xeb0) + uVar7 * 8) =
                     *(undefined8 *)(*(longlong *)(lVar5 + 0xeb0) + (ulonglong)uVar6 * 8);
                uVar7 = (ulonglong)uVar6;
                uVar8 = *(uint *)(lVar5 + 0xeb8);
              }
              *(uint *)(lVar5 + 0xeb8) = uVar8 - 1;
            }
          }
          break;
        }
        uVar7 = (ulonglong)(uVar6 + 1);
      } while (uVar6 + 1 < *(uint *)(lVar5 + 0xeb8));
    }
LAB_1801e1310:
    FUN_1801e0b70(param_1);
    FUN_1801e0928(param_1);
    FUN_1802229d8(param_1,0x188);
    thunk_FUN_18022370c(DAT_180258900);
  }
  if (iVar3 == 0) {
    FUN_1801c3098(lVar9 + 0x6838);
  }
  return iVar3;
}

