/*
 * FUN_18002cd08 at 18002cd08
 * undefined8 __fastcall FUN_18002cd08(uint * param_1, int param_2)
 * Address ranges: 18002cd08-18002cdaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18002cd08(uint *param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  
  if (param_2 == 0xf) {
    return CONCAT44((float)(*param_1 >> 10 & 0x3ff),(float)(*param_1 & 0x3ff));
  }
  if (param_2 != 0x10) {
    return *(undefined8 *)param_1;
  }
  uVar1 = *param_1;
  auVar2._0_4_ = (float)((int)(uVar1 << 0x16) >> 0x16);
  auVar2._4_4_ = (float)((int)(uVar1 << 0xc) >> 0x16);
  auVar2._8_4_ = (float)((int)(uVar1 * 4) >> 0x16);
  auVar2._12_4_ = 0x43ff8000;
  auVar2 = divps(auVar2,_DAT_180107c20);
  return auVar2._0_8_;
}

