/*
 * FUN_10027222 at 10027222
 * ulonglong __fastcall FUN_10027222(uint * param_1, uint param_2)
 * Address ranges: 10027222-1002749c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong __fastcall FUN_10027222(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined1 auVar2 [13];
  undefined1 auVar3 [13];
  uint in_EAX;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar8 [16];
  undefined1 auVar11 [16];
  
  if (param_2 < 0xb) {
    if (param_2 == 10) {
      auVar7._0_4_ = (float)(int)(short)*param_1;
      auVar8._4_4_ = (float)(int)(short)param_1[1];
      auVar8._0_4_ = auVar7._0_4_;
      auVar8._8_4_ = (float)(int)(short)param_1[1];
      auVar8._12_4_ = (float)(int)*(short *)((int)param_1 + 6);
      auVar7._8_8_ = auVar8._8_8_;
      auVar7._4_4_ = (float)(int)*(short *)((int)param_1 + 2);
      divps(auVar7,_DAT_100d9800);
      return CONCAT44(10,(int)*(short *)((int)param_1 + 6));
    }
    if (param_2 == 4) {
      uVar1 = *param_1;
      auVar3[0xc] = (char)(uVar1 >> 0x18);
      auVar3._0_12_ = ZEXT712(0);
      auVar6._0_4_ = (float)(uVar1 & 0xff);
      auVar6._4_4_ = (float)(uVar1 >> 8 & 0xff);
      auVar6._8_4_ = (float)(int)CONCAT32(auVar3._10_3_,(ushort)(byte)(uVar1 >> 0x10));
      auVar6._12_4_ = (float)(uint3)(auVar3._10_3_ >> 0x10);
      divps(auVar6,_DAT_100d97d0);
      return 0;
    }
    if (param_2 == 5) {
      return 0;
    }
    if (param_2 == 7) {
      return (ulonglong)(uint)(int)*(short *)((int)param_1 + 6);
    }
    iVar4 = param_2 - 8;
    if (iVar4 == 0) {
      uVar1 = *param_1;
      auVar2[0xc] = (char)(uVar1 >> 0x18);
      auVar2._0_12_ = ZEXT712(0);
      auVar5._0_4_ = (float)(uVar1 & 0xff);
      auVar5._4_4_ = (float)(uVar1 >> 8 & 0xff);
      auVar5._8_4_ = (float)(int)CONCAT32(auVar2._10_3_,(ushort)(byte)(uVar1 >> 0x10));
      auVar5._12_4_ = (float)(uint3)(auVar2._10_3_ >> 0x10);
      divps(auVar5,_DAT_100d97d0);
      return 0;
    }
  }
  else {
    if (param_2 == 0xc) {
      auVar10._0_4_ = (float)(int)(short)*param_1;
      auVar11._4_4_ = (float)(int)(short)param_1[1];
      auVar11._0_4_ = auVar10._0_4_;
      auVar11._8_4_ = (float)(int)(short)param_1[1];
      auVar11._12_4_ = (float)(int)*(short *)((int)param_1 + 6);
      auVar10._8_8_ = auVar11._8_8_;
      auVar10._4_4_ = (float)(int)*(short *)((int)param_1 + 2);
      divps(auVar10,_DAT_100d9810);
      return (ulonglong)(uint)(int)*(short *)((int)param_1 + 6);
    }
    if (param_2 == 0xe) {
      return (ulonglong)in_EAX;
    }
    if (param_2 == 0xf) {
      return CONCAT44(*param_1,*param_1 >> 10) & 0x3ff000003ff;
    }
    iVar4 = param_2 - 0x10;
    if (iVar4 == 0) {
      uVar1 = *param_1;
      auVar9._0_4_ = (float)((int)(uVar1 << 0x16) >> 0x16);
      auVar9._4_4_ = (float)((int)(uVar1 << 0xc) >> 0x16);
      auVar9._8_4_ = (float)((int)(uVar1 << 2) >> 0x16);
      auVar9._12_4_ = 0x43ff8000;
      divps(auVar9,_DAT_100d97e0);
      return CONCAT44(uVar1 << 0x16,uVar1 << 2);
    }
  }
  return CONCAT44(iVar4,in_EAX);
}

