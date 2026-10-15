/*
 * FUN_100286e4 at 100286e4
 * int __fastcall FUN_100286e4(uint * param_1, int param_2)
 * Address ranges: 100286e4-100288b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_100286e4(uint *param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [13];
  undefined1 auVar3 [13];
  undefined1 auVar4 [16];
  undefined1 auVar6 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar5 [16];
  undefined1 auVar7 [16];
  
  if (param_2 == 4) {
    uVar1 = *param_1;
    auVar3[0xc] = (char)(uVar1 >> 0x18);
    auVar3._0_12_ = ZEXT712(0);
    auVar9._0_4_ = (float)(uVar1 & 0xff);
    auVar9._4_4_ = (float)(uVar1 >> 8 & 0xff);
    auVar9._8_4_ = (float)(int)CONCAT32(auVar3._10_3_,(ushort)(byte)(uVar1 >> 0x10));
    auVar9._12_4_ = (float)(uint3)(auVar3._10_3_ >> 0x10);
    divps(auVar9,_DAT_100d97d0);
    return 0;
  }
  if (param_2 == 5) {
    return 0;
  }
  if (param_2 == 7) {
    return (int)*(short *)((int)param_1 + 6);
  }
  if (param_2 != 8) {
    if (param_2 == 10) {
      auVar6._0_4_ = (float)(int)(short)*param_1;
      auVar7._4_4_ = (float)(int)(short)param_1[1];
      auVar7._0_4_ = auVar6._0_4_;
      auVar7._8_4_ = (float)(int)(short)param_1[1];
      auVar7._12_4_ = (float)(int)*(short *)((int)param_1 + 6);
      auVar6._8_8_ = auVar7._8_8_;
      auVar6._4_4_ = (float)(int)*(short *)((int)param_1 + 2);
      divps(auVar6,_DAT_100d9800);
      return (int)*(short *)((int)param_1 + 6);
    }
    if (param_2 != 0xc) {
      if (param_2 != 0xe) {
        return 2;
      }
      return 2;
    }
    auVar4._0_4_ = (float)(int)(short)*param_1;
    auVar5._4_4_ = (float)(int)(short)param_1[1];
    auVar5._0_4_ = auVar4._0_4_;
    auVar5._8_4_ = (float)(int)(short)param_1[1];
    auVar5._12_4_ = (float)(int)*(short *)((int)param_1 + 6);
    auVar4._8_8_ = auVar5._8_8_;
    auVar4._4_4_ = (float)(int)*(short *)((int)param_1 + 2);
    divps(auVar4,_DAT_100d9810);
    return (int)*(short *)((int)param_1 + 6);
  }
  uVar1 = *param_1;
  auVar2[0xc] = (char)(uVar1 >> 0x18);
  auVar2._0_12_ = ZEXT712(0);
  auVar8._0_4_ = (float)(uVar1 & 0xff);
  auVar8._4_4_ = (float)(uVar1 >> 8 & 0xff);
  auVar8._8_4_ = (float)(int)CONCAT32(auVar2._10_3_,(ushort)(byte)(uVar1 >> 0x10));
  auVar8._12_4_ = (float)(uint3)(auVar2._10_3_ >> 0x10);
  divps(auVar8,_DAT_100d97d0);
  return 0;
}

