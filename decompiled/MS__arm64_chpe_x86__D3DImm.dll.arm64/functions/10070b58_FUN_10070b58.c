/*
 * FUN_10070b58 at 10070b58
 * undefined FUN_10070b58(void)
 * Address ranges: 10070b58-10070c0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10070b58(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  code *extraout_w11;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 8);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar2 + -1 == 0) {
      if (*(short *)(param_1 + 0xc) != 0) {
        uVar5 = (*(code *)PTR_FUN_100a1028)(0);
        (*(code *)PTR_FUN_100a109c)(*(short *)(param_1 + 0xc),uVar5);
        iVar2 = *(int *)(param_1 + 0x10);
        if (iVar2 != 0) {
          (*(code *)PTR_FUN_100a101c)(iVar2);
          *(int *)(param_1 + 0x10) = 0;
        }
      }
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(param_1);
    }
  }
  return;
}

