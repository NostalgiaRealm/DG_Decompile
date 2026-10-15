/*
 * FUN_10020c10 at 10020c10
 * undefined FUN_10020c10(void)
 * Address ranges: 10020c10-10020cb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10020c10(int param_1)

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

