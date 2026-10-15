/*
 * FUN_10016cd0 at 10016cd0
 * undefined FUN_10016cd0(void)
 * Address ranges: 10016cd0-1001714b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_10016cd0(int param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  byte bVar10;
  int iVar11;
  undefined4 extraout_w9;
  int extraout_w15;
  int extraout_w15_00;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulonglong local_80;
  undefined8 uStack_78;
  int local_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  
  if (*(byte *)(param_1 + 0x151) != 0) {
    return 1;
  }
  if (((((*(int *)(param_1 + 0x34) - 3U < 3) &&
        (*(uint *)(*(int *)(param_1 + 0xa8) + 0xcef4) <=
         *(uint *)(&DAT_100b35b0 + *(int *)(param_1 + 0x1c) * 4))) &&
       (*(int *)(*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x10) * 0x1510 + 0x520) != 0xa000))
      && ((*(float *)(param_1 + 0x148) == 1.0 && (*(float *)(param_1 + 0x14c) == 1.0)))) &&
     (*(int *)(param_1 + 0xe4) == 1)) {
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
  }
  piVar1 = (int *)(param_1 + 0xe4);
  *(byte *)(param_1 + 0x152) = bVar10;
  bVar10 = bVar10 ^ 1;
  if (bVar10 == 0) {
    puVar2 = (uint *)(param_1 + 0x24);
    uVar5 = FUN_10033d60(param_1);
    FUN_10010fe0(param_1 + 0xac,uVar5,*puVar2);
    uVar5 = FUN_10033d60(param_1);
    FUN_10010fe0(param_1 + 0x128,uVar5,*puVar2);
    local_60 = *(int *)(param_1 + 0x40);
    iStack_5c = *(int *)(param_1 + 0x10);
    uStack_54 = 0;
    uStack_50 = 0;
    local_4c = 0;
    uStack_48 = 0;
    local_44 = 0;
    iStack_58 = local_60 + iStack_5c * 0x1510 + 0x510;
    if (*(int *)(param_1 + 0x34) - 3U < 3) {
      uVar5 = FUN_100147c8();
      FUN_10033b30(uVar5);
      uStack_98 = uStack_78;
      local_a0 = local_80;
      uVar7 = local_a0;
      local_a0._4_4_ = (uint)(local_80 >> 0x20);
      uVar5 = local_a0._4_4_;
      if (*(int *)(extraout_w15 + 0x520) == 0xa000) {
        if (*piVar1 != 1) {
          local_a0._4_4_ = 0;
        }
        uVar5 = 0;
        if (*puVar2 == 1) {
          uVar5 = local_a0._4_4_;
        }
      }
      local_a0 = uVar7;
      uVar7 = FUN_10010c18(&local_60,*(undefined4 *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0xe0)
                           ,*(undefined4 *)(param_1 + 0x20),*puVar2,*piVar1,local_80 & 0xffffffff,
                           uVar5,0);
      if ((uVar7 & 1) == 0) goto LAB_1001711c;
      puVar3 = (undefined8 *)(param_1 + 0x48);
      FUN_10014850(param_1,puVar3,&local_60);
      FUN_10010fe0(puVar3,1,1);
      *(ulonglong *)(param_1 + 0x50) = CONCAT44(uStack_54,iStack_58);
      *puVar3 = CONCAT44(iStack_5c,local_60);
      *(ulonglong *)(param_1 + 0x60) = CONCAT44(local_44,uStack_48);
      *(ulonglong *)(param_1 + 0x58) = CONCAT44(local_4c,uStack_50);
    }
    else {
      FUN_10034140(param_1,&local_a0);
      piVar4 = (int *)(param_1 + 0x1c);
      if (*(char *)(param_1 + 0x150) == '\0') {
      }
      else {
        iVar11 = 0x1c;
        if (*piVar4 == 0x15) {
          iVar11 = 0x2c;
        }
        local_a0._0_4_ = *(uint *)(iVar11 + *(int *)(param_1 + 4));
        iVar11 = 0x20;
        if (*piVar4 == 0x15) {
          iVar11 = 0x30;
        }
        local_a0._4_4_ = *(uint *)(iVar11 + *(int *)(param_1 + 4));
      }
      uVar9 = (ulonglong)local_a0._4_4_;
      uVar7 = (ulonglong)(uint)local_a0;
      uVar6 = FUN_10033d60(param_1);
      uVar8 = *puVar2;
      if ((1 < uVar6) || (1 < uVar8)) {
        *piVar1 = 1;
      }
      if (*(int *)(extraout_w15_00 + 0x520) == 0xa000) {
        if (uVar8 == 1) {
          uVar8 = 1;
        }
        else {
          uVar9 = 0;
        }
      }
      uVar7 = FUN_10010c18(&local_60,*(undefined4 *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0xe0)
                           ,uVar6,uVar8,*piVar1,uVar7 & 0xffffffff,uVar9 & 0xffffffff,extraout_w9);
      if ((uVar7 & 1) == 0) goto LAB_1001711c;
      puVar3 = (undefined8 *)(param_1 + 0x48);
      FUN_10014850(param_1,puVar3,&local_60);
      if (*piVar4 == 0) {
        *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x50);
        *(undefined8 *)(param_1 + 0xe8) = *puVar3;
        *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x58);
        if (*(int *)(param_1 + 0x74) != 0) {
          FUN_10014c28(param_1);
        }
      }
      else {
        FUN_10010fe0(puVar3,*(undefined4 *)(param_1 + 0x2c),*puVar2);
      }
      *(uint *)(param_1 + 0x2c) = uVar6;
      *(ulonglong *)(param_1 + 0x50) = CONCAT44(uStack_54,iStack_58);
      *puVar3 = CONCAT44(iStack_5c,local_60);
      *(ulonglong *)(param_1 + 0x60) = CONCAT44(local_44,uStack_48);
      *(ulonglong *)(param_1 + 0x58) = CONCAT44(local_4c,uStack_50);
    }
    bVar10 = 1;
  }
LAB_1001711c:
  *(byte *)(param_1 + 0x151) = bVar10;
  return bVar10;
}

