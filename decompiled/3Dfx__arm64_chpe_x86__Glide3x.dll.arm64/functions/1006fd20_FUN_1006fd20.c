/*
 * FUN_1006fd20 at 1006fd20
 * undefined FUN_1006fd20(void)
 * Address ranges: 1006fd20-1006fe7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1006fd20(undefined8 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *extraout_w11;
  undefined1 auStack_60 [16];
  uint local_50;
  uint local_48;
  
  piVar1 = (int *)(param_2 + 0xc);
  *(uint *)(param_2 + 0x20) =
       (uint)(*(int *)(param_2 + 0x14) == *(int *)(*(int *)(param_2 + 0x10) + 0xd7c));
  *(undefined4 *)(*piVar1 + 0x18) = *(undefined4 *)(*piVar1 + 0x10f8);
  *(undefined4 *)(*piVar1 + 0x14) = *(undefined4 *)(*piVar1 + 0x11a0);
  *(undefined4 *)(*piVar1 + 0x3c) = *(undefined4 *)(*piVar1 + 0x11a8);
  iVar2 = *piVar1;
  uVar8 = *(undefined4 *)(iVar2 + 0x1304);
  uVar7 = FUN_1005a8e0(iVar2 + 0x1640,iVar2 + 0x10);
  FUN_100647f0(uVar8,uVar7);
  iVar2 = *(int *)(param_2 + 0x10);
  uVar3 = *(uint *)(iVar2 + 0x18);
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    uVar6 = SoftwareBreakpoint(0xf004,0x1006fdf4);
    (*(code *)uVar6)();
  }
  uVar5 = 0;
  if (uVar3 != 0) {
    uVar5 = (uint)(*(int *)(iVar2 + 0x10) << 1) / uVar3;
  }
  iVar4 = *(int *)(iVar2 + 0x14);
  uVar3 = *(uint *)(iVar2 + 0x1c);
  uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar8,auStack_60);
  if (local_50 <= uVar5) {
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      uVar6 = SoftwareBreakpoint(0xf004,0x1006fe50);
      (*(code *)uVar6)();
    }
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = (uint)(iVar4 << 1) / uVar3;
    }
    if (local_48 <= uVar5) {
      return 1;
    }
  }
  return 0;
}

