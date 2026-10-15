/*
 * FUN_1003396a at 1003396a
 * uint __stdcall FUN_1003396a(void)
 * Address ranges: 1003396a-1003399d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1003396a(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint3 uVar4;
  float in_XMM0_Da;
  float in_XMM0_Db;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  undefined1 auVar5 [16];
  
  auVar5._0_4_ = (int)in_XMM0_Da;
  auVar5._4_4_ = (int)in_XMM0_Db;
  auVar5._8_4_ = (int)in_XMM0_Dc;
  auVar5._12_4_ = (int)in_XMM0_Dd;
  auVar5 = packusdw(auVar5,auVar5);
  sVar1 = auVar5._0_2_;
  sVar2 = auVar5._2_2_;
  sVar3 = auVar5._4_2_;
  uVar4 = CONCAT12((0 < sVar3) * (sVar3 < 0x100) * auVar5[4] - (0xff < sVar3),
                   CONCAT11((0 < sVar2) * (sVar2 < 0x100) * auVar5[2] - (0xff < sVar2),
                            (0 < sVar1) * (sVar1 < 0x100) * auVar5[0] - (0xff < sVar1)));
  return (((uVar4 & 0xf80000) >> 3 | uVar4 & 0xfc00) >> 2 | uVar4 & 0xf8) >> 3;
}

