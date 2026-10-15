/*
 * FUN_1000b930 at 1000b930
 * undefined FUN_1000b930(void)
 * Address ranges: 1000b930-1000ba1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000b930(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  uint uVar4;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0xd0dc + uVar4 * 4);
    if (iVar1 == 0) {
      iVar1 = param_1 + uVar4 * 4;
    }
    else {
      FUN_1006a960(*(undefined4 *)(param_1 + 0xcf00),*(undefined4 *)(param_1 + 0x14),iVar1);
      iVar1 = param_1 + uVar4 * 4;
      *(undefined4 *)(iVar1 + 0xd0dc) = 0;
    }
    if (*(int *)(param_1 + 0xcfdc + uVar4 * 4) != 0) {
      uVar3 = (*pcVar2)();
      (*extraout_w11)(uVar3);
      *(undefined4 *)(iVar1 + 0xcfdc) = 0;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x40);
  return;
}

