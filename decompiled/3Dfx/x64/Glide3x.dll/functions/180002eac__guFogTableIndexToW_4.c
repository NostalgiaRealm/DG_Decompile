/*
 * _guFogTableIndexToW@4 at 180002eac
 * undefined8 __fastcall _guFogTableIndexToW@4(uint param_1)
 * Address ranges: 180002eac-180002ef7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 _guFogTableIndexToW_4(uint param_1)

{
  double dVar1;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
                    /* 0x2eac  99  _guFogTableIndexToW@4
                       0x2eac  199  guFogTableIndexToW */
  dVar1 = FUN_1800335f0(2.0,(double)((float)((int)param_1 >> 2) + 3.0));
  auVar2._0_8_ = dVar1 / (double)(int)(8 - (param_1 & 3));
  auVar2._8_8_ = extraout_XMM0_Qb;
  auVar3._4_12_ = auVar2._4_12_;
  auVar3._0_4_ = (float)auVar2._0_8_;
  return auVar3._0_8_;
}

