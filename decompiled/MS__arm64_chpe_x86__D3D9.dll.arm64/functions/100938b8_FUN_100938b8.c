/*
 * FUN_100938b8 at 100938b8
 * undefined FUN_100938b8(void)
 * Address ranges: 100938b8-10093d57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100938b8(ulonglong param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  uint uStack_94;
  undefined4 local_90;
  uint local_8c;
  uint local_88;
  undefined4 local_84;
  undefined4 local_80;
  uint local_60;
  char *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  
  *(undefined8 *)(param_4 + 0x2c0) = 0x11080300210803;
  *(undefined8 *)(param_4 + 0x2b8) = 0x31080300410803;
  *(undefined8 *)(param_4 + 0x2d0) = 0x11080400210804;
  *(undefined8 *)(param_4 + 0x2c8) = 0x31080400410804;
  *(undefined8 *)(param_4 + 0xa8) = 0x41040000110400;
  piVar1 = (int *)(param_4 + 0x10);
  *(undefined4 *)(param_4 + 0xb0) = 0x20000d00;
  iVar11 = *piVar1;
  uVar5 = (undefined4)param_1;
  iVar2 = param_4 + 0x18;
  if (*(char *)(iVar11 + 0x4884) == '\0') {
    iVar13 = -1;
  }
  else {
    iVar13 = *(int *)(param_4 + 0x60);
    *(int *)(param_4 + 0x60) = iVar13 + 1;
    *(undefined4 *)(param_4 + iVar13 * 4 + 0x50) = 0x10;
    iVar11 = *piVar1;
  }
  local_54 = param_5;
  local_50 = param_3;
  if (*(char *)(param_4 + 0x52e) != '\0') {
    uVar12 = 0;
    do {
      if ((*(char *)(iVar11 + 0x10 + uVar12) != '\0') && (*(char *)(iVar11 + uVar12) == '\0')) {
        local_60 = FUN_10092018(param_1,param_2,param_4,0);
        if ((*(byte *)(*piVar1 + uVar12 + 0x10) & 3) != 0) {
          local_88 = 0xe4;
          local_8c = *(uint *)(param_4 + 0x488);
          local_80 = 0;
          local_84 = 0x3f800000;
          local_90 = 8;
          local_98 = 0x36;
          local_a0 = iVar2;
          uStack_9c = param_2;
          uStack_94 = local_60;
          FUN_10122a88(&local_a0,0x24);
        }
        param_1 = (ulonglong)local_60;
        iVar11 = param_4 + uVar12 * 4;
        *(uint *)(iVar11 + 0xec) = local_60;
        if (iVar13 != -1) {
          uStack_94 = uVar12 | iVar13 << 0xe | 0x420300;
          *(uint *)(iVar11 + 0x228) = uStack_94;
          local_88 = 0xe4;
          local_84 = 0;
          local_90 = 0xf;
          local_8c = local_60;
          local_98 = 0x36;
          local_a0 = iVar2;
          uStack_9c = param_2;
          param_1 = FUN_10122a88(&local_a0,0x20);
        }
        break;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < 0x10);
  }
  local_5c = (char *)(param_4 + 0x52f);
  if (*local_5c != '\0') {
    uVar12 = 0;
    do {
      if ((*(char *)(*piVar1 + 0x10 + uVar12) != '\0') && (*(char *)(*piVar1 + uVar12) == '0')) {
        local_60 = FUN_10092490(param_1,param_2,param_4,0);
        if ((*(byte *)(*piVar1 + uVar12 + 0x10) & 3) != 0) {
          local_88 = 0xe4;
          local_8c = *(uint *)(param_4 + 0x488);
          local_80 = 0;
          local_84 = 0x3f800000;
          local_90 = 8;
          local_98 = 0x36;
          local_a0 = iVar2;
          uStack_9c = param_2;
          uStack_94 = local_60;
          FUN_10122a88(&local_a0,0x24);
        }
        iVar11 = param_4 + uVar12 * 4;
        *(uint *)(iVar11 + 0xec) = local_60;
        if (iVar13 != -1) {
          uStack_94 = uVar12 | iVar13 << 0xe | 0x420300;
          *(uint *)(iVar11 + 0x228) = uStack_94;
          local_88 = 0xe4;
          local_84 = 0;
          local_90 = 0xf;
          local_8c = local_60;
          local_98 = 0x36;
          local_a0 = iVar2;
          uStack_9c = param_2;
          FUN_10122a88(&local_a0,0x20);
        }
        break;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < 0x10);
  }
  uVar8 = 0;
  iVar11 = 0;
  uVar12 = 0;
  local_60 = iVar2;
  local_58 = uVar5;
  do {
    bVar3 = ((char *)(*piVar1 + uVar12))[0x10];
    uVar10 = (ulonglong)bVar3;
    if ((bVar3 != 0) && (cVar4 = *(char *)(*piVar1 + uVar12), cVar4 != -1)) {
      if (cVar4 == '\0') {
        cVar4 = *(char *)(param_4 + 0x52e);
LAB_10093bbc:
        if (cVar4 == '\0') goto LAB_10093bc0;
      }
      else {
        if (cVar4 == '0') {
          cVar4 = *local_5c;
          goto LAB_10093bbc;
        }
LAB_10093bc0:
        uVar9 = FUN_10123210(0xe4,bVar3);
        uVar8 = FUN_100926b8(uVar9,param_2,param_4,0,uVar10 & 0xffffffff,iVar11,uVar9 & 0xff);
        iVar2 = param_4 + uVar12 * 4;
        *(uint *)(iVar2 + 0xec) = (uint)uVar8;
        if (iVar13 != -1) {
          local_88 = (uint)uVar9 & 0xff;
          local_84 = 0;
          uStack_94 = uVar12 | iVar13 << 0xe | 0x420300;
          *(uint *)(iVar2 + 0x228) = uStack_94;
          local_90 = 0xf;
          local_98 = 0x36;
          local_a0 = local_60;
          uStack_9c = param_2;
          local_8c = (uint)uVar8;
          uVar8 = FUN_10122a88(&local_a0,0x20);
        }
      }
      iVar11 = iVar11 + 1;
    }
    uVar5 = local_58;
    uVar6 = local_60;
    uVar12 = uVar12 + 1;
    if (0xf < uVar12) {
      uVar12 = 0;
      do {
        if (*(char *)(uVar12 + *piVar1 + 0x20) != '\0') {
          uVar8 = FUN_10121590(uVar6,4,1);
          *(int *)(param_4 + uVar12 * 4 + 300) = (int)uVar8;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < 0x20);
      uVar8 = FUN_1009ecf8(uVar8,param_4,param_2,local_54);
      if (*(byte *)(*piVar1 + 0x4a6c) - 2 < 2) {
        FUN_10095c68(uVar8,param_4);
      }
      if (*(char *)(*piVar1 + 0x40) == '\0') {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_10121590(uVar6,4,1);
      }
      *(undefined4 *)(param_4 + 0x224) = uVar7;
      FUN_1009fae0(uVar5,*(undefined4 *)(param_4 + 0xc0),param_4,param_2);
      uVar8 = FUN_10098440(uVar5,*(undefined4 *)(param_4 + 0xc0),param_4,local_50);
      FUN_100a1be8(uVar8,param_4,param_2);
      return;
    }
  } while( true );
}

