/*
 * FUN_10068798 at 10068798
 * undefined FUN_10068798(void)
 * Address ranges: 10068798-1006889b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10068798(int param_1)

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
      FUN_10062620(*(undefined4 *)(param_1 + 0x8e4),*(undefined4 *)(param_1 + 0x760 + uVar4 * 4),1);
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
      FUN_10062460(*(undefined4 *)(param_1 + 0x8e4),*(undefined4 *)(param_1 + 0x7e0 + uVar4 * 8),
                   *(undefined4 *)(param_1 + 0x7e4 + uVar4 * 8),1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return;
}

