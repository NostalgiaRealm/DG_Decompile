/*
 * FUN_1008ba68 at 1008ba68
 * undefined FUN_1008ba68(void)
 * Address ranges: 1008ba68-1008bd27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008ba68(undefined8 param_1,int param_2,undefined4 param_3,ulonglong param_4,uint param_5,
                 uint param_6,uint *param_7)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  uint uStack_84;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 local_78;
  int iStack_74;
  uint local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  uint *local_50;
  
  iVar14 = (int)param_4;
  uVar4 = (undefined1)param_5;
  if (param_6 == 0) {
    local_50 = param_7 + 1;
    puVar1 = param_7 + 4;
    puVar2 = param_7 + 6;
    puVar3 = param_7 + 7;
    uVar5 = param_5 & 0xff;
    if (*(char *)(*(int *)(param_2 + 0xf4) + 0x126d) == '\x03') {
      if (*(ulonglong *)(param_2 + 0x2b0) == 0) {
        *param_7 = 0x40410102;
        *puVar3 = 0xffffffff;
        *puVar1 = 0xffffffff;
        *puVar2 = 0xffffffff;
        *(undefined1 *)local_50 = uVar4;
        param_7[5] = 0xffffffff;
        uVar5 = FUN_1008b580(param_1,param_2,param_3,param_4 & 0xffffffff);
        *(undefined1 *)(param_7 + 9) = 0;
        param_7[8] = uVar5;
        *(undefined1 *)(param_2 + 0x2b8) = 1;
        return;
      }
      uVar7 = *(ulonglong *)(param_2 + 0x2b0) >> ((param_4 & 0xf) << 2);
      if ((uVar7 & 0xf) == 0) {
        uVar13 = 0xe4;
        uVar6 = *(uint *)(&DAT_10162378 + (uVar5 >> 2 & 3) * 4);
        uVar12 = *(uint *)(&DAT_10162378 + (param_5 & 3) * 4);
        uVar11 = *(uint *)(param_2 + 0xa4);
        uVar10 = *(uint *)(&DAT_10162378 + (uVar5 >> 4 & 3) * 4);
        uVar9 = *(uint *)(&DAT_10162378 + (uVar5 >> 6) * 4);
      }
      else {
        uVar11 = ((uint)uVar7 & 0xf) + 1 | 0x410100;
        uVar10 = 0xffffffff;
        uVar9 = 0xffffffff;
        uVar6 = 0xffffffff;
        uVar12 = 0xffffffff;
        uVar13 = uVar5;
      }
      *puVar3 = uVar9;
      *puVar2 = uVar10;
      *param_7 = uVar11;
      *(char *)local_50 = (char)uVar13;
      *puVar1 = uVar12;
    }
    else {
      uVar5 = FUN_1008b4d8(param_1,param_2,param_3,param_4 & 0xffffffff);
      uVar6 = 0xffffffff;
      *param_7 = uVar5;
      *puVar1 = 0xffffffff;
      *puVar3 = 0xffffffff;
      *(undefined1 *)local_50 = uVar4;
      *puVar2 = 0xffffffff;
    }
    param_7[5] = uVar6;
  }
  else if ((param_6 & 0x1800 | param_6 >> 0x14 & 0x700) == 0xf00) {
    uVar5 = *(uint *)(param_2 + 0x2f4);
    iVar8 = *(int *)(param_2 + 0x2f8);
    if (*(char *)(param_2 + 0x521) == '\0') {
      iVar8 = param_2 + *(int *)(param_2 + 0x4e4) * 4;
      uVar5 = *(uint *)(iVar8 + 0x2d0);
      iVar8 = *(int *)(iVar8 + 0x2e0);
    }
    if (iVar8 != iVar14) {
      local_68 = 0;
      iStack_74 = iVar14 << 4;
      local_70 = uVar5 | 0x10000000;
      uStack_6c = 1;
      uStack_7c = *(uint *)(param_2 + 0x80) | 0x40000000;
      local_78 = 0xff;
      local_80 = 8;
      local_88 = 0x36;
      local_90 = param_2;
      uStack_8c = param_3;
      uStack_84 = uVar5;
      FUN_10122a88(&local_90,0x2c);
      *(int *)(param_2 + *(int *)(param_2 + 0x4e4) * 4 + 0x2e0) = iVar14;
    }
    uVar6 = 0x40410102;
    if (*(int *)(param_2 + 700) != -1) {
      uVar6 = *(int *)(param_2 + 700) << 0xe | 0x40420300;
    }
    *param_7 = uVar6;
    *(undefined1 *)(param_7 + 1) = uVar4;
    param_7[4] = 0xffffffff;
    param_7[5] = 0xffffffff;
    param_7[6] = 0xffffffff;
    param_7[7] = 0xffffffff;
    param_7[8] = uVar5;
    *(undefined1 *)(param_7 + 9) = 3;
    *(undefined1 *)(param_2 + 0x2b8) = 1;
  }
  return;
}

