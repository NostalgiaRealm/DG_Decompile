/*
 * _guAlphaSource@4 at 180002b00
 * undefined __fastcall _guAlphaSource@4(int param_1)
 * Address ranges: 180002b00-180002b94
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guAlphaSource_4(int param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
                    /* 0x2b00  111  _guAlphaSource@4
                       0x2b00  272  guAlphaSource */
  iVar2 = 0;
  if (param_1 == 0) {
    puVar1 = FUN_180015384();
    uVar4 = 0;
    uVar3 = 2;
    uVar6 = 2;
  }
  else {
    if (param_1 == 1) {
      puVar1 = FUN_180015384();
      uVar5 = 0;
      uVar3 = 2;
      uVar4 = 0;
      uVar6 = 2;
      goto LAB_180002b88;
    }
    if (param_1 != 2) {
      if (param_1 != 3) {
        return;
      }
      puVar1 = FUN_180015384();
      uVar5 = 0;
      uVar6 = 1;
      uVar3 = 3;
      uVar4 = 1;
      goto LAB_180002b88;
    }
    puVar1 = FUN_180015384();
    uVar3 = 3;
    uVar6 = 1;
    uVar4 = 8;
  }
  uVar5 = 1;
LAB_180002b88:
  FUN_180016e20((longlong)puVar1,uVar3,uVar4,uVar5,uVar6,iVar2);
  return;
}

