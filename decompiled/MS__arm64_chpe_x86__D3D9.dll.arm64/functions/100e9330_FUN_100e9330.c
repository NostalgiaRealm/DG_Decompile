/*
 * FUN_100e9330 at 100e9330
 * undefined FUN_100e9330(void)
 * Address ranges: 100e9330-100e9417
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e9330(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  byte bVar6;
  undefined4 uVar7;
  code *extraout_w11;
  uint uVar8;
  
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar3 = *(int *)(param_1 + 0x118);
  uVar8 = 0;
  puVar1 = (uint *)(iVar3 + 0xd98);
  if (*puVar1 != 0) {
    do {
      iVar4 = *(int *)(*(int *)(iVar3 + 0xd94) + uVar8 * 4);
      iVar2 = 0;
      if (iVar4 != 0) {
        iVar2 = iVar4 + -8;
      }
      if (iVar2 != param_1 + -8) {
        bVar6 = FUN_100d33e0(*(undefined4 *)(iVar2 + 0x120),iVar2);
        uVar7 = (*pcVar5)();
        uVar7 = (*extraout_w11)(uVar7);
        (*(code *)PTR_FUN_1016c240)(uVar7,0x400,0x44454745,bVar6 ^ 1);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *puVar1);
  }
  return;
}

