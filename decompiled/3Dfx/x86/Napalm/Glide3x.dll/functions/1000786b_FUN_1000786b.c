/*
 * FUN_1000786b at 1000786b
 * undefined __fastcall FUN_1000786b(int param_1)
 * Address ranges: 1000786b-1000793a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000786b(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x3d0) == 0) {
    uVar2 = *(uint *)(param_1 + 0x3cc);
    uVar3 = -(uint)(2 < uVar2) & 0x3000 | -(uint)(1 < uVar2) & 0xc00 |
            (-(uint)(uVar2 != 0) & 0x300) + 1;
    *(uint *)(param_1 + 0x3d0) = uVar3;
    uVar1 = FUN_10008e40((int *)(param_1 + 0x169),(int *)(param_1 + 0x191));
    uVar3 = uVar3 | uVar1;
    *(uint *)(param_1 + 0x3d0) = uVar3;
    if (uVar2 != 0) {
      uVar1 = FUN_10008e40((int *)(param_1 + 0x21e),(int *)(param_1 + 0x1f6));
      uVar3 = uVar3 | uVar1;
      *(uint *)(param_1 + 0x3d0) = uVar3;
      if (1 < uVar2) {
        uVar1 = FUN_10008e40((int *)(param_1 + 699),(int *)(param_1 + 0x293));
        uVar3 = uVar3 | uVar1;
        *(uint *)(param_1 + 0x3d0) = uVar3;
        if (2 < uVar2) {
          uVar2 = FUN_10008e40((int *)(param_1 + 0x358),(int *)(param_1 + 0x330));
          uVar3 = uVar2 | uVar3;
        }
      }
    }
    *(uint *)(param_1 + 0x3d0) = uVar3 | 0xc6;
  }
  return;
}

