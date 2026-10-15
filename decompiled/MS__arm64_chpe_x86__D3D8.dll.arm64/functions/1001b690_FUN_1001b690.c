/*
 * FUN_1001b690 at 1001b690
 * undefined FUN_1001b690(void)
 * Address ranges: 1001b690-1001b733
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001b690(int param_1)

{
  code *pcVar1;
  uint uVar2;
  code *extraout_w11;
  int iVar3;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar3 = *(int *)(param_1 + 100);
  if (iVar3 != 0) {
    do {
      iVar3 = iVar3 + -1;
      uVar2 = (uint)*(ushort *)(param_1 + 0x30);
      while (uVar2 != 0) {
        uVar2 = uVar2 - 1;
        (*pcVar1)();
        (*extraout_w11)(param_1,iVar3,uVar2);
      }
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}

