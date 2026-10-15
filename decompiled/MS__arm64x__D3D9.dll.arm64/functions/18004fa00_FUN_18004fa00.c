/*
 * FUN_18004fa00 at 18004fa00
 * undefined FUN_18004fa00(void)
 * Address ranges: 18004fa00-18004fc67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18004fa00(longlong *param_1,undefined8 *param_2,uint *param_3,undefined8 param_4,uint param_5,
             uint param_6,undefined1 param_7)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  longlong extraout_x10;
  longlong lVar7;
  longlong extraout_x10_00;
  ulonglong extraout_x11;
  ulonglong extraout_x11_00;
  undefined8 uVar8;
  undefined8 uVar9;
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
  lVar7 = (ulonglong)(param_5 << 3) * 4;
  uVar1 = *(uint *)(&DAT_18022af50 + (ulonglong)param_5 * 4);
  local_68 = CONCAT44(*(uint *)(&DAT_180233fc4 + lVar7) & param_3[1],
                      *param_3 & *(uint *)(&DAT_180233fc0 + (ulonglong)(param_5 << 3) * 4));
  uStack_60 = CONCAT44(*(uint *)(&DAT_180233fcc + lVar7) & param_3[3],
                       *(uint *)(&DAT_180233fc8 + lVar7) & param_3[2]);
  local_58 = CONCAT44(*(uint *)(&DAT_180233fd4 + lVar7) & param_3[5],
                      *(uint *)(&DAT_180233fd0 + lVar7) & param_3[4]);
  uStack_50 = CONCAT44(*(uint *)(&DAT_180233fdc + lVar7) & param_3[7],
                       *(uint *)(&DAT_180233fd8 + lVar7) & param_3[6]);
  local_48 = CONCAT44(param_3[9] & uVar1,param_3[8] & uVar1);
  uStack_40 = CONCAT44(param_3[0xb] & uVar1,param_3[10] & uVar1);
  local_38 = CONCAT44(param_3[0xd] & uVar1,param_3[0xc] & uVar1);
  uVar1 = FUN_1800505a8(param_1 + 3,&local_68);
  if ((uVar1 == *(uint *)(param_1 + 5)) ||
     (uVar2 = func_0x00018013fdc0((ulonglong)uVar1 * 0x40 + param_1[4],&local_68), (uVar2 & 1) == 0)
     ) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)((extraout_x11 | 0x38) + extraout_x10);
  }
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_180102f80(0x90);
    if (puVar4 == (undefined8 *)0x0) {
      return param_2;
    }
    uVar1 = *(uint *)(param_1 + 1);
    lVar7 = *param_1;
    *puVar4 = &PTR_D3DPERF_GetStatus_1802345e8;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(undefined4 *)(puVar4 + 8) = 0;
    *(uint *)(puVar4 + 7) = uVar1;
    puVar4[6] = lVar7;
    *(undefined1 *)(puVar4 + 9) = 0;
    puVar4[4] = 0;
    puVar4[5] = lVar7 + (ulonglong)uVar1 * 0x1ac0 + 0x22d8;
    *(undefined4 *)((longlong)puVar4 + 0x44) =
         *(undefined4 *)(lVar7 + (ulonglong)uVar1 * 0x28 + 0x38);
    uVar9 = *(undefined8 *)param_3;
    uVar8 = *(undefined8 *)(param_3 + 6);
    uVar6 = *(undefined8 *)(param_3 + 4);
    puVar4[0xb] = *(undefined8 *)(param_3 + 2);
    puVar4[10] = uVar9;
    puVar4[0xd] = uVar8;
    puVar4[0xc] = uVar6;
    uVar6 = *(undefined8 *)(param_3 + 8);
    puVar4[0xf] = *(undefined8 *)(param_3 + 10);
    puVar4[0xe] = uVar6;
    uVar6 = *(undefined8 *)(param_3 + 0xc);
    *(undefined1 *)(puVar4 + 0x11) = param_7;
    puVar4[0x10] = uVar6;
    ppuVar5 = &PTR_FUN_1802345f8;
    *puVar4 = &PTR_FUN_1802345f8;
    local_70 = puVar4;
    uVar2 = FUN_1800503c0();
    if ((uVar2 & 1) == 0) {
      *puVar4 = ppuVar5;
      FUN_18004f628(puVar4);
      FUN_180102fc0(puVar4,0x90);
      return param_2;
    }
    uVar1 = FUN_1800505a8(param_1 + 3,&local_68);
    uVar2 = (ulonglong)uVar1;
    if ((uVar1 == *(uint *)(param_1 + 5)) ||
       (uVar3 = func_0x00018013fdc0(param_1[4] + uVar2 * 0x40,&local_68), uVar2 = extraout_x11_00,
       (uVar3 & 1) == 0)) {
      FUN_180050478(param_1 + 3,uVar2 & 0xffffffff,&local_68,&local_70);
      puVar4 = local_70;
    }
    else {
      *(undefined8 **)(extraout_x10_00 + 0x38) = puVar4;
    }
  }
  else {
    puVar4 = (undefined8 *)*puVar4;
  }
  puVar4 = (undefined8 *)FUN_18004f678(puVar4,&local_68,param_4,0);
  uVar9 = *puVar4;
  uVar8 = puVar4[3];
  uVar6 = puVar4[2];
  param_2[1] = puVar4[1];
  *param_2 = uVar9;
  param_2[3] = uVar8;
  param_2[2] = uVar6;
  uVar6 = puVar4[4];
  param_2[5] = puVar4[5];
  param_2[4] = uVar6;
  return param_2;
}

