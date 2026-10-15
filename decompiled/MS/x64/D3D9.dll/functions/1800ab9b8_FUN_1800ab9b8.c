/*
 * FUN_1800ab9b8 at 1800ab9b8
 * undefined1 __fastcall FUN_1800ab9b8(longlong param_1, longlong param_2, int param_3, undefined4 param_4, int param_5, undefined4 param_6, undefined4 param_7, undefined1 param_8)
 * Address ranges: 1800ab9b8-1800abcb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_1800ab9b8(longlong param_1,longlong param_2,int param_3,undefined4 param_4,int param_5,
             undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  undefined8 uStack_d0;
  uint local_c8;
  undefined2 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  longlong local_a8;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  
  if (param_2 != 0) {
    lVar6 = param_1;
    puVar3 = FUN_1800aaccc(param_1,param_2);
    uVar7 = 0;
    if (puVar3 == (undefined8 *)0x0) {
      local_a8 = FUN_1800e06fc(*(longlong *)(lVar6 + 0x20),param_2);
      local_90 = *(undefined4 *)(param_1 + 0x28);
      local_4c = 0xffffffff;
      local_48 = 0xffffffff;
      local_98 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_88 = param_2;
      puVar3 = FUN_1800dfe90(*(LARGE_INTEGER *)(param_1 + 0x20),&local_98);
      if (puVar3 == (undefined8 *)0x0) {
        lVar6 = *(longlong *)(param_1 + 8);
        if (param_3 < 4) {
          uVar7 = *(undefined4 *)(&DAT_1800fe9d8 + (longlong)param_3 * 4);
        }
        local_b8 = *(undefined4 *)(lVar6 + 0xde);
        local_bc = *(undefined4 *)(lVar6 + 0xda);
        local_100 = *(undefined4 *)(param_1 + 0x28);
        local_f0 = 0x100000001;
        uStack_e8 = 0x100000001;
        local_e0 = 0x100000000;
        local_d8 = (ulonglong)*(uint *)(&DAT_1801003a0 + (longlong)*(int *)(lVar6 + 0x1c) * 4);
        uStack_d0 = CONCAT44(*(undefined4 *)(&DAT_180100388 + (longlong)*(int *)(lVar6 + 0xce) * 4),
                             uVar7);
        local_c8 = (uint)(param_5 == 1);
        local_c4 = CONCAT11(*(int *)(lVar6 + 0x18) == 1,*(undefined1 *)(lVar6 + 0x26));
        local_c0 = 0;
        local_108 = param_1;
        local_f8 = param_2;
        puVar3 = FUN_1800dfe90(*(LARGE_INTEGER *)(param_1 + 0x20),&local_108);
        if (puVar3 == (undefined8 *)0x0) {
          return 0;
        }
        FUN_1800e0e08(*(longlong *)(param_1 + 0x20),(longlong)puVar3,param_1 + 0x1c240,
                      (undefined8 *)(param_1 + 0x18));
      }
      iVar1 = *(int *)(param_1 + 0x100bc);
      if (*(int *)(param_1 + 0x100b8) == iVar1) {
        uVar8 = 0x10;
        if (iVar1 != 0) {
          uVar8 = (ulonglong)(uint)(iVar1 * 2);
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar8;
        uVar4 = SUB168(ZEXT816(0x30) * auVar2,0);
        if (SUB168(ZEXT816(0x30) * auVar2,8) != 0) {
          uVar4 = 0xffffffffffffffff;
        }
        puVar5 = (undefined8 *)thunk_FUN_1800fbccc(uVar4);
        if (puVar5 == (undefined8 *)0x0) {
          FUN_1800e05b4(*(longlong **)(param_1 + 0x20),param_2,param_1);
          return 0;
        }
        FUN_1800fbec0(puVar5,*(undefined8 **)(param_1 + 0x100b0),
                      (ulonglong)*(uint *)(param_1 + 0x100bc) * 0x30);
        FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x100b0));
        *(undefined8 **)(param_1 + 0x100b0) = puVar5;
        *(int *)(param_1 + 0x100bc) = (int)uVar8;
      }
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x100b8);
      lVar6 = *(longlong *)(param_1 + 0x100b0);
      *(undefined8 **)(lVar6 + uVar8 * 0x30) = puVar3;
      *(longlong *)(lVar6 + 8 + uVar8 * 0x30) = local_a8;
      *(int *)(lVar6 + 0x10 + uVar8 * 0x30) = param_3;
      *(int *)(lVar6 + 0x14 + uVar8 * 0x30) = param_5;
      *(undefined4 *)(lVar6 + 0x18 + uVar8 * 0x30) = param_4;
      *(undefined4 *)(lVar6 + 0x1c + uVar8 * 0x30) = param_6;
      *(undefined4 *)(lVar6 + 0x20 + uVar8 * 0x30) = param_7;
      *(undefined4 *)(lVar6 + 0x24 + uVar8 * 0x30) = 1;
      *(undefined4 *)(lVar6 + 0x28 + uVar8 * 0x30) = 1;
      *(undefined1 *)(lVar6 + 0x2c + uVar8 * 0x30) = param_8;
      *(undefined1 *)(lVar6 + 0x2d + uVar8 * 0x30) = 0;
      *(undefined2 *)(lVar6 + 0x2e + uVar8 * 0x30) = local_70._6_2_;
      *(int *)(param_1 + 0x100b8) = *(int *)(param_1 + 0x100b8) + 1;
    }
    else {
      local_100 = *(undefined4 *)(lVar6 + 0x28);
      local_bc = 0xffffffff;
      local_b8 = 0xffffffff;
      local_108 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      local_c4 = 0;
      local_c0 = 0;
      local_f8 = param_2;
      FUN_1800dfe90(*(LARGE_INTEGER *)(lVar6 + 0x20),&local_108);
    }
  }
  return 1;
}

