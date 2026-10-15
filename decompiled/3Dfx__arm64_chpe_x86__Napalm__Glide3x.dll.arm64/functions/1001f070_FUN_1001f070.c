/*
 * FUN_1001f070 at 1001f070
 * undefined FUN_1001f070(void)
 * Address ranges: 1001f070-1001f277
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001f070(int param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  code *extraout_w11;
  
  FUN_1001c570(*(undefined4 *)(param_1 + 0x365c));
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(int *)(param_1 + 0x2de4) = param_2;
  bVar1 = 1 < param_2 - 3U;
  uVar4 = (uint)(param_2 - 1U < 2 || !bVar1);
  *(uint *)(param_1 + 0x2c20) = uVar4;
  puVar2 = (uint *)(param_1 + 0x2d0c);
  if (bVar1) {
    *puVar2 = *puVar2 & 0xfffffffd;
    *(undefined4 *)(param_1 + 0x2c2c) = *(undefined4 *)(param_1 + 0x2d20);
    *(undefined4 *)(param_1 + 0x2c40) = *(undefined4 *)(param_1 + 0x2d34);
    *(undefined4 *)(param_1 + 0x2c3c) = *(undefined4 *)(param_1 + 0x2d30);
    iVar5 = 0x2d38;
    *(undefined1 *)(param_1 + 0x2c30) = *(undefined1 *)(param_1 + 0x2d24);
    uVar3 = *(undefined4 *)(&DAT_100a0170 + *(int *)(param_1 + 0x2d3c) * 4);
    *(undefined4 *)(param_1 + 0x2c34) = *(undefined4 *)(param_1 + 0x2d2c);
    iVar6 = 0x2c54;
    *(undefined1 *)(param_1 + 0x2c31) = *(undefined1 *)(param_1 + 0x2d25);
    *(undefined4 *)(param_1 + 0x2c28) = uVar3;
  }
  else {
    *puVar2 = *puVar2 | 2;
    *(undefined4 *)(param_1 + 0x2d20) = *(undefined4 *)(param_1 + 0x2c2c);
    *(undefined4 *)(param_1 + 0x2d34) = *(undefined4 *)(param_1 + 0x2c40);
    *(undefined4 *)(param_1 + 0x2d30) = *(undefined4 *)(param_1 + 0x2c3c);
    iVar5 = 0x2c54;
    iVar6 = 0x2d38;
    *(undefined1 *)(param_1 + 0x2d24) = *(undefined1 *)(param_1 + 0x2c30);
    *(undefined1 *)(param_1 + 0x2d25) = *(undefined1 *)(param_1 + 0x2c31);
    uVar3 = *(undefined4 *)(param_1 + 0x2c34);
    *(undefined4 *)(param_1 + 0x2d28) = uVar3;
    *(undefined4 *)(param_1 + 0x2d2c) = uVar3;
  }
  uVar3 = *(undefined4 *)(param_1 + iVar5);
  *(undefined1 *)(param_1 + 0x2da8) = 1;
  *(undefined1 *)(param_1 + 0x2dac) = 1;
  *(undefined4 *)(param_1 + iVar6) = uVar3;
  uVar7 = 0;
  if (*(int *)(param_1 + 0x2b30) == 0 || uVar4 != 0) {
    uVar7 = 0xff0000;
  }
  *(uint *)(param_1 + 0x2ddc) = *(ushort *)(param_1 + 0x2ddc) | uVar7;
  *(undefined1 *)(param_1 + 0x3650) = 1;
  *(int *)(param_1 + 0x2b38) = param_2;
  return;
}

