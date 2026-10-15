/*
 * FUN_18015f6e0 at 18015f6e0
 * undefined FUN_18015f6e0(void)
 * Address ranges: 18015f6e0-18015f947
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18015f6e0(longlong *param_1,undefined8 *param_2,uint *param_3,undefined8 param_4,uint param_5,
             uint param_6,undefined1 param_7)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong extraout_x10;
  longlong lVar6;
  longlong extraout_x10_00;
  ulonglong extraout_x11;
  ulonglong extraout_x11_00;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  *param_2 = 0;
  if ((param_6 & 1) != 0) {
    return param_2;
  }
  lVar6 = (ulonglong)(param_5 << 3) * 4;
  uVar1 = *(uint *)(&DAT_18022af50 + (ulonglong)param_5 * 4);
  local_68 = CONCAT44(*(uint *)(&DAT_18022af84 + lVar6) & param_3[1],
                      *param_3 & *(uint *)(&DAT_18022af80 + (ulonglong)(param_5 << 3) * 4));
  uStack_60 = CONCAT44(*(uint *)(&DAT_18022af8c + lVar6) & param_3[3],
                       *(uint *)(&DAT_18022af88 + lVar6) & param_3[2]);
  local_58 = CONCAT44(*(uint *)(&DAT_18022af94 + lVar6) & param_3[5],
                      *(uint *)(&DAT_18022af90 + lVar6) & param_3[4]);
  uStack_50 = CONCAT44(*(uint *)(&DAT_18022af9c + lVar6) & param_3[7],
                       *(uint *)(&DAT_18022af98 + lVar6) & param_3[6]);
  local_48 = CONCAT44(param_3[9] & uVar1,param_3[8] & uVar1);
  uStack_40 = CONCAT44(param_3[0xb] & uVar1,param_3[10] & uVar1);
  local_38 = CONCAT44(param_3[0xd] & uVar1,param_3[0xc] & uVar1);
  uVar1 = FUN_180160258(param_1 + 3,&local_68);
  if ((uVar1 == *(uint *)(param_1 + 5)) ||
     (uVar2 = FUN_18013fdc0((ulonglong)uVar1 * 0x40 + param_1[4],&local_68), (uVar2 & 1) == 0)) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)((extraout_x11 | 0x38) + extraout_x10);
  }
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_1802229a8(0x90);
    if (puVar4 == (undefined8 *)0x0) {
      return param_2;
    }
    uVar1 = *(uint *)(param_1 + 1);
    lVar6 = *param_1;
    *puVar4 = &PTR_D3DPERF_GetStatus_native_18022bc48;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(undefined4 *)(puVar4 + 8) = 0;
    *(uint *)(puVar4 + 7) = uVar1;
    puVar4[6] = lVar6;
    *(undefined1 *)(puVar4 + 9) = 0;
    puVar4[4] = 0;
    puVar4[5] = lVar6 + (ulonglong)uVar1 * 0x1ac0 + 0x22d8;
    *(undefined4 *)((longlong)puVar4 + 0x44) =
         *(undefined4 *)(lVar6 + (ulonglong)uVar1 * 0x28 + 0x38);
    uVar5 = *(undefined8 *)param_3;
    uVar8 = *(undefined8 *)(param_3 + 6);
    uVar7 = *(undefined8 *)(param_3 + 4);
    puVar4[0xb] = *(undefined8 *)(param_3 + 2);
    puVar4[10] = uVar5;
    puVar4[0xd] = uVar8;
    puVar4[0xc] = uVar7;
    uVar5 = *(undefined8 *)(param_3 + 8);
    puVar4[0xf] = *(undefined8 *)(param_3 + 10);
    puVar4[0xe] = uVar5;
    uVar5 = *(undefined8 *)(param_3 + 0xc);
    *(undefined1 *)(puVar4 + 0x11) = param_7;
    puVar4[0x10] = uVar5;
    *puVar4 = &PTR_FUN_18022bc58;
    local_70 = puVar4;
    auVar9 = FUN_180160070();
    if ((auVar9._0_8_ & 1) == 0) {
      *puVar4 = auVar9._8_8_;
      FUN_18015f2f0(puVar4);
      FUN_1802229d8(puVar4,0x90);
      return param_2;
    }
    uVar1 = FUN_180160258(param_1 + 3,&local_68);
    uVar2 = (ulonglong)uVar1;
    if ((uVar1 == *(uint *)(param_1 + 5)) ||
       (uVar3 = FUN_18013fdc0(param_1[4] + uVar2 * 0x40,&local_68), uVar2 = extraout_x11_00,
       (uVar3 & 1) == 0)) {
      FUN_180160128(param_1 + 3,uVar2 & 0xffffffff,&local_68,&local_70);
      puVar4 = local_70;
    }
    else {
      *(undefined8 **)(extraout_x10_00 + 0x38) = puVar4;
    }
  }
  else {
    puVar4 = (undefined8 *)*puVar4;
  }
  puVar4 = (undefined8 *)FUN_18015f340(puVar4,&local_68,param_4,0);
  uVar5 = *puVar4;
  uVar8 = puVar4[3];
  uVar7 = puVar4[2];
  param_2[1] = puVar4[1];
  *param_2 = uVar5;
  param_2[3] = uVar8;
  param_2[2] = uVar7;
  uVar5 = puVar4[4];
  param_2[5] = puVar4[5];
  param_2[4] = uVar5;
  return param_2;
}

