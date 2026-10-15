/*
 * FUN_18003b708 at 18003b708
 * bool __cdecl FUN_18003b708(longlong param_1, undefined8 param_2, uint param_3)
 * Address ranges: 18003b708-18003b863
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18003b708(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  SIZE_T SVar8;
  ulonglong uVar9;
  
  iVar5 = FUN_18003b868(param_1,(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1000),param_3);
  bVar4 = iVar5 != -1;
  if (iVar5 == -1) {
    return false;
  }
  uVar9 = 0;
  lVar1 = *(longlong *)
           (*(longlong *)(param_1 + 0x90) + (ulonglong)*(uint *)(param_1 + 0x80) * 0x18 + 8) +
          (ulonglong)*(uint *)(param_1 + 0x84) * 0x28;
  if (*(int *)(lVar1 + 0x20) != 0) {
    do {
      uVar6 = FUN_1800637c8((byte *)(*(longlong *)(param_1 + 0x70) +
                                    (ulonglong)*(uint *)(*(longlong *)(lVar1 + 0x18) + uVar9 * 8)),
                            (byte *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar5));
      if (uVar6 == 0) {
        *(uint *)(param_1 + 0x7c) = (*(int *)(param_1 + 0x7c) - param_3) + -1;
        break;
      }
      uVar6 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(lVar1 + 0x20));
  }
  if ((int)uVar9 == *(int *)(lVar1 + 0x20)) {
    iVar2 = *(int *)(lVar1 + 0x24);
    if (*(int *)(lVar1 + 0x20) == iVar2) {
      uVar6 = iVar2 << 1;
      if (iVar2 == 0) {
        uVar6 = 0x10;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = CONCAT44(0,uVar6);
      SVar8 = CONCAT44(0,uVar6) << 3;
      if (SUB168(auVar3 * ZEXT816(8),8) != 0) {
        SVar8 = 0xffffffffffffffff;
      }
      puVar7 = (undefined8 *)thunk_FUN_1800636c0(SVar8);
      if (puVar7 == (undefined8 *)0x0) {
        bVar4 = false;
        goto LAB_18003b840;
      }
      thunk_FUN_1800010d8(puVar7,*(undefined8 **)(lVar1 + 0x18),
                          (ulonglong)*(uint *)(lVar1 + 0x24) << 3);
      thunk_FUN_180063700(*(LPVOID *)(lVar1 + 0x18));
      *(undefined8 **)(lVar1 + 0x18) = puVar7;
      *(uint *)(lVar1 + 0x24) = uVar6;
    }
    bVar4 = true;
    *(ulonglong *)(*(longlong *)(lVar1 + 0x18) + (ulonglong)*(uint *)(lVar1 + 0x20) * 8) =
         CONCAT44(0xffffffff,iVar5);
    *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
  }
LAB_18003b840:
  *(int *)(param_1 + 0x88) = (int)uVar9;
  return bVar4;
}

