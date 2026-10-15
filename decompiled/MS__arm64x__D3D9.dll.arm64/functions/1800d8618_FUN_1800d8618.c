/*
 * FUN_1800d8618 at 1800d8618
 * undefined FUN_1800d8618(void)
 * Address ranges: 1800d8618-1800d8773
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800d8618(longlong param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar5 = FUN_1800d8778(param_1,*(longlong *)(param_1 + 0x58) + 0x1000);
  bVar4 = iVar5 != -1;
  if (iVar5 == -1) {
    return false;
  }
  uVar8 = 0;
  lVar2 = *(longlong *)
           (*(longlong *)(param_1 + 0x90) + (ulonglong)*(uint *)(param_1 + 0x80) * 0x18 + 8) +
          (ulonglong)*(uint *)(param_1 + 0x84) * 0x28;
  if (*(int *)(lVar2 + 0x20) != 0) {
    do {
      iVar6 = func_0x000180222cb8(*(longlong *)(param_1 + 0x70) +
                                  (ulonglong)*(uint *)(*(longlong *)(lVar2 + 0x18) + uVar8 * 8),
                                  *(longlong *)(param_1 + 0x70) + (longlong)iVar5);
      if (iVar6 == 0) {
        *(int *)(param_1 + 0x7c) = (*(int *)(param_1 + 0x7c) - param_3) + -1;
        break;
      }
      uVar1 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(lVar2 + 0x20));
  }
  if ((int)uVar8 == *(int *)(lVar2 + 0x20)) {
    iVar6 = *(int *)(lVar2 + 0x24);
    if (*(int *)(lVar2 + 0x20) == iVar6) {
      uVar1 = iVar6 << 1;
      if (iVar6 == 0) {
        uVar1 = 0x10;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = CONCAT44(0,uVar1);
      lVar7 = CONCAT44(0,uVar1) << 3;
      if (SUB168(auVar3 * ZEXT816(8),8) != 0) {
        lVar7 = -1;
      }
      lVar7 = thunk_FUN_180102f80(lVar7);
      if (lVar7 == 0) {
        bVar4 = false;
        goto LAB_1800d8750;
      }
      thunk_FUN_180001218(lVar7,*(undefined8 *)(lVar2 + 0x18),
                          (ulonglong)*(uint *)(lVar2 + 0x24) << 3);
      thunk_FUN_180102fc0(*(undefined8 *)(lVar2 + 0x18));
      *(longlong *)(lVar2 + 0x18) = lVar7;
      *(uint *)(lVar2 + 0x24) = uVar1;
    }
    bVar4 = true;
    *(ulonglong *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)*(uint *)(lVar2 + 0x20) * 8) =
         CONCAT44(0xffffffff,iVar5);
    *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + 1;
  }
LAB_1800d8750:
  *(int *)(param_1 + 0x88) = (int)uVar8;
  return bVar4;
}

