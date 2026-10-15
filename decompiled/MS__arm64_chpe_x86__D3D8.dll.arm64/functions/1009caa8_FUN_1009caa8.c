/*
 * FUN_1009caa8 at 1009caa8
 * undefined FUN_1009caa8(void)
 * Address ranges: 1009caa8-1009cb8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1009caa8(int param_1,int *param_2,int param_3,int param_4)

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
  uVar4 = *(uint *)(&DAT_1012cda0 + iVar1 * 4);
  if (uVar4 == 0x18) {
    uVar4 = 0x20;
  }
  *(bool *)(param_2 + 5) = uVar4 < 8;
  uVar3 = uVar4 >> 3;
  if (uVar4 < 8) {
    uVar3 = *(uint *)(&DAT_1012cea0 + iVar1 * 4);
  }
  param_2[1] = uVar3;
  param_2[2] = (uint)*(byte *)(iVar1 + 0x1012cf10);
  param_2[3] = (uint)*(byte *)(iVar1 + 0x1012cf30);
  uVar3 = FUN_100ae4d0(param_1,*(undefined4 *)(param_1 + 0x14),param_3);
  uVar4 = uVar3;
  if (extraout_w12 < 8) {
    if (extraout_w11 == 0) {
                    /* WARNING: Does not return */
      uVar2 = SoftwareBreakpoint(0xf004,0x1009cb6c);
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

