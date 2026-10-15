/*
 * FUN_10096358 at 10096358
 * undefined FUN_10096358(void)
 * Address ranges: 10096358-10096733
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10096358(ulonglong param_1,uint *param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7,undefined1 param_8,undefined1 param_9)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  undefined4 *puVar13;
  int local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  int local_94;
  uint uStack_90;
  undefined4 local_8c;
  int local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  
  puVar1 = (uint *)(param_6 + 0x310);
  *(uint *)(param_6 + 0x470) = *param_2 >> 7 & 0x2000;
  uVar3 = *param_2;
  uVar8 = (uint)((ulonglong)param_3 >> 0x10) & 0xffff & uVar3 >> 0x10 & 0xf;
  bVar7 = (byte)uVar8;
  if ((*puVar1 != 0) || (uVar6 = (uVar3 & 0x1800 | uVar3 >> 0x14 & 0x7ff) >> 8, 0x13 < uVar6))
  goto switchD_100963e8_caseD_1;
  uVar2 = uVar3 & 0x7ff;
  switch(uVar6) {
  case 0:
    puVar11 = (uint *)(param_6 + (uVar2 + 0x4b) * 4);
    uVar8 = *puVar11;
    if (uVar8 == 0) {
      uVar8 = FUN_10121590(param_6 + 0x18,4,1);
      *puVar11 = uVar8;
    }
    param_1 = (ulonglong)uVar8;
    *puVar1 = uVar8;
    goto LAB_10096418;
  default:
    goto switchD_100963e8_caseD_1;
  case 3:
    puVar11 = (uint *)(param_6 + 0x224);
    goto LAB_1009643c;
  case 4:
    switch(uVar2) {
    case 0:
      puVar13 = (undefined4 *)(param_6 + 0x1e8);
      break;
    case 1:
      puVar13 = (undefined4 *)(param_6 + 0x1ec);
      uVar8 = 1;
      break;
    case 2:
      puVar13 = (undefined4 *)(param_6 + 0x1f0);
      uVar8 = 2;
      break;
    default:
      goto switchD_100963e8_caseD_1;
    }
    break;
  case 5:
    puVar13 = (undefined4 *)(param_6 + uVar2 * 4 + 500);
    break;
  case 6:
    if (*(char *)(*(int *)(param_6 + 0x10) + 0x4a6c) == '\x03') {
      cVar5 = *(char *)(*(int *)(param_6 + 0x14) + uVar2);
      iVar12 = (int)cVar5;
      if (-2 < cVar5) {
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = iVar12 + 2;
        }
      }
      if (((uVar3 >> 0xd & 1) != 0) && (iVar12 != 0)) {
        uStack_a4 = *(uint *)(param_6 + *(int *)(param_6 + 0x2dc) * 4 + 0x29c);
        local_94 = (uVar2 + 0x1a) * 0x10;
        local_88 = *(int *)(param_6 + 0x21c);
        local_b0 = param_6 + 0x18;
        uStack_90 = uStack_a4 | 0x10000000;
        uStack_ac = param_7;
        if (local_88 == 0) {
          local_8c = 1;
          local_88 = 0;
          local_9c = 0x40410803;
          uStack_98 = 0;
          local_a0 = 8;
          local_a8 = 0x36;
          param_1 = FUN_10122a88(&local_b0,0x2c);
        }
        else {
          uStack_84 = 0;
          local_8c = 1;
          local_9c = 0x40410803;
          uStack_98 = 0;
          local_a0 = 8;
          local_a8 = 0x1e;
          local_80 = 0;
          param_1 = FUN_10122a88(&local_b0,0x34);
        }
        param_2 = param_2 + 1;
        *puVar1 = *(uint *)(param_6 + 0x268) | 0x40000000;
        *(byte *)(param_6 + 0x314) = bVar7;
        *(undefined8 *)(param_6 + 800) = 0xffffffffffffffff;
        *(undefined8 *)(param_6 + 0x328) = 0xffffffffffffffff;
        *(undefined4 *)(param_6 + 0x330) =
             *(undefined4 *)(param_6 + *(int *)(param_6 + 0x2dc) * 4 + 0x29c);
        *(undefined1 *)(param_6 + 0x334) = 3;
        goto switchD_100963e8_caseD_1;
      }
      puVar13 = (undefined4 *)(param_6 + iVar12 * 4 + 0x26c);
    }
    else {
      puVar13 = (undefined4 *)(param_6 + uVar2 * 4 + 0x1fc);
    }
    break;
  case 0x13:
    puVar11 = (uint *)(param_6 + 0x2b0);
LAB_1009643c:
    *puVar1 = *puVar11;
LAB_10096418:
    *(byte *)(param_6 + 0x314) = bVar7;
    *(undefined8 *)(param_6 + 800) = 0xffffffffffffffff;
    *(undefined8 *)(param_6 + 0x328) = 0xffffffffffffffff;
    goto switchD_100963e8_caseD_1;
  }
  param_1 = FUN_1009f358(param_1,param_6,*puVar13,uVar8,puVar1);
switchD_100963e8_caseD_1:
  puVar11 = param_2 + 1;
  if ((*puVar11 & 0x1800 | *puVar11 >> 0x14 & 0x700) == 0x1300) {
    puVar10 = (uint *)(param_6 + 0x474);
    if (*puVar10 == 0xffffffff) {
      *(undefined8 *)(param_6 + 0x348) = *(undefined8 *)(param_6 + 0x318);
      *(undefined8 *)(param_6 + 0x340) = *(undefined8 *)puVar1;
      *(undefined8 *)(param_6 + 0x358) = *(undefined8 *)(param_6 + 0x328);
      *(undefined8 *)(param_6 + 0x350) = *(undefined8 *)(param_6 + 800);
      *(undefined8 *)(param_6 + 0x368) = *(undefined8 *)(param_6 + 0x338);
      *(undefined8 *)(param_6 + 0x360) = *(undefined8 *)(param_6 + 0x330);
      *(undefined8 *)(param_6 + 0x378) = *(undefined8 *)(param_6 + 0x318);
      *(undefined8 *)(param_6 + 0x370) = *(undefined8 *)puVar1;
      *(undefined8 *)(param_6 + 0x388) = *(undefined8 *)(param_6 + 0x328);
      *(undefined8 *)(param_6 + 0x380) = *(undefined8 *)(param_6 + 800);
      *(undefined8 *)(param_6 + 0x390) = *(undefined8 *)(param_6 + 0x330);
      local_60 = FUN_10121590(param_6 + 0x18,4,1);
      uStack_5c = CONCAT31(uStack_5c._1_3_,bVar7);
      *(undefined8 *)(param_6 + 0x318) = uStack_58;
      *(ulonglong *)puVar1 = CONCAT44(uStack_5c,local_60);
      *(undefined8 *)(param_6 + 0x328) = 0xffffffffffffffff;
      *(undefined8 *)(param_6 + 800) = 0xffffffffffffffff;
      *(undefined8 *)(param_6 + 0x3a8) = *(undefined8 *)(param_6 + 0x318);
      *(undefined8 *)(param_6 + 0x3a0) = *(undefined8 *)puVar1;
      *(undefined8 *)(param_6 + 0x3b8) = *(undefined8 *)(param_6 + 0x328);
      *(undefined8 *)(param_6 + 0x3b0) = *(undefined8 *)(param_6 + 800);
      param_2 = puVar11;
    }
    else {
      *(byte *)(param_6 + 0x344) = bVar7 | *(byte *)(param_6 + 0x344);
      param_2 = puVar11;
    }
    uVar4 = *(undefined1 *)(param_6 + 0x344);
    *puVar10 = *param_2;
    param_1 = FUN_10123210(0xe4,uVar4);
    *(char *)(param_6 + 0x3a4) = (char)param_1;
    *(char *)(param_6 + 0x374) = (char)param_1;
  }
  uVar9 = FUN_10096798(param_1,param_2 + 1,param_4,param_5,param_6,param_8,param_9);
  return uVar9;
}

