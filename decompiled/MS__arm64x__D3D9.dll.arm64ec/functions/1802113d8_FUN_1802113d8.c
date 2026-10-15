/*
 * FUN_1802113d8 at 1802113d8
 * undefined FUN_1802113d8(void)
 * Address ranges: 1802113d8-180211597;1802115a8-180211647;18021165c-1802116d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1802113d8(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_80 [8];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar8 = (undefined8 *)FUN_1802229a8(0x48);
  if (puVar8 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar8 = &PTR_FUN_180239150;
  puVar8[1] = 0;
  *(undefined4 *)(puVar8 + 2) = 0;
  puVar8[5] = 0x400000000;
  puVar8[3] = 0;
  puVar8[4] = 0;
  *(undefined4 *)(puVar8 + 6) = 0;
  *(undefined4 *)((longlong)puVar8 + 0x34) = param_4;
  *(undefined4 *)(puVar8 + 7) = 0;
  puVar8[8] = 0;
  lVar9 = thunk_FUN_1802239c8(0,0,0,0);
  puVar8[8] = lVar9;
  if (lVar9 != 0) {
    *(undefined4 *)((longlong)puVar8 + 0x2c) = param_3;
    *(undefined4 *)(puVar8 + 6) = param_5;
    puVar8[1] = param_1;
    *(undefined4 *)(puVar8 + 2) = param_2;
    puVar5 = __hybrid_os_arm64x_dispatch_icall;
    uVar10 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    uVar6 = (*extraout_x11)(uVar10,param_3);
    local_78 = *(undefined4 *)((longlong)puVar8 + 0x2c);
    local_70 = *(undefined4 *)(puVar8 + 6);
    uStack_74 = *(undefined4 *)((longlong)puVar8 + 0x34);
    *(undefined4 *)(puVar8 + 7) = uVar6;
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    local_50 = 0;
    uStack_6c = 0;
    uStack_38 = 0;
    local_40 = 0;
    uVar10 = (*(code *)puVar5)(0x180224000);
    iVar7 = (*extraout_x11_00)(uVar10,&local_78,&DAT_180238fa8,&local_50);
    if (-1 < iVar7) {
      uVar10 = (*(code *)puVar5)(0x180224000);
      puVar11 = (undefined8 *)(*extraout_x11_01)(uVar10,auStack_80);
      local_60 = *puVar11;
      uVar10 = (*(code *)puVar5)(0x180224000);
      puVar11 = (undefined8 *)(*extraout_x11_02)(uVar10,auStack_80);
      uStack_58 = *puVar11;
      iVar7 = *(int *)((longlong)puVar8 + 0x24);
      if (*(int *)(puVar8 + 4) == 0) {
        if (iVar7 != 0) {
          puVar11 = (undefined8 *)(puVar8[3] + (ulonglong)*(uint *)(puVar8 + 4) * 0x30);
          puVar11[1] = uStack_58;
          *puVar11 = local_60;
          puVar11[3] = uStack_48;
          puVar11[2] = local_50;
          puVar11[5] = uStack_38;
          puVar11[4] = local_40;
          *(int *)(puVar8 + 4) = *(int *)(puVar8 + 4) + 1;
          return puVar8;
        }
        lVar9 = FUN_1802229a8(0x300);
        if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(lVar9,puVar8[3],(ulonglong)*(uint *)((longlong)puVar8 + 0x24) * 0x30);
        }
      }
      else {
        iVar2 = *(int *)(puVar8 + 5);
        if (*(int *)(puVar8 + 4) != iVar7) {
          uVar3 = *(uint *)(puVar8 + 4);
          while (uVar12 = (ulonglong)uVar3, iVar2 + 1U < uVar3) {
            uVar3 = uVar3 - 1;
            puVar11 = (undefined8 *)(puVar8[3] + uVar12 * 0x30);
            puVar1 = (undefined8 *)(puVar8[3] + (ulonglong)uVar3 * 0x30);
            uVar10 = *puVar1;
            uVar14 = puVar1[3];
            uVar13 = puVar1[2];
            puVar11[1] = puVar1[1];
            *puVar11 = uVar10;
            puVar11[3] = uVar14;
            puVar11[2] = uVar13;
            uVar10 = puVar1[4];
            puVar11[5] = puVar1[5];
            puVar11[4] = uVar10;
          }
          puVar11 = (undefined8 *)(puVar8[3] + (ulonglong)(iVar2 + 1U) * 0x30);
          puVar11[1] = uStack_58;
          *puVar11 = local_60;
          puVar11[3] = uStack_48;
          puVar11[2] = local_50;
          puVar11[5] = uStack_38;
          puVar11[4] = local_40;
          *(int *)(puVar8 + 4) = *(int *)(puVar8 + 4) + 1;
          return puVar8;
        }
        uVar3 = iVar7 << 1;
        if (iVar7 == 0) {
          uVar3 = 0x10;
        }
        lVar9 = CONCAT44(0,uVar3) * 0x30;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = CONCAT44(0,uVar3);
        if (SUB168(auVar4 * ZEXT816(0x30),8) != 0) {
          lVar9 = -1;
        }
        lVar9 = FUN_1802229a8(lVar9);
        if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(lVar9,puVar8[3],(ulonglong)*(uint *)((longlong)puVar8 + 0x24) * 0x30);
        }
      }
      (*(code *)puVar5)(0x180224000);
      (*extraout_x11_03)();
    }
    thunk_FUN_180223824(puVar8[8]);
    puVar8[8] = 0;
  }
  FUN_180146600(puVar8);
  return (undefined8 *)0x0;
}

