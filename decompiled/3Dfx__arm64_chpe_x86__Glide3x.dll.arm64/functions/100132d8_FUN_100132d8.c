/*
 * FUN_100132d8 at 100132d8
 * undefined FUN_100132d8(void)
 * Address ranges: 100132d8-100134ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100132d8(int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  longlong local_58;
  longlong local_50 [2];
  
  bVar2 = false;
  if (*(char *)(param_1 + 0x2c6b) == '\0') {
    return false;
  }
  (*(code *)PTR_FUN_100a00b4)(&local_58);
  local_58 = local_58 >> 0xc;
  (*(code *)PTR_FUN_100a00b0)(local_50);
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(char *)(param_1 + 0x2c66) == '\0') {
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar4 = (*extraout_w11)(uVar3,*(undefined4 *)(param_1 + 0x3334),0,0,0);
    bVar2 = iVar4 == 1;
    *(bool *)(param_1 + 0x2c66) = !bVar2;
    if (iVar4 == 1) goto LAB_100134c4;
  }
  if (local_58 < local_50[0] - *(longlong *)(param_1 + 0x2ad0)) {
    uVar3 = (*pcVar1)();
    (*extraout_w11_00)(uVar3,*extraout_w8);
    local_58 = local_50[0] + local_58;
    if (local_50[0] < local_58) {
      do {
        uVar3 = (*pcVar1)();
        iVar4 = (*extraout_w11_01)(uVar3,*(undefined4 *)(param_1 + 0x3334),0,0,0);
        bVar2 = iVar4 == 1;
        (*(code *)PTR_FUN_100a00b0)(local_50);
      } while (iVar4 == 1 && local_50[0] < local_58);
    }
    if (bVar2 == false) {
      *(longlong *)(param_1 + 0x2ad0) = local_50[0];
    }
  }
LAB_100134c4:
  *(bool *)(param_1 + 0x2c66) = bVar2 == false;
  return bVar2;
}

