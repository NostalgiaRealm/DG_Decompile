/*
 * FUN_1002710b at 1002710b
 * int __fastcall FUN_1002710b(short * param_1, int param_2)
 * Address ranges: 1002710b-10027221
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_1002710b(short *param_1,int param_2)

{
  int in_EAX;
  undefined1 auVar1 [16];
  undefined1 auVar3 [16];
  undefined1 auVar2 [16];
  undefined1 auVar4 [16];
  
  if (param_2 == 6) {
    return (int)param_1[1];
  }
  if (param_2 == 9) {
    auVar3._0_4_ = (float)(int)*param_1;
    auVar4._4_8_ = 0;
    auVar4._0_4_ = auVar3._0_4_;
    auVar4._12_4_ = 0x46fffe00;
    auVar3._8_8_ = auVar4._8_8_;
    auVar3._4_4_ = (float)(int)param_1[1];
    divps(auVar3,_DAT_100d9800);
    return (int)param_1[1];
  }
  if (param_2 == 0xb) {
    auVar1._0_4_ = (float)(int)*param_1;
    auVar2._4_8_ = 0;
    auVar2._0_4_ = auVar1._0_4_;
    auVar2._12_4_ = 0x477fff00;
    auVar1._8_8_ = auVar2._8_8_;
    auVar1._4_4_ = (float)(int)param_1[1];
    divps(auVar1,_DAT_100d9810);
    return (int)param_1[1];
  }
  if (param_2 != 0xd) {
    return in_EAX;
  }
  return 0;
}

