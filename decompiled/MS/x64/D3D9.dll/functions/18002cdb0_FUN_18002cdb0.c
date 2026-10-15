/*
 * FUN_18002cdb0 at 18002cdb0
 * undefined __fastcall FUN_18002cdb0(uint * param_1, int param_2)
 * Address ranges: 18002cdb0-18002cf9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18002cdb0(uint *param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [13];
  undefined1 auVar3 [13];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 == 4) {
    uVar1 = *param_1;
    auVar3[0xc] = (char)(uVar1 >> 0x18);
    auVar3._0_12_ = ZEXT712(0);
    auVar7._0_4_ = (float)(uVar1 & 0xff);
    auVar7._4_4_ = (float)(uVar1 >> 8 & 0xff);
    auVar7._8_4_ = (float)(int)CONCAT32(auVar3._10_3_,(ushort)(byte)(uVar1 >> 0x10));
    auVar7._12_4_ = (float)(uint3)(auVar3._10_3_ >> 0x10);
    divps(auVar7,_DAT_180107c10);
  }
  else if ((param_2 != 5) && (param_2 != 7)) {
    if (param_2 == 8) {
      uVar1 = *param_1;
      auVar2[0xc] = (char)(uVar1 >> 0x18);
      auVar2._0_12_ = ZEXT712(0);
      auVar6._0_4_ = (float)(uVar1 & 0xff);
      auVar6._4_4_ = (float)(uVar1 >> 8 & 0xff);
      auVar6._8_4_ = (float)(int)CONCAT32(auVar2._10_3_,(ushort)(byte)(uVar1 >> 0x10));
      auVar6._12_4_ = (float)(uint3)(auVar2._10_3_ >> 0x10);
      divps(auVar6,_DAT_180107c10);
    }
    else if (param_2 == 10) {
      auVar5._0_4_ = (float)(int)(short)*param_1;
      auVar5._12_4_ = (float)(int)*(short *)((longlong)param_1 + 6);
      auVar5._8_4_ = (float)(int)(short)param_1[1];
      auVar5._4_4_ = (float)(int)*(short *)((longlong)param_1 + 2);
      divps(auVar5,_DAT_180107c40);
    }
    else if (param_2 == 0xc) {
      auVar4._0_4_ = (float)(int)(short)*param_1;
      auVar4._12_4_ = (float)(int)*(short *)((longlong)param_1 + 6);
      auVar4._8_4_ = (float)(int)(short)param_1[1];
      auVar4._4_4_ = (float)(int)*(short *)((longlong)param_1 + 2);
      divps(auVar4,_DAT_180107c50);
    }
  }
  return;
}

