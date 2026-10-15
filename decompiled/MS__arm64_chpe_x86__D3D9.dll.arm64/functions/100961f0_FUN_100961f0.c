/*
 * FUN_100961f0 at 100961f0
 * undefined FUN_100961f0(void)
 * Address ranges: 100961f0-10096353
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100961f0(undefined8 param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 extraout_x11;
  undefined8 uVar15;
  undefined8 extraout_x12;
  undefined4 extraout_w13;
  longlong lVar16;
  undefined1 auVar17 [12];
  undefined4 local_60 [2];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [36];
  
  uVar7 = 0;
  uVar13 = 0;
  do {
    pcVar1 = (char *)(*(int *)(param_2 + 0x10) + 0x4880 + uVar13);
    uVar3 = uVar13 & 0x1f;
    uVar4 = uVar13 & 0x1f;
    uVar13 = uVar13 + 1;
    uVar7 = (uint)(*pcVar1 != '\0') << (ulonglong)uVar3 |
            uVar7 & (1 << (ulonglong)uVar4 ^ 0xffffffffU);
  } while (uVar13 < 4);
  FUN_10121c70(param_2 + 0x18,param_3,uVar7,0x10162498,0);
  local_60[0] = 0;
  uVar13 = 0;
  uVar8 = 0x10000000;
  uVar14 = 0x18000000;
  uVar15 = 0x20000000;
  uVar12 = ZEXT48(local_60);
  uVar6 = (ulonglong)(param_2 + 0x20);
  uVar11 = ZEXT48(auStack_58);
  uVar10 = ZEXT48(auStack_54);
  uVar9 = 5;
  do {
    auVar17._8_4_ = uVar13;
    auVar17._0_8_ = uVar6;
    bVar2 = *(byte *)(*(int *)(param_2 + 0x10) + uVar13 + 0x4880);
    if ((int)uVar8 == (uint)bVar2 * 0x8000000) {
      lVar16 = 0;
LAB_100962d8:
      pbVar5 = (byte *)(((int)uVar13 >> 3) + (int)uVar12);
      *pbVar5 = *pbVar5 | (byte)(1 << (ulonglong)(uVar13 & 7));
      auVar17 = FUN_10123618(uVar6 & 0xffffffff,uVar13,(char)(1 << lVar16));
      *(undefined4 *)((int)uVar11 + auVar17._8_4_ * 8) = extraout_w13;
      *(int *)((int)uVar10 + auVar17._8_4_ * 8) = (int)uVar9;
      uVar14 = extraout_x11;
      uVar15 = extraout_x12;
    }
    else {
      if ((int)uVar14 == (uint)bVar2 * 0x8000000) {
        lVar16 = 1;
        goto LAB_100962d8;
      }
      if ((int)uVar15 == (uint)bVar2 * 0x8000000) {
        lVar16 = 2;
        goto LAB_100962d8;
      }
    }
    uVar6 = auVar17._0_8_;
    uVar13 = auVar17._8_4_ + 1;
    if (3 < uVar13) {
      FUN_10121910(param_2 + 0x18,param_3,local_60[0],&DAT_10162450,auStack_58);
      return;
    }
  } while( true );
}

