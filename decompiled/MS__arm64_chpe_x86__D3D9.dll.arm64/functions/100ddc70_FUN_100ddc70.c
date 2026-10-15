/*
 * FUN_100ddc70 at 100ddc70
 * undefined FUN_100ddc70(void)
 * Address ranges: 100ddc70-100dde93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ddc70(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *extraout_w11;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_4c [12];
  
  FUN_10157b40(auStack_4c);
  FUN_10007270(param_1,param_2,param_3);
  FUN_101325d0(param_1 + 0x68e8,0,0x380);
  uVar2 = 0;
  do {
    uVar1 = 0;
    do {
      uVar3 = (&DAT_10170a24)[uVar1 * 2];
      *(undefined4 *)(param_1 + 0x68e8 + uVar2 * 0x38 + uVar1 * 4) = uVar3;
      if ((&DAT_10170a20)[uVar1 * 8] != '\0') {
        FUN_100d3aa0(param_1,uVar2,uVar1,uVar3);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0xe);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  uVar2 = 0;
  do {
    uVar1 = 0;
    do {
      uVar3 = (&DAT_10170a24)[uVar1 * 2];
      *(undefined4 *)(param_1 + 0x6c68 + uVar2 * 0x38 + uVar1 * 4) = uVar3;
      if ((&DAT_10170a20)[uVar1 * 8] != '\0' && uVar1 != 10) {
        FUN_100d3aa0(param_1,uVar2 + 0x100,uVar1,uVar3);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0xe);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 5);
  FUN_100d90a0(param_1,0,0);
  FUN_100da390(param_1,0,0);
  FUN_100db660(param_1 + 0x66b4,0);
  if (*(int *)(param_1 + 0xdc8) == 1) {
    if ((*(uint *)(param_1 + 0xdd0) >> 5 & 1) == 0) goto LAB_100dde10;
  }
  else if (*(int *)(param_1 + 0xdc8) != 3) goto LAB_100dde10;
  *(undefined4 *)(param_1 + 0xc2d4) = 1;
LAB_100dde10:
  FUN_100d3188(param_1);
  uVar3 = FUN_100256d0(0x3f800000,param_1);
  *(undefined4 *)(param_1 + 0xc2d0) = uVar3;
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + 0x14),*(int *)(*(int *)(param_1 + 0xc) + 0x94f) != 0)
  ;
  (*extraout_w11)(uVar3);
  FUN_10157a90(auStack_4c);
  return;
}

