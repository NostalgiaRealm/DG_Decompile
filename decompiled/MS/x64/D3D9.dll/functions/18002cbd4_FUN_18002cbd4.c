/*
 * FUN_18002cbd4 at 18002cbd4
 * ulonglong __fastcall FUN_18002cbd4(ulonglong * param_1, int param_2)
 * Address ranges: 18002cbd4-18002cd07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18002cbd4(ulonglong *param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [14];
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar11;
  undefined1 auVar10 [16];
  uint uVar12;
  uint uVar13;
  undefined1 auVar9 [16];
  
  if (param_2 == 6) {
    uVar6 = CONCAT44((float)(int)*(short *)((longlong)param_1 + 2),(float)(int)(short)*param_1);
  }
  else if (param_2 == 9) {
    auVar8._0_4_ = (float)(int)(short)*param_1;
    auVar8._4_4_ = (float)(int)*(short *)((longlong)param_1 + 2);
    auVar8._8_8_ = 0x46fffe00;
    auVar8 = divps(auVar8,_DAT_180107c40);
    uVar6 = auVar8._0_8_;
  }
  else if (param_2 == 0xb) {
    auVar7._0_4_ = (float)(int)(short)*param_1;
    auVar7._4_4_ = (float)(int)*(short *)((longlong)param_1 + 2);
    auVar7._8_8_ = 0x477fff00;
    auVar8 = divps(auVar7,_DAT_180107c50);
    uVar6 = auVar8._0_8_;
  }
  else if (param_2 == 0xd) {
    uVar1 = (uint)*param_1;
    auVar10._4_8_ = 0;
    auVar10._0_4_ = uVar1;
    auVar10._12_4_ = DAT_1801079f0._4_4_;
    auVar9._8_8_ = auVar10._8_8_;
    auVar9._0_8_ = CONCAT44((int)DAT_1801079f0,uVar1);
    auVar2._10_2_ = 0;
    auVar2._0_10_ = auVar9._0_10_;
    auVar2._12_2_ = DAT_1801079f0._2_2_;
    auVar3._8_2_ = (short)DAT_1801079f0;
    auVar3._0_8_ = auVar9._0_8_;
    auVar3._10_4_ = auVar2._10_4_;
    auVar5._6_8_ = 0;
    auVar5._0_6_ = auVar3._8_6_;
    auVar4._4_2_ = (short)(uVar1 >> 0x10);
    auVar4._0_4_ = uVar1;
    auVar4._6_8_ = SUB148(auVar5 << 0x40,6);
    uVar11 = auVar4._4_4_ << 0x10;
    uVar12 = uVar1 << 0x10 & 0x7c000000;
    uVar13 = uVar11 & 0x7c000000;
    uVar6 = CONCAT44((int)uVar11 >> 3,(int)(uVar1 << 0x10) >> 3) & 0x807fffff807fffff |
            CONCAT44(-(uint)(uVar13 == 0x7c000000),-(uint)(uVar12 == 0x7c000000)) &
            0x7f8000007f800000 |
            CONCAT26(~(ushort)(-(uint)(uVar13 == 0) >> 0x10) &
                     (ushort)((uint)(((int)uVar13 >> 3) + 0x38000000) >> 0x10),
                     (uint6)(~-(uint)(uVar12 == 0) & ((int)uVar12 >> 3) + 0x38000000U));
  }
  else {
    uVar6 = *param_1;
  }
  return uVar6;
}

