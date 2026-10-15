/*
 * FUN_1802171f8 at 1802171f8
 * undefined FUN_1802171f8(void)
 * Address ranges: 1802171f8-1802172f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1802171f8(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *extraout_x11;
  undefined1 auStack_60 [16];
  uint local_50;
  uint local_48;
  
  *(uint *)(param_2 + 0x3c) =
       (uint)(*(longlong *)(param_2 + 0x28) == *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xda0))
  ;
  *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x28) =
       *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x1150);
  *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x20) =
       *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x12a0);
  *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x70) =
       *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x12b0);
  uVar5 = FUN_180205088(*(longlong *)(param_2 + 0x18) + 0x19d8,*(longlong *)(param_2 + 0x18) + 0x18)
  ;
  FUN_180208c00(*(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x1508),uVar5);
  lVar6 = *(longlong *)(param_2 + 0x20);
  uVar1 = *(uint *)(lVar6 + 0x20);
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180217280);
    (*pcVar4)();
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = (uint)(*(int *)(lVar6 + 0x18) << 1) / uVar1;
  }
  iVar2 = *(int *)(lVar6 + 0x1c);
  uVar1 = *(uint *)(lVar6 + 0x24);
  uVar5 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar5,auStack_60);
  if (local_50 <= uVar3) {
    if (uVar1 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1802172cc);
      (*pcVar4)();
    }
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = (uint)(iVar2 << 1) / uVar1;
    }
    if (local_48 <= uVar3) {
      return 1;
    }
  }
  return 0;
}

