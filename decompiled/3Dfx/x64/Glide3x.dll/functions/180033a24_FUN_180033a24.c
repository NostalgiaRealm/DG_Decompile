/*
 * FUN_180033a24 at 180033a24
 * ulonglong __fastcall FUN_180033a24(longlong param_1, byte * param_2, undefined8 param_3)
 * Address ranges: 180033a24-180033c66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180033a24(longlong param_1,byte *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 extraout_var;
  
  uVar9 = 0x10;
  iVar5 = FUN_180060f70(param_2,&DAT_1800624e0,0x10);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x34);
    if (*(int *)(param_1 + 0x30) == iVar5) {
      if (iVar5 != 0) {
        uVar9 = (ulonglong)(uint)(iVar5 * 2);
      }
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar9;
      uVar6 = SUB168(ZEXT816(8) * auVar1,0);
      if (SUB168(ZEXT816(8) * auVar1,8) != 0) {
        uVar6 = 0xffffffffffffffff;
      }
      puVar7 = (undefined8 *)thunk_FUN_180060a9c(uVar6);
      uVar8 = 0;
      if (puVar7 == (undefined8 *)0x0) goto LAB_180033c5c;
      FUN_180061330(puVar7,*(undefined8 **)(param_1 + 0x28),
                    (ulonglong)*(uint *)(param_1 + 0x34) << 3);
      FUN_180060ac0(*(LPVOID *)(param_1 + 0x28));
      *(undefined8 **)(param_1 + 0x28) = puVar7;
      *(int *)(param_1 + 0x34) = (int)uVar9;
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)*(uint *)(param_1 + 0x30) * 8) =
         param_3;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    return 1;
  }
  iVar5 = FUN_180060f70(param_2,&DAT_1800624f0,0x10);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x44);
    if (*(int *)(param_1 + 0x40) == iVar5) {
      if (iVar5 != 0) {
        uVar9 = (ulonglong)(uint)(iVar5 * 2);
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar9;
      uVar6 = SUB168(ZEXT816(8) * auVar2,0);
      if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
        uVar6 = 0xffffffffffffffff;
      }
      puVar7 = (undefined8 *)thunk_FUN_180060a9c(uVar6);
      uVar8 = 0;
      if (puVar7 == (undefined8 *)0x0) goto LAB_180033c5c;
      FUN_180061330(puVar7,*(undefined8 **)(param_1 + 0x38),
                    (ulonglong)*(uint *)(param_1 + 0x44) << 3);
      FUN_180060ac0(*(LPVOID *)(param_1 + 0x38));
      *(undefined8 **)(param_1 + 0x38) = puVar7;
      *(int *)(param_1 + 0x44) = (int)uVar9;
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x40) * 8) =
         param_3;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    return 1;
  }
  iVar5 = FUN_180060f70(param_2,&DAT_180062500,0x10);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x54);
    if (*(int *)(param_1 + 0x50) == iVar5) {
      if (iVar5 != 0) {
        uVar9 = (ulonglong)(uint)(iVar5 * 2);
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar9;
      uVar6 = SUB168(ZEXT816(8) * auVar3,0);
      if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
        uVar6 = 0xffffffffffffffff;
      }
      puVar7 = (undefined8 *)thunk_FUN_180060a9c(uVar6);
      uVar8 = 0;
      if (puVar7 == (undefined8 *)0x0) goto LAB_180033c5c;
      FUN_180061330(puVar7,*(undefined8 **)(param_1 + 0x48),
                    (ulonglong)*(uint *)(param_1 + 0x54) << 3);
      FUN_180060ac0(*(LPVOID *)(param_1 + 0x48));
      *(undefined8 **)(param_1 + 0x48) = puVar7;
      *(int *)(param_1 + 0x54) = (int)uVar9;
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x48) + (ulonglong)*(uint *)(param_1 + 0x50) * 8) =
         param_3;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    return 1;
  }
  iVar5 = FUN_180060f70(param_2,&DAT_180062510,0x10);
  uVar8 = CONCAT44(extraout_var,iVar5);
  if (iVar5 != 0) {
LAB_180033c5c:
    return uVar8 & 0xffffffffffffff00;
  }
  iVar5 = *(int *)(param_1 + 100);
  if (*(int *)(param_1 + 0x60) == iVar5) {
    if (iVar5 != 0) {
      uVar9 = (ulonglong)(uint)(iVar5 * 2);
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar9;
    uVar6 = SUB168(ZEXT816(8) * auVar4,0);
    if (SUB168(ZEXT816(8) * auVar4,8) != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    puVar7 = (undefined8 *)thunk_FUN_180060a9c(uVar6);
    uVar8 = 0;
    if (puVar7 == (undefined8 *)0x0) goto LAB_180033c5c;
    FUN_180061330(puVar7,*(undefined8 **)(param_1 + 0x58),(ulonglong)*(uint *)(param_1 + 100) << 3);
    FUN_180060ac0(*(LPVOID *)(param_1 + 0x58));
    *(undefined8 **)(param_1 + 0x58) = puVar7;
    *(int *)(param_1 + 100) = (int)uVar9;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x58) + (ulonglong)*(uint *)(param_1 + 0x60) * 8) =
       param_3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return 1;
}

