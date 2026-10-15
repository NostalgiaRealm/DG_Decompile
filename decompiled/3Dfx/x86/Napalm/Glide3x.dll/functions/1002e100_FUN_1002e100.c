/*
 * FUN_1002e100 at 1002e100
 * undefined4 __fastcall FUN_1002e100(int param_1)
 * Address ranges: 1002e100-1002e1b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1002e100(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  piVar2 = *(int **)(param_1 + (*(int *)(param_1 + 0x120) + 5) * 0x14);
  if (*piVar2 == 0) {
    if (*(int *)(param_1 + 0x120) == *(int *)(param_1 + 0x124)) {
      return 0;
    }
    SetEvent(*(HANDLE *)(param_1 + 0x74 + *(int *)(param_1 + 0x120) * 0x14));
    *(uint *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1U & 7;
    iVar5 = *(int *)(param_1 + *(int *)(param_1 + 0x120) * 0x14 + 0x6c);
    *(int *)(param_1 + (*(int *)(param_1 + 0x120) + 5) * 0x14) = iVar5;
  }
  else {
    (*(code *)*piVar2)(piVar2 + 2);
    piVar1 = (int *)(param_1 + 0x128);
    iVar3 = *(int *)(param_1 + 0x120) + 5;
    iVar5 = iVar3 * 5;
    *(int *)(param_1 + iVar3 * 0x14) = piVar2[1] + 8 + (int)piVar2;
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = iVar3 + -1;
    UNLOCK();
    if (iVar3 + -1 == 0) {
      uVar4 = (**(code **)(param_1 + 0x48))(piVar1);
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
  return CONCAT31((int3)((uint)iVar5 >> 8),1);
}

