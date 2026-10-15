/*
 * FUN_1000732c at 1000732c
 * undefined __fastcall FUN_1000732c(int param_1)
 * Address ranges: 1000732c-10007390
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000732c(int param_1)

{
  byte bVar1;
  undefined3 extraout_var;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x294) == 0) {
    uVar2 = *(uint *)(param_1 + 0x290);
    uVar2 = -(uint)(2 < uVar2) & 0x3000 | -(uint)(1 < uVar2) & 0xc00 |
            (-(uint)(uVar2 != 0) & 0x300) + 1;
    *(uint *)(param_1 + 0x294) = uVar2;
    bVar1 = FUN_10007206((byte *)(param_1 + 0x146),(byte *)(param_1 + 0x14e));
    *(uint *)(param_1 + 0x294) = CONCAT31(extraout_var,bVar1) | uVar2 | 0xc6;
  }
  return;
}

