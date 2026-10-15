/*
 * FUN_18002aef4 at 18002aef4
 * undefined __fastcall FUN_18002aef4(uint * param_1, uint param_2)
 * Address ranges: 18002aef4-18002b2eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18002aef4(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined1 auVar2 [13];
  undefined1 auVar3 [13];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_2 < 10) {
    if (param_2 != 9) {
      if (param_2 == 0) {
        return;
      }
      if (param_2 == 1) {
        return;
      }
      if (param_2 == 3) {
        return;
      }
      if (param_2 == 4) {
        uVar1 = *param_1;
        auVar3[0xc] = (char)(uVar1 >> 0x18);
        auVar3._0_12_ = ZEXT712(0);
        auVar5._0_4_ = (float)(uVar1 & 0xff);
        auVar5._4_4_ = (float)(uVar1 >> 8 & 0xff);
        auVar5._8_4_ = (float)(int)CONCAT32(auVar3._10_3_,(ushort)(byte)(uVar1 >> 0x10));
        auVar5._12_4_ = (float)(uint3)(auVar3._10_3_ >> 0x10);
        divps(auVar5,_DAT_180107c10);
        return;
      }
      if (param_2 == 5) {
        return;
      }
      if (param_2 == 6) {
        return;
      }
      if (param_2 == 7) {
        return;
      }
      if (param_2 != 8) {
        return;
      }
      uVar1 = *param_1;
      auVar2[0xc] = (char)(uVar1 >> 0x18);
      auVar2._0_12_ = ZEXT712(0);
      auVar4._0_4_ = (float)(uVar1 & 0xff);
      auVar4._4_4_ = (float)(uVar1 >> 8 & 0xff);
      auVar4._8_4_ = (float)(int)CONCAT32(auVar2._10_3_,(ushort)(byte)(uVar1 >> 0x10));
      auVar4._12_4_ = (float)(uint3)(auVar2._10_3_ >> 0x10);
      divps(auVar4,_DAT_180107c10);
      return;
    }
    auVar6._0_4_ = (float)(int)(short)*param_1;
    auVar6._4_4_ = (float)(int)*(short *)((longlong)param_1 + 2);
    auVar6._8_8_ = 0x46fffe0000000000;
  }
  else {
    if (param_2 != 10) {
      if (param_2 == 0xb) {
        auVar8._0_4_ = (float)(int)(short)*param_1;
        auVar8._4_4_ = (float)(int)*(short *)((longlong)param_1 + 2);
        auVar8._8_8_ = 0x477fff0000000000;
      }
      else {
        if (param_2 != 0xc) {
          if (param_2 == 0xd) {
            return;
          }
          if (param_2 == 0xe) {
            return;
          }
          if (param_2 == 0xf) {
            return;
          }
          if (param_2 != 0x10) {
            return;
          }
          uVar1 = *param_1;
          auVar7._0_4_ = (float)((int)(uVar1 << 0x16) >> 0x16);
          auVar7._4_4_ = (float)((int)(uVar1 << 0xc) >> 0x16);
          auVar7._8_4_ = (float)((int)(uVar1 * 4) >> 0x16);
          auVar7._12_4_ = 0x43ff8000;
          divps(auVar7,_DAT_180107c20);
          return;
        }
        auVar8._0_4_ = (float)(int)(short)*param_1;
        auVar8._12_4_ = (float)(int)*(short *)((longlong)param_1 + 6);
        auVar8._8_4_ = (float)(int)(short)param_1[1];
        auVar8._4_4_ = (float)(int)*(short *)((longlong)param_1 + 2);
      }
      divps(auVar8,_DAT_180107c50);
      return;
    }
    auVar6._0_4_ = (float)(int)(short)*param_1;
    auVar6._12_4_ = (float)(int)*(short *)((longlong)param_1 + 6);
    auVar6._8_4_ = (float)(int)(short)param_1[1];
    auVar6._4_4_ = (float)(int)*(short *)((longlong)param_1 + 2);
  }
  divps(auVar6,_DAT_180107c40);
  return;
}

