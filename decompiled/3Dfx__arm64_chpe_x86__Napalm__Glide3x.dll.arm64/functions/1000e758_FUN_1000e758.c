/*
 * FUN_1000e758 at 1000e758
 * undefined FUN_1000e758(void)
 * Address ranges: 1000e758-1000e827
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000e758(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *extraout_w14;
  uint *extraout_w14_00;
  uint *extraout_w14_01;
  uint *extraout_w14_02;
  uint *puVar5;
  int extraout_w15;
  int extraout_w15_00;
  int extraout_w15_01;
  
  if (*(uint *)(param_1 + 0x3d0) == 0) {
    uVar2 = *(uint *)(param_1 + 0x3cc);
    uVar1 = 0x3000;
    if (uVar2 < 3) {
      uVar1 = 0;
    }
    uVar3 = 0xc00;
    if (uVar2 < 2) {
      uVar3 = 0;
    }
    uVar4 = 0x301;
    if (uVar2 == 0) {
      uVar4 = 1;
    }
    uVar4 = uVar1 | uVar3 | uVar4;
    *(uint *)(param_1 + 0x3d0) = uVar4;
    uVar1 = FUN_10010b68(param_1,param_1 + 0x169,param_1 + 0x191);
    uVar4 = uVar1 | uVar4;
    *extraout_w14 = uVar4;
    puVar5 = extraout_w14;
    if (uVar2 != 0) {
      uVar1 = FUN_10010b68(uVar1,extraout_w15 + 0x21e,extraout_w15 + 0x1f6);
      uVar4 = uVar1 | uVar4;
      *extraout_w14_00 = uVar4;
      puVar5 = extraout_w14_00;
      if (1 < uVar2) {
        uVar1 = FUN_10010b68(uVar1,extraout_w15_00 + 699,extraout_w15_00 + 0x293);
        uVar4 = uVar1 | uVar4;
        *extraout_w14_01 = uVar4;
        puVar5 = extraout_w14_01;
        if (2 < uVar2) {
          uVar1 = FUN_10010b68(uVar1,extraout_w15_01 + 0x358,extraout_w15_01 + 0x330);
          uVar4 = uVar1 | uVar4;
          puVar5 = extraout_w14_02;
        }
      }
    }
    *puVar5 = uVar4 | 0xc6;
  }
  return;
}

