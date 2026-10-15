/*
 * FUN_180009054 at 180009054
 * undefined __fastcall FUN_180009054(longlong param_1)
 * Address ranges: 180009054-1800090e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180009054(longlong param_1)

{
  uint uVar1;
  byte bVar2;
  undefined7 extraout_var;
  uint uVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x2a4) == 0) {
    uVar1 = *(uint *)(param_1 + 0x2a0);
    uVar4 = -(uint)(2 < uVar1) & 0x3000 | -(uint)(1 < uVar1) & 0xc00;
    uVar3 = 1;
    if (uVar1 != 0) {
      uVar3 = 0x301;
    }
    *(uint *)(param_1 + 0x2a4) = uVar4 | uVar3;
    bVar2 = FUN_180008ee0(param_1,(byte *)(param_1 + 0x156),(byte *)(param_1 + 0x15e));
    uVar3 = 199;
    if (uVar1 != 0) {
      uVar3 = 0x3c7;
    }
    *(uint *)(param_1 + 0x2a4) = (uint)CONCAT71(extraout_var,bVar2) | uVar4 | uVar3;
  }
  return;
}

