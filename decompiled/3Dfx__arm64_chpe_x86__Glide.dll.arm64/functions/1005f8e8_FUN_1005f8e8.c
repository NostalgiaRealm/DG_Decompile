/*
 * FUN_1005f8e8 at 1005f8e8
 * undefined FUN_1005f8e8(void)
 * Address ranges: 1005f8e8-1005f9eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005f8e8(int param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x914);
  uVar4 = 0;
  *(uint *)(param_1 + 0x914) = 0;
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (uVar1 != 0) {
    do {
      FUN_10059760(*(undefined4 *)(param_1 + 0x8e4),*(undefined4 *)(param_1 + 0x760 + uVar4 * 4),1);
      uVar3 = (*pcVar2)();
      (*extraout_w11)(uVar3);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x918);
  *(uint *)(param_1 + 0x918) = 0;
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      FUN_100595a0(*(undefined4 *)(param_1 + 0x8e4),*(undefined4 *)(param_1 + 0x7e0 + uVar4 * 8),
                   *(undefined4 *)(param_1 + 0x7e4 + uVar4 * 8),1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return;
}

