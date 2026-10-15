/*
 * FUN_180219f48 at 180219f48
 * undefined FUN_180219f48(void)
 * Address ranges: 180219f48-18021a193
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180219f48(undefined8 param_1,undefined8 param_2,ulonglong *param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  undefined *puVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  int local_60 [4];
  longlong local_50;
  uint local_48;
  ushort local_44;
  ushort local_42;
  int local_40;
  uint uStack_3c;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(param_2,local_60);
  (*(code *)puVar2)(0x180224000);
  (*extraout_x11_00)(param_2,auStack_78,auStack_80);
  if (uStack_3c == 0) {
    uStack_3c = 1;
  }
  uVar5 = (ulonglong)uStack_3c;
  if (local_40 - 0x17U < 0x19) goto LAB_18021a0b4;
  if ((local_40 - 0x5eU < 0x14) || (local_40 - 0x46U < 0xf)) {
LAB_18021a050:
    lVar4 = 1;
    lVar11 = 1;
    lVar8 = 1;
    lVar9 = 1;
  }
  else if (local_40 - 9U < 0xe) {
    lVar4 = 8;
    lVar11 = 8;
    lVar8 = 8;
    lVar9 = 8;
  }
  else if (local_40 - 0x30U < 0xc) {
LAB_18021a08c:
    lVar4 = 2;
    lVar11 = 2;
    lVar8 = 2;
    lVar9 = 2;
  }
  else {
    if (local_40 - 0x3cU < 7) goto LAB_18021a050;
    if (local_40 - 0x57U < 7) {
LAB_18021a0b4:
      lVar4 = 4;
      lVar11 = 4;
      lVar8 = 4;
      lVar9 = 4;
    }
    else if (local_40 - 1U < 4) {
      lVar4 = 0x10;
      lVar11 = 0x10;
      lVar8 = 0x10;
      lVar9 = 0x10;
    }
    else {
      if (3 < local_40 - 5U) {
        if (2 < local_40 - 0x43U) {
          if ((local_40 - 0x55U < 2) || (local_40 - 0x72U < 2)) goto LAB_18021a08c;
          goto LAB_18021a050;
        }
        goto LAB_18021a0b4;
      }
      lVar4 = 0xc;
      lVar11 = 0xc;
      lVar8 = 0xc;
      lVar9 = 0xc;
    }
  }
  if (local_60[0] == 1) {
    uVar5 = lVar4 * local_50;
  }
  else if (local_60[0] == 2) {
    uVar5 = lVar11 * uVar5 * local_50;
  }
  else {
    if (local_60[0] == 3) {
      uVar5 = (ulonglong)local_48 * lVar8 * uVar5 * local_50;
      uVar6 = 4;
      goto LAB_18021a14c;
    }
    if (local_60[0] == 4) {
      uVar5 = (ulonglong)local_44 * (ulonglong)local_48 * lVar9 * uVar5 * local_50;
      uVar6 = 8;
      goto LAB_18021a14c;
    }
    uVar5 = 0;
  }
  uVar6 = 2;
LAB_18021a14c:
  uVar7 = 1;
  uVar10 = uVar5;
  if (1 < local_42) {
    do {
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x18021a168);
        (*pcVar3)();
      }
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar10 / uVar6;
      }
      uVar7 = uVar7 + 1;
      uVar5 = uVar1 + uVar5;
      uVar10 = uVar1;
    } while (uVar7 < local_42);
  }
  *param_3 = uVar5;
  *param_4 = uVar5;
  return;
}

