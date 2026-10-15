/*
 * FUN_10028644 at 10028644
 * ulonglong __fastcall FUN_10028644(uint * param_1, int param_2)
 * Address ranges: 10028644-100286e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong __fastcall FUN_10028644(uint *param_1,int param_2)

{
  uint uVar1;
  undefined4 in_EAX;
  undefined1 auVar2 [16];
  
  if (param_2 == 0xf) {
    return CONCAT44(*param_1,*param_1 >> 10) & 0x3ff000003ff;
  }
  if (param_2 + -0x10 != 0) {
    return CONCAT44(param_2 + -0x10,in_EAX);
  }
  uVar1 = *param_1;
  auVar2._0_4_ = (float)((int)(uVar1 << 0x16) >> 0x16);
  auVar2._4_4_ = (float)((int)(uVar1 << 0xc) >> 0x16);
  auVar2._8_4_ = (float)((int)(uVar1 << 2) >> 0x16);
  auVar2._12_4_ = 0x43ff8000;
  divps(auVar2,_DAT_100d97e0);
  return CONCAT44(uVar1 << 0x16,uVar1 << 2);
}

