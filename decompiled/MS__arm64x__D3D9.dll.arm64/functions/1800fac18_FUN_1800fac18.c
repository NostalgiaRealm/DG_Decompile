/*
 * FUN_1800fac18 at 1800fac18
 * undefined FUN_1800fac18(void)
 * Address ranges: 1800fac18-1800fae43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800fac18(undefined8 param_1,longlong *param_2,ulonglong *param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  int local_60 [4];
  longlong local_50;
  uint local_48;
  ushort local_44;
  ushort local_42;
  int local_40;
  uint uStack_3c;
  
  (**(code **)(*param_2 + 0x50))(param_2,local_60);
  (**(code **)(*param_2 + 0x70))(param_2,auStack_78,auStack_80);
  if (uStack_3c == 0) {
    uStack_3c = 1;
  }
  uVar3 = (ulonglong)uStack_3c;
  if (local_40 - 0x17U < 0x19) goto LAB_1800fad64;
  if ((local_40 - 0x5eU < 0x14) || (local_40 - 0x46U < 0xf)) {
LAB_1800fad00:
    lVar10 = 1;
    lVar9 = 1;
    lVar6 = 1;
    lVar7 = 1;
  }
  else if (local_40 - 9U < 0xe) {
    lVar10 = 8;
    lVar9 = 8;
    lVar6 = 8;
    lVar7 = 8;
  }
  else if (local_40 - 0x30U < 0xc) {
LAB_1800fad3c:
    lVar10 = 2;
    lVar9 = 2;
    lVar6 = 2;
    lVar7 = 2;
  }
  else {
    if (local_40 - 0x3cU < 7) goto LAB_1800fad00;
    if (local_40 - 0x57U < 7) {
LAB_1800fad64:
      lVar10 = 4;
      lVar9 = 4;
      lVar6 = 4;
      lVar7 = 4;
    }
    else if (local_40 - 1U < 4) {
      lVar10 = 0x10;
      lVar9 = 0x10;
      lVar6 = 0x10;
      lVar7 = 0x10;
    }
    else {
      if (3 < local_40 - 5U) {
        if (2 < local_40 - 0x43U) {
          if ((local_40 - 0x55U < 2) || (local_40 - 0x72U < 2)) goto LAB_1800fad3c;
          goto LAB_1800fad00;
        }
        goto LAB_1800fad64;
      }
      lVar10 = 0xc;
      lVar9 = 0xc;
      lVar6 = 0xc;
      lVar7 = 0xc;
    }
  }
  if (local_60[0] == 1) {
    uVar3 = lVar10 * local_50;
  }
  else if (local_60[0] == 2) {
    uVar3 = lVar9 * uVar3 * local_50;
  }
  else {
    if (local_60[0] == 3) {
      uVar3 = (ulonglong)local_48 * lVar6 * uVar3 * local_50;
      uVar4 = 4;
      goto LAB_1800fadfc;
    }
    if (local_60[0] == 4) {
      uVar3 = (ulonglong)local_44 * (ulonglong)local_48 * lVar7 * uVar3 * local_50;
      uVar4 = 8;
      goto LAB_1800fadfc;
    }
    uVar3 = 0;
  }
  uVar4 = 2;
LAB_1800fadfc:
  uVar5 = 1;
  uVar8 = uVar3;
  if (1 < local_42) {
    do {
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x1800fae18);
        (*pcVar2)();
      }
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar5 = uVar5 + 1;
      uVar3 = uVar1 + uVar3;
      uVar8 = uVar1;
    } while (uVar5 < local_42);
  }
  *param_3 = uVar3;
  *param_4 = uVar3;
  return;
}

