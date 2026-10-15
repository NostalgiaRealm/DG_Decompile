/*
 * FUN_100376c0 at 100376c0
 * undefined FUN_100376c0(void)
 * Address ranges: 100376c0-100378b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100376c0(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
                 uint param_7)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  code *extraout_w11;
  
  FUN_1001c570(*(undefined4 *)(param_1 + 0x365c));
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  if (param_2 == 4) {
    if (param_3 == 0) {
      if (1 < param_4) goto LAB_10037744;
      goto LAB_10037754;
    }
  }
  else {
LAB_10037744:
    if ((param_2 == 0 && param_3 == 4) && param_4 == 2) {
LAB_10037754:
      if (param_5 == 4) {
        if (param_6 == 0) {
          if (1 < param_7) goto LAB_10037768;
          goto LAB_10037778;
        }
      }
      else {
LAB_10037768:
        if ((param_5 == 0 && param_6 == 4) && param_7 == 2) {
LAB_10037778:
          uVar3 = 0;
          goto LAB_10037784;
        }
      }
    }
  }
  uVar3 = 1;
LAB_10037784:
  *(undefined4 *)(param_1 + 0x2c60) = uVar3;
  *(undefined4 *)(param_1 + 0x2c6c) = *(undefined4 *)(&DAT_100a04f8 + param_4 * 4);
  *(undefined4 *)(param_1 + 0x2c64) = *(undefined4 *)(&DAT_100a0510 + param_2 * 4);
  *(undefined4 *)(param_1 + 0x2c68) = *(undefined4 *)(&DAT_100a0470 + param_3 * 4);
  *(undefined4 *)(param_1 + 0x2c78) = *(undefined4 *)(&DAT_100a04f8 + param_7 * 4);
  *(undefined4 *)(param_1 + 0x2c70) = *(undefined4 *)(&DAT_100a0510 + param_5 * 4);
  *(undefined4 *)(param_1 + 0x2c74) = *(undefined4 *)(&DAT_100a0510 + param_6 * 4);
  uVar3 = 1;
  if (param_3 == 0xf) {
    uVar3 = 2;
  }
  *(undefined4 *)(param_1 + 0x2d08) = uVar3;
  uVar2 = *(uint *)(param_1 + 0x2d0c);
  uVar1 = uVar2 & 0xfffffffe;
  if (param_3 == 0xf) {
    uVar1 = uVar2 | 1;
  }
  *(uint *)(param_1 + 0x2d0c) = uVar1;
  *(undefined1 *)(param_1 + 0x2da9) = 1;
  uVar1 = 0x400;
  if (param_5 != 4) {
    uVar1 = 0;
  }
  uVar2 = 4;
  if (param_6 != 4) {
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0x2ddc) = uVar1 | uVar2 | *(uint *)(param_1 + 0x2ddc) & 0xffff0000;
  *(undefined1 *)(param_1 + 0x3650) = 1;
  return;
}

