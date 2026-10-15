/*
 * _guAlphaSource@4 at 1800046f0
 * undefined __cdecl _guAlphaSource@4(int param_1)
 * Address ranges: 1800046f0-18000477b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guAlphaSource_4(int param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
                    /* 0x46f0  107  _guAlphaSource@4
                       0x46f0  264  guAlphaSource */
  if (param_1 == 0) {
    lVar1 = FUN_180016878();
    uVar5 = 2;
    uVar3 = 0;
    uVar2 = 2;
  }
  else {
    if (param_1 == 1) {
      lVar1 = FUN_180016878();
      uVar5 = 2;
      uVar4 = 0;
      uVar3 = 0;
      uVar2 = 2;
      goto LAB_18000476c;
    }
    if (param_1 != 2) {
      if (param_1 != 3) {
        return;
      }
      lVar1 = FUN_180016878();
      uVar5 = 1;
      uVar4 = 0;
      uVar3 = 1;
      uVar2 = 3;
      goto LAB_18000476c;
    }
    lVar1 = FUN_180016878();
    uVar5 = 1;
    uVar3 = 8;
    uVar2 = 3;
  }
  uVar4 = 1;
LAB_18000476c:
  FUN_180018160(lVar1,uVar2,uVar3,uVar4,uVar5,0);
  return;
}

