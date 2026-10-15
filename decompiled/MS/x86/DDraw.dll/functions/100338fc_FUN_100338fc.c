/*
 * FUN_100338fc at 100338fc
 * undefined __cdecl FUN_100338fc(uint param_1, int param_2)
 * Address ranges: 100338fc-10033969
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100338fc(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float in_XMM0_Da;
  float in_XMM0_Db;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  float in_XMM1_Da;
  float in_XMM1_Db;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  uVar2 = 0;
  iVar1 = param_1 - 1;
  if (param_1 != 0) {
    do {
      uVar3 = uVar2 + 1;
      auVar4._0_4_ = ((float)iVar1 - (float)(int)uVar2) * in_XMM0_Da +
                     (float)(int)uVar2 * in_XMM1_Da;
      auVar4._4_4_ = ((float)iVar1 - (float)(int)uVar2) * in_XMM0_Db +
                     (float)(int)uVar2 * in_XMM1_Db;
      auVar4._8_4_ = ((float)iVar1 - (float)(int)uVar2) * in_XMM0_Dc +
                     (float)(int)uVar2 * in_XMM1_Dc;
      auVar4._12_4_ =
           ((float)iVar1 - (float)(int)uVar2) * in_XMM0_Dd + (float)(int)uVar2 * in_XMM1_Dd;
      auVar5._4_4_ = (float)iVar1;
      auVar5._0_4_ = (float)iVar1;
      auVar5._8_4_ = (float)iVar1;
      auVar5._12_4_ = (float)iVar1;
      auVar5 = divps(auVar4,auVar5);
      *(undefined1 (*) [16])(param_2 + uVar2 * 0x10) = auVar5;
      uVar2 = uVar3;
    } while (uVar3 < param_1);
  }
  return;
}

