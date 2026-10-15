/*
 * FUN_10023fe0 at 10023fe0
 * undefined FUN_10023fe0(void)
 * Address ranges: 10023fe0-100241f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10023fe0(int param_1)

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
  if (*(char *)(param_1 + 0x2bcb) == '\0') {
    return false;
  }
  (*(code *)PTR_FUN_1009d0b4)(&local_58);
  local_58 = local_58 >> 0xc;
  (*(code *)PTR_FUN_1009d0b0)(local_50);
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(char *)(param_1 + 0x2bc6) == '\0') {
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar4 = (*extraout_w11)(uVar3,*(undefined4 *)(param_1 + 0x31b4),0,0,0);
    bVar2 = iVar4 == 1;
    *(bool *)(param_1 + 0x2bc6) = !bVar2;
    if (iVar4 == 1) goto LAB_100241cc;
  }
  if (local_58 < local_50[0] - *(longlong *)(param_1 + 0x2a30)) {
    uVar3 = (*pcVar1)();
    (*extraout_w11_00)(uVar3,*extraout_w8);
    local_58 = local_50[0] + local_58;
    if (local_50[0] < local_58) {
      do {
        uVar3 = (*pcVar1)();
        iVar4 = (*extraout_w11_01)(uVar3,*(undefined4 *)(param_1 + 0x31b4),0,0,0);
        bVar2 = iVar4 == 1;
        (*(code *)PTR_FUN_1009d0b0)(local_50);
      } while (iVar4 == 1 && local_50[0] < local_58);
    }
    if (bVar2 == false) {
      *(longlong *)(param_1 + 0x2a30) = local_50[0];
    }
  }
LAB_100241cc:
  *(bool *)(param_1 + 0x2bc6) = bVar2 == false;
  return bVar2;
}

