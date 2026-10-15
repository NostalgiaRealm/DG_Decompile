/*
 * FUN_1002852d at 1002852d
 * int __fastcall FUN_1002852d(short * param_1, int param_2)
 * Address ranges: 1002852d-10028643
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_1002852d(short *param_1,int param_2)

{
  int in_EAX;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (param_2 == 6) {
    return (int)param_1[1];
  }
  if (param_2 == 9) {
    auVar2._0_4_ = (float)(int)*param_1;
    auVar2._4_4_ = (float)(int)param_1[1];
    auVar2._8_4_ = 0x46fffe00;
    auVar2._12_4_ = 0;
    divps(auVar2,_DAT_100d9800);
    return (int)param_1[1];
  }
  if (param_2 == 0xb) {
    auVar1._0_4_ = (float)(int)*param_1;
    auVar1._4_4_ = (float)(int)param_1[1];
    auVar1._8_4_ = 0x477fff00;
    auVar1._12_4_ = 0;
    divps(auVar1,_DAT_100d9810);
    return (int)param_1[1];
  }
  if (param_2 != 0xd) {
    return in_EAX;
  }
  return 0;
}

