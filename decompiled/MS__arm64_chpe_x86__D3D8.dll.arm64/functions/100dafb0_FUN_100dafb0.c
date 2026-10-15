/*
 * FUN_100dafb0 at 100dafb0
 * undefined FUN_100dafb0(void)
 * Address ranges: 100dafb0-100db067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100dafb0(int param_1)

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
        uVar5 = (*(code *)PTR_FUN_10134098)(0);
        (*(code *)PTR_FUN_1013429c)(*(short *)(param_1 + 0xc),uVar5);
        iVar2 = *(int *)(param_1 + 0x10);
        if (iVar2 != 0) {
          (*(code *)PTR_FUN_10134078)(iVar2);
          *(int *)(param_1 + 0x10) = 0;
        }
      }
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(param_1);
    }
  }
  return;
}

