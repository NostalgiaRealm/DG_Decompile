/*
 * FUN_180102718 at 180102718
 * undefined FUN_180102718(void)
 * Address ranges: 180102718-18010298b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180102718(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  longlong lVar7;
  
  iVar6 = func_0x000180222c00(param_2,&DAT_180229448,0x10);
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_1 + 0x34);
    if (*(int *)(param_1 + 0x30) == iVar6) {
      uVar1 = iVar6 << 1;
      if (iVar6 == 0) {
        uVar1 = 0x10;
      }
      lVar7 = CONCAT44(0,uVar1) << 3;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = CONCAT44(0,uVar1);
      if (SUB168(auVar2 * ZEXT816(8),8) != 0) {
        lVar7 = -1;
      }
      lVar7 = thunk_FUN_180102f80(lVar7);
      if (lVar7 == 0) {
        return 0;
      }
      thunk_FUN_180001218(lVar7,*(undefined8 *)(param_1 + 0x28),
                          (ulonglong)*(uint *)(param_1 + 0x34) << 3);
      thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x28));
      *(longlong *)(param_1 + 0x28) = lVar7;
      *(uint *)(param_1 + 0x34) = uVar1;
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)*(uint *)(param_1 + 0x30) * 8) =
         param_3;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  else {
    iVar6 = func_0x000180222c00(param_2,&DAT_180229458,0x10);
    if (iVar6 == 0) {
      iVar6 = *(int *)(param_1 + 0x44);
      if (*(int *)(param_1 + 0x40) == iVar6) {
        uVar1 = iVar6 << 1;
        if (iVar6 == 0) {
          uVar1 = 0x10;
        }
        lVar7 = CONCAT44(0,uVar1) << 3;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = CONCAT44(0,uVar1);
        if (SUB168(auVar3 * ZEXT816(8),8) != 0) {
          lVar7 = -1;
        }
        lVar7 = thunk_FUN_180102f80(lVar7);
        if (lVar7 == 0) {
          return 0;
        }
        thunk_FUN_180001218(lVar7,*(undefined8 *)(param_1 + 0x38),
                            (ulonglong)*(uint *)(param_1 + 0x44) << 3);
        thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x38));
        *(longlong *)(param_1 + 0x38) = lVar7;
        *(uint *)(param_1 + 0x44) = uVar1;
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x40) * 8) =
           param_3;
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    }
    else {
      iVar6 = func_0x000180222c00(param_2,&DAT_180229468,0x10);
      if (iVar6 == 0) {
        iVar6 = *(int *)(param_1 + 0x54);
        if (*(int *)(param_1 + 0x50) == iVar6) {
          uVar1 = iVar6 << 1;
          if (iVar6 == 0) {
            uVar1 = 0x10;
          }
          lVar7 = CONCAT44(0,uVar1) << 3;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = CONCAT44(0,uVar1);
          if (SUB168(auVar4 * ZEXT816(8),8) != 0) {
            lVar7 = -1;
          }
          lVar7 = thunk_FUN_180102f80(lVar7);
          if (lVar7 == 0) {
            return 0;
          }
          thunk_FUN_180001218(lVar7,*(undefined8 *)(param_1 + 0x48),
                              (ulonglong)*(uint *)(param_1 + 0x54) << 3);
          thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x48));
          *(longlong *)(param_1 + 0x48) = lVar7;
          *(uint *)(param_1 + 0x54) = uVar1;
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x48) + (ulonglong)*(uint *)(param_1 + 0x50) * 8) =
             param_3;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      }
      else {
        iVar6 = func_0x000180222c00(param_2,&DAT_180229478,0x10);
        if (iVar6 != 0) {
          return 0;
        }
        iVar6 = *(int *)(param_1 + 100);
        if (*(int *)(param_1 + 0x60) == iVar6) {
          uVar1 = iVar6 << 1;
          if (iVar6 == 0) {
            uVar1 = 0x10;
          }
          lVar7 = CONCAT44(0,uVar1) << 3;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = CONCAT44(0,uVar1);
          if (SUB168(auVar5 * ZEXT816(8),8) != 0) {
            lVar7 = -1;
          }
          lVar7 = thunk_FUN_180102f80(lVar7);
          if (lVar7 == 0) {
            return 0;
          }
          thunk_FUN_180001218(lVar7,*(undefined8 *)(param_1 + 0x58),
                              (ulonglong)*(uint *)(param_1 + 100) << 3);
          thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x58));
          *(longlong *)(param_1 + 0x58) = lVar7;
          *(uint *)(param_1 + 100) = uVar1;
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x58) + (ulonglong)*(uint *)(param_1 + 0x60) * 8) =
             param_3;
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
      }
    }
  }
  return 1;
}

