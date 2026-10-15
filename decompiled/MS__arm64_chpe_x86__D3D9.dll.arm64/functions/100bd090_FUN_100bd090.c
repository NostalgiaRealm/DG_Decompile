/*
 * FUN_100bd090 at 100bd090
 * undefined FUN_100bd090(void)
 * Address ranges: 100bd090-100bd173
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100bd090(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_w11;
  uint extraout_w12;
  int extraout_w13;
  
  *param_2 = param_3 + *(int *)(param_1 + 0x2c) * param_4;
  iVar1 = *(int *)(param_1 + 0x1c);
  uVar4 = *(uint *)(&DAT_10162c20 + iVar1 * 4);
  if (uVar4 == 0x18) {
    uVar4 = 0x20;
  }
  *(bool *)(param_2 + 5) = uVar4 < 8;
  uVar3 = uVar4 >> 3;
  if (uVar4 < 8) {
    uVar3 = *(uint *)(&DAT_10162730 + iVar1 * 4);
  }
  param_2[1] = uVar3;
  param_2[2] = (uint)*(byte *)(iVar1 + 0x101627d8);
  param_2[3] = (uint)*(byte *)(iVar1 + 0x10162808);
  uVar3 = FUN_100ceef0(param_1,*(undefined4 *)(param_1 + 0x14),param_3);
  uVar4 = uVar3;
  if (extraout_w12 < 8) {
    if (extraout_w11 == 0) {
                    /* WARNING: Does not return */
      uVar2 = SoftwareBreakpoint(0xf004,0x100bd154);
      (*(code *)uVar2)();
    }
    uVar4 = 0;
    if (extraout_w11 != 0) {
      uVar4 = uVar3 / extraout_w11;
    }
  }
  *(uint *)(extraout_w13 + 0x10) = uVar4;
  return extraout_w13;
}

