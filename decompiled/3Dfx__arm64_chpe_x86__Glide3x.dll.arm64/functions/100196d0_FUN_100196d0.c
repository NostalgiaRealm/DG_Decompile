/*
 * FUN_100196d0 at 100196d0
 * undefined FUN_100196d0(void)
 * Address ranges: 100196d0-100197ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100196d0(int param_1,uint param_2,uint param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code *extraout_w11;
  uint uVar5;
  
  bVar1 = (param_2 & 1) == 0;
  if (bVar1) {
    bVar4 = 0;
    bVar3 = 0;
  }
  else {
    bVar4 = 4;
    bVar3 = 2;
  }
  bVar2 = 8;
  if ((param_3 & 0xff) == 0) {
    bVar2 = 0;
  }
  bVar4 = bVar2 | !bVar1 | bVar3 | bVar4;
  if (bVar4 != *(byte *)(param_1 + 0x2b3c)) {
    FUN_1001bfa8(*(undefined4 *)(param_1 + 0x32dc));
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
    *(byte *)(param_1 + 0x2b3c) = bVar4;
    *(undefined1 *)(param_1 + 0x2c61) = 1;
    if ((*(int *)(param_1 + 0x29f4) == 0) || (*(int *)(param_1 + 0x2ae0) != 0)) {
      uVar5 = 0xff0000;
    }
    else {
      uVar5 = 0;
    }
    *(uint *)(param_1 + 0x2c8c) = *(ushort *)(param_1 + 0x2c8c) | uVar5;
    *(undefined1 *)(param_1 + 0x32d0) = 1;
  }
  *(uint *)(param_1 + 0x29f4) = param_3 & 0xff;
  *(uint *)(param_1 + 0x29f0) = param_2 & 0xff;
  return;
}

