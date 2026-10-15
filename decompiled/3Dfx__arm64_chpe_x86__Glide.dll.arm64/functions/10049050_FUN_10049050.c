/*
 * FUN_10049050 at 10049050
 * undefined FUN_10049050(void)
 * Address ranges: 10049050-1004917f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10049050(int param_1,uint param_2,uint param_3)

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
  if (bVar4 != *(byte *)(param_1 + 0x2a9c)) {
    FUN_1002bd50(*(undefined4 *)(param_1 + 0x315c));
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
    *(byte *)(param_1 + 0x2a9c) = bVar4;
    *(undefined1 *)(param_1 + 0x2bc1) = 1;
    if ((*(int *)(param_1 + 0x2978) == 0) || (*(int *)(param_1 + 0x2a40) != 0)) {
      uVar5 = 0xff0000;
    }
    else {
      uVar5 = 0;
    }
    *(uint *)(param_1 + 0x2bec) = *(ushort *)(param_1 + 0x2bec) | uVar5;
    *(undefined1 *)(param_1 + 0x3150) = 1;
  }
  *(uint *)(param_1 + 0x2978) = param_3 & 0xff;
  *(uint *)(param_1 + 0x2974) = param_2 & 0xff;
  return;
}

