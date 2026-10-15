/*
 * FUN_1801e3f20 at 1801e3f20
 * undefined FUN_1801e3f20(void)
 * Address ranges: 1801e3f20-1801e408f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801e3f20(undefined8 *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar8 = param_1[3];
  iVar3 = FUN_1801042d0(param_1 + 1);
  if (*(int *)((longlong)param_1 + 0xc) + iVar3 == 0) {
    if (((*(uint *)(param_1[3] + 0xe78) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
      bVar2 = false;
      *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
    }
    else {
      bVar2 = true;
      iVar4 = thunk_FUN_1802236e4(DAT_180258900);
      if (iVar4 == 0) {
        FUN_1801085c8();
      }
    }
    lVar6 = param_1[3];
    uVar7 = *(uint *)(lVar6 + 0x6968);
    if (uVar7 != 0) {
      uVar5 = 0;
      do {
        if (*(undefined8 **)(*(longlong *)(lVar6 + 0x6960) + uVar5 * 8) == param_1) {
          if ((int)uVar5 != -1) {
            while (uVar1 = (int)uVar5 + 1, uVar1 < uVar7) {
              *(undefined8 *)(*(longlong *)(lVar6 + 0x6960) + uVar5 * 8) =
                   *(undefined8 *)(*(longlong *)(lVar6 + 0x6960) + (ulonglong)uVar1 * 8);
              uVar5 = (ulonglong)uVar1;
              uVar7 = *(uint *)(lVar6 + 0x6968);
            }
            *(int *)(lVar6 + 0x6968) = *(int *)(lVar6 + 0x6968) + -1;
          }
          break;
        }
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar1;
      } while (uVar1 < uVar7);
    }
    FUN_1802229d8(param_1[0x4f],0x254);
    param_1[0x4f] = 0;
    FUN_1802229d8(param_1[0x50]);
    param_1[0x50] = 0;
    *(undefined4 *)(param_1 + 0x51) = 0;
    FUN_18018de28(param_1 + 4);
    *param_1 = &PTR_FUN_18022f230;
    FUN_1802229d8(param_1,0x298);
    if (bVar2) {
      thunk_FUN_18022370c(DAT_180258900);
    }
    else {
      *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
    }
  }
  if (iVar3 == 0) {
    FUN_1801c3098(lVar8 + 0x6838);
  }
  return iVar3;
}

