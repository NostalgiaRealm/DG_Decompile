/*
 * FUN_1801e3bf8 at 1801e3bf8
 * undefined FUN_1801e3bf8(void)
 * Address ranges: 1801e3bf8-1801e3d43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801e3bf8(undefined8 *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  
  iVar3 = FUN_1801042d0((longlong)param_1 + 0xc);
  if (iVar3 + *(int *)(param_1 + 1) == 0) {
    if (((*(uint *)(param_1[3] + 0xe78) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
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
    lVar5 = param_1[3];
    uVar6 = *(uint *)(lVar5 + 0x6968);
    if (uVar6 != 0) {
      uVar4 = 0;
      do {
        if (*(undefined8 **)(*(longlong *)(lVar5 + 0x6960) + uVar4 * 8) == param_1) {
          if ((int)uVar4 != -1) {
            while (uVar1 = (int)uVar4 + 1, uVar1 < uVar6) {
              *(undefined8 *)(*(longlong *)(lVar5 + 0x6960) + uVar4 * 8) =
                   *(undefined8 *)(*(longlong *)(lVar5 + 0x6960) + (ulonglong)uVar1 * 8);
              uVar4 = (ulonglong)uVar1;
              uVar6 = *(uint *)(lVar5 + 0x6968);
            }
            *(int *)(lVar5 + 0x6968) = *(int *)(lVar5 + 0x6968) + -1;
          }
          break;
        }
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar1;
      } while (uVar1 < uVar6);
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
  return;
}

