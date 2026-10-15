/*
 * FUN_180008e20 at 180008e20
 * undefined8 __cdecl FUN_180008e20(longlong param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 180008e20-180008e27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180008e20(longlong param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  undefined8 *puVar7;
  SIZE_T SVar8;
  
  iVar6 = FUN_180060310(param_2,&DAT_180061440,0x10);
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_1 + 0x34);
    if (*(int *)(param_1 + 0x30) == iVar6) {
      uVar1 = iVar6 << 1;
      if (iVar6 == 0) {
        uVar1 = 0x10;
      }
      SVar8 = CONCAT44(0,uVar1) << 3;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = CONCAT44(0,uVar1);
      if (SUB168(auVar2 * ZEXT816(8),8) != 0) {
        SVar8 = 0xffffffffffffffff;
      }
      puVar7 = (undefined8 *)thunk_FUN_18005fb88(SVar8);
      if (puVar7 == (undefined8 *)0x0) {
        return 0;
      }
      thunk_FUN_180001218(puVar7,*(undefined8 **)(param_1 + 0x28),
                          (ulonglong)*(uint *)(param_1 + 0x34) << 3);
      thunk_FUN_18005fbc8(*(LPVOID *)(param_1 + 0x28));
      *(undefined8 **)(param_1 + 0x28) = puVar7;
      *(uint *)(param_1 + 0x34) = uVar1;
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)*(uint *)(param_1 + 0x30) * 8) =
         param_3;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  else {
    iVar6 = FUN_180060310(param_2,&DAT_180061450,0x10);
    if (iVar6 == 0) {
      iVar6 = *(int *)(param_1 + 0x44);
      if (*(int *)(param_1 + 0x40) == iVar6) {
        uVar1 = iVar6 << 1;
        if (iVar6 == 0) {
          uVar1 = 0x10;
        }
        SVar8 = CONCAT44(0,uVar1) << 3;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = CONCAT44(0,uVar1);
        if (SUB168(auVar3 * ZEXT816(8),8) != 0) {
          SVar8 = 0xffffffffffffffff;
        }
        puVar7 = (undefined8 *)thunk_FUN_18005fb88(SVar8);
        if (puVar7 == (undefined8 *)0x0) {
          return 0;
        }
        thunk_FUN_180001218(puVar7,*(undefined8 **)(param_1 + 0x38),
                            (ulonglong)*(uint *)(param_1 + 0x44) << 3);
        thunk_FUN_18005fbc8(*(LPVOID *)(param_1 + 0x38));
        *(undefined8 **)(param_1 + 0x38) = puVar7;
        *(uint *)(param_1 + 0x44) = uVar1;
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x40) * 8) =
           param_3;
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    }
    else {
      iVar6 = FUN_180060310(param_2,&DAT_180061460,0x10);
      if (iVar6 == 0) {
        iVar6 = *(int *)(param_1 + 0x54);
        if (*(int *)(param_1 + 0x50) == iVar6) {
          uVar1 = iVar6 << 1;
          if (iVar6 == 0) {
            uVar1 = 0x10;
          }
          SVar8 = CONCAT44(0,uVar1) << 3;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = CONCAT44(0,uVar1);
          if (SUB168(auVar4 * ZEXT816(8),8) != 0) {
            SVar8 = 0xffffffffffffffff;
          }
          puVar7 = (undefined8 *)thunk_FUN_18005fb88(SVar8);
          if (puVar7 == (undefined8 *)0x0) {
            return 0;
          }
          thunk_FUN_180001218(puVar7,*(undefined8 **)(param_1 + 0x48),
                              (ulonglong)*(uint *)(param_1 + 0x54) << 3);
          thunk_FUN_18005fbc8(*(LPVOID *)(param_1 + 0x48));
          *(undefined8 **)(param_1 + 0x48) = puVar7;
          *(uint *)(param_1 + 0x54) = uVar1;
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x48) + (ulonglong)*(uint *)(param_1 + 0x50) * 8) =
             param_3;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      }
      else {
        iVar6 = FUN_180060310(param_2,&DAT_180061470,0x10);
        if (iVar6 != 0) {
          return 0;
        }
        iVar6 = *(int *)(param_1 + 100);
        if (*(int *)(param_1 + 0x60) == iVar6) {
          uVar1 = iVar6 << 1;
          if (iVar6 == 0) {
            uVar1 = 0x10;
          }
          SVar8 = CONCAT44(0,uVar1) << 3;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = CONCAT44(0,uVar1);
          if (SUB168(auVar5 * ZEXT816(8),8) != 0) {
            SVar8 = 0xffffffffffffffff;
          }
          puVar7 = (undefined8 *)thunk_FUN_18005fb88(SVar8);
          if (puVar7 == (undefined8 *)0x0) {
            return 0;
          }
          thunk_FUN_180001218(puVar7,*(undefined8 **)(param_1 + 0x58),
                              (ulonglong)*(uint *)(param_1 + 100) << 3);
          thunk_FUN_18005fbc8(*(LPVOID *)(param_1 + 0x58));
          *(undefined8 **)(param_1 + 0x58) = puVar7;
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

