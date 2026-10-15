/*
 * FUN_1800f9f90 at 1800f9f90
 * ulonglong __fastcall FUN_1800f9f90(longlong param_1, ulonglong * param_2, undefined8 param_3)
 * Address ranges: 1800f9f90-1800fa1ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800f9f90(longlong param_1,ulonglong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 uVar9;
  
  if ((*param_2 == 0x421972c41ad8ea63) && (param_2[1] == 0xc0b7c6988788f3bf)) {
    iVar1 = *(int *)(param_1 + 0x34);
    if (*(int *)(param_1 + 0x30) == iVar1) {
      uVar9 = 0;
      if (iVar1 == 0) {
        uVar8 = 0x10;
      }
      else {
        uVar8 = iVar1 * 2;
      }
      uVar4 = SUB168(ZEXT816(8) * ZEXT416(uVar8),0);
      if (SUB168(ZEXT816(8) * ZEXT416(uVar8),8) != 0) {
        uVar4 = 0xffffffffffffffff;
      }
      puVar5 = (undefined8 *)thunk_FUN_1800fbccc(uVar4);
      lVar6 = 0;
      if (puVar5 == (undefined8 *)0x0) goto LAB_1800fa02d;
      FUN_1800fbec0(puVar5,*(undefined8 **)(param_1 + 0x28),
                    (ulonglong)*(uint *)(param_1 + 0x34) << 3);
      FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x28));
      *(undefined8 **)(param_1 + 0x28) = puVar5;
      *(uint *)(param_1 + 0x34) = uVar8;
    }
    lVar6 = *(longlong *)(param_1 + 0x28);
    *(undefined8 *)(lVar6 + (ulonglong)*(uint *)(param_1 + 0x30) * 8) = param_3;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  else if ((*param_2 == 0x428e9b0080b505f3) && (param_2[1] == 0xe1ec580960cb0792)) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (*(int *)(param_1 + 0x40) == iVar1) {
      uVar9 = 0;
      if (iVar1 == 0) {
        uVar8 = 0x10;
      }
      else {
        uVar8 = iVar1 * 2;
      }
      uVar4 = SUB168(ZEXT816(8) * ZEXT416(uVar8),0);
      if (SUB168(ZEXT816(8) * ZEXT416(uVar8),8) != 0) {
        uVar4 = 0xffffffffffffffff;
      }
      puVar5 = (undefined8 *)thunk_FUN_1800fbccc(uVar4);
      lVar6 = 0;
      if (puVar5 == (undefined8 *)0x0) goto LAB_1800fa02d;
      FUN_1800fbec0(puVar5,*(undefined8 **)(param_1 + 0x38),
                    (ulonglong)*(uint *)(param_1 + 0x44) << 3);
      FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x38));
      *(undefined8 **)(param_1 + 0x38) = puVar5;
      *(uint *)(param_1 + 0x44) = uVar8;
    }
    lVar6 = *(longlong *)(param_1 + 0x38);
    *(undefined8 *)(lVar6 + (ulonglong)*(uint *)(param_1 + 0x40) * 8) = param_3;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  }
  else if ((*param_2 == 0x415896b2d5010988) && (param_2[1] == 0xb324afaa4509d4a9)) {
    iVar1 = *(int *)(param_1 + 0x54);
    if (*(int *)(param_1 + 0x50) == iVar1) {
      uVar9 = 0;
      if (iVar1 == 0) {
        uVar7 = 0x10;
      }
      else {
        uVar7 = (ulonglong)(uint)(iVar1 * 2);
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar7;
      uVar4 = SUB168(ZEXT816(8) * auVar2,0);
      if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
        uVar4 = 0xffffffffffffffff;
      }
      puVar5 = (undefined8 *)thunk_FUN_1800fbccc(uVar4);
      lVar6 = 0;
      if (puVar5 == (undefined8 *)0x0) goto LAB_1800fa02d;
      FUN_1800fbec0(puVar5,*(undefined8 **)(param_1 + 0x48),
                    (ulonglong)*(uint *)(param_1 + 0x54) << 3);
      FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x48));
      *(undefined8 **)(param_1 + 0x48) = puVar5;
      *(int *)(param_1 + 0x54) = (int)uVar7;
    }
    lVar6 = *(longlong *)(param_1 + 0x48);
    *(undefined8 *)(lVar6 + (ulonglong)*(uint *)(param_1 + 0x50) * 8) = param_3;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  }
  else {
    uVar7 = *param_2;
    if ((uVar7 != 0x43d2fec768801515) || (uVar7 = param_2[1], uVar7 != 0x626c9aaba821c4ae)) {
      return uVar7 & 0xffffffffffffff00;
    }
    iVar1 = *(int *)(param_1 + 100);
    if (*(int *)(param_1 + 0x60) == iVar1) {
      uVar9 = 0;
      if (iVar1 == 0) {
        uVar7 = 0x10;
      }
      else {
        uVar7 = (ulonglong)(uint)(iVar1 * 2);
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar7;
      uVar4 = SUB168(ZEXT816(8) * auVar3,0);
      if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
        uVar4 = 0xffffffffffffffff;
      }
      puVar5 = (undefined8 *)thunk_FUN_1800fbccc(uVar4);
      lVar6 = 0;
      if (puVar5 == (undefined8 *)0x0) goto LAB_1800fa02d;
      FUN_1800fbec0(puVar5,*(undefined8 **)(param_1 + 0x58),(ulonglong)*(uint *)(param_1 + 100) << 3
                   );
      FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x58));
      *(undefined8 **)(param_1 + 0x58) = puVar5;
      *(int *)(param_1 + 100) = (int)uVar7;
    }
    lVar6 = *(longlong *)(param_1 + 0x58);
    *(undefined8 *)(lVar6 + (ulonglong)*(uint *)(param_1 + 0x60) * 8) = param_3;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  }
  uVar9 = 1;
LAB_1800fa02d:
  return CONCAT71((int7)((ulonglong)lVar6 >> 8),uVar9);
}

