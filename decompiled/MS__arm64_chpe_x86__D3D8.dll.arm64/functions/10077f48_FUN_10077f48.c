/*
 * FUN_10077f48 at 10077f48
 * undefined FUN_10077f48(void)
 * Address ranges: 10077f48-1007829f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10077f48(ulonglong param_1,undefined4 param_2,undefined8 param_3,int param_4,
                 undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  int local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  uint uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int *local_50;
  uint local_4c;
  int *local_48;
  
  *(undefined8 *)(param_4 + 0x230) = 0x11080300210803;
  *(undefined8 *)(param_4 + 0x228) = 0x31080300410803;
  *(undefined8 *)(param_4 + 0x240) = 0x11080400210804;
  *(undefined8 *)(param_4 + 0x238) = 0x31080400410804;
  *(undefined8 *)(param_4 + 0xa8) = 0x41040000110400;
  *(undefined4 *)(param_4 + 0xb0) = 0x20000d00;
  uVar7 = (undefined4)param_1;
  iVar1 = param_4 + 0x18;
  if (*(char *)(param_4 + 0x49e) != '\0') {
    iVar12 = *(int *)(param_4 + 0x10);
    uVar11 = 0;
    do {
      if ((*(char *)(iVar12 + 0x10 + uVar11) != '\0') && (*(char *)(iVar12 + uVar11) == '\0')) {
        local_50 = (int *)FUN_100766f0(param_1,param_2,param_4,0);
        if ((*(byte *)(uVar11 + *(int *)(param_4 + 0x10) + 0x10) & 3) != 0) {
          local_78 = 0xe4;
          local_7c = *(undefined4 *)(param_4 + 0x3f8);
          local_70 = 0;
          local_74 = 0x3f800000;
          local_80 = 8;
          local_88 = 0x36;
          local_90 = iVar1;
          uStack_8c = param_2;
          uStack_84 = (uint)local_50;
          FUN_100ef510(&local_90,0x24);
        }
        param_1 = ZEXT48(local_50);
        *(int **)(param_4 + uVar11 * 4 + 0xec) = local_50;
        break;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < 0x10);
  }
  if (*(char *)(param_4 + 0x49f) != '\0') {
    local_50 = (int *)(param_4 + 0x10);
    uVar11 = 0;
    do {
      if ((*(char *)(*local_50 + 0x10 + uVar11) != '\0') && (*(char *)(*local_50 + uVar11) == '0'))
      {
        local_4c = FUN_10076b68(param_1,param_2,param_4,0);
        if ((*(byte *)(uVar11 + *local_50 + 0x10) & 3) != 0) {
          local_78 = 0xe4;
          local_7c = *(undefined4 *)(param_4 + 0x3f8);
          local_70 = 0;
          local_74 = 0x3f800000;
          local_80 = 8;
          local_88 = 0x36;
          local_90 = iVar1;
          uStack_8c = param_2;
          uStack_84 = local_4c;
          FUN_100ef510(&local_90,0x24);
        }
        *(uint *)(param_4 + uVar11 * 4 + 0xec) = local_4c;
        break;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < 0x10);
  }
  uVar8 = 0;
  uVar11 = 0;
  iVar12 = 0;
  local_50 = (int *)param_5;
  local_4c = uVar7;
  local_48 = (int *)(param_4 + 0x10);
  do {
    pcVar2 = (char *)(uVar11 + *(int *)(param_4 + 0x10));
    bVar3 = pcVar2[0x10];
    uVar10 = (ulonglong)bVar3;
    if ((bVar3 != 0) && (cVar4 = *pcVar2, cVar4 != -1)) {
      if (cVar4 == '\0') {
        cVar4 = *(char *)(param_4 + 0x49e);
LAB_1007818c:
        if (cVar4 == '\0') goto LAB_10078190;
      }
      else {
        if (cVar4 == '0') {
          cVar4 = *(char *)(param_4 + 0x49f);
          goto LAB_1007818c;
        }
LAB_10078190:
        uVar9 = FUN_100efc98(0xe4,bVar3);
        uVar8 = FUN_10076d90(uVar9,param_2,param_4,0,uVar10 & 0xffffffff,iVar12,uVar9 & 0xff);
        *(int *)(param_4 + uVar11 * 4 + 0xec) = (int)uVar8;
      }
      iVar12 = iVar12 + 1;
    }
    piVar6 = local_48;
    uVar5 = local_4c;
    uVar11 = uVar11 + 1;
    if (0xf < uVar11) {
      uVar11 = 0;
      do {
        if (*(char *)(*piVar6 + uVar11 + 0x20) != '\0') {
          uVar8 = FUN_100ee580(iVar1,4,1);
          *(int *)(param_4 + uVar11 * 4 + 300) = (int)uVar8;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < 0x20);
      FUN_1007fc30(uVar8,param_4);
      if (*(char *)(*piVar6 + 0x40) == '\0') {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_100ee580(iVar1,4,1);
      }
      *(undefined4 *)(param_4 + 0x224) = uVar7;
      uVar8 = FUN_100804b8(uVar5,*(undefined4 *)(param_4 + 0xc0),param_4,param_2);
      FUN_100821b8(uVar8,param_4,param_2);
      return;
    }
  } while( true );
}

