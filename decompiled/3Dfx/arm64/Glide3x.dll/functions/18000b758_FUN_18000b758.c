/*
 * FUN_18000b758 at 18000b758
 * undefined __cdecl FUN_18000b758(longlong param_1)
 * Address ranges: 18000b758-18000b8ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000b758(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  
  if (*(int *)(param_1 + 0x2a4) == 0) {
    uVar2 = *(uint *)(param_1 + 0x2a0);
    uVar3 = 0x3000;
    if (uVar2 < 3) {
      uVar3 = 0;
    }
    uVar4 = 0xc00;
    if (uVar2 < 2) {
      uVar4 = 0;
    }
    if (*(byte *)(param_1 + 0x15e) < 0xb) {
      uVar8 = (uint)(byte)(&DAT_180065810)[(uint)*(byte *)(param_1 + 0x15e)];
    }
    else {
      uVar8 = 0;
    }
    uVar5 = 0;
    uVar6 = 0x30;
    if ((uVar8 >> 1 & 1) != 0) {
      if (*(byte *)(param_1 + 0x15f) < 0xd) {
        bVar9 = (&DAT_180065800)[(uint)*(byte *)(param_1 + 0x15f)];
      }
      else {
        bVar9 = 0;
      }
      if (((bVar9 & 0xc) != 0) && (uVar5 = uVar6, *(char *)(param_1 + 0x160) != '\0')) {
        uVar5 = 0;
      }
      if ((bVar9 & 1) != 0) {
        uVar7 = uVar6;
        if (*(char *)(param_1 + 0x161) != '\0') {
          uVar7 = 0;
        }
        uVar5 = uVar7 | uVar5;
      }
    }
    uVar7 = 0x30;
    if ((uVar8 & 1) != 0) {
      uVar11 = uVar7;
      if (*(char *)(param_1 + 0x161) != '\0') {
        uVar11 = 0;
      }
      uVar5 = uVar11 | uVar5;
    }
    if ((uVar8 & 0xc) != 0) {
      uVar8 = uVar7;
      if (*(char *)(param_1 + 0x160) != '\0') {
        uVar8 = 0;
      }
      uVar5 = uVar8 | uVar5;
    }
    if (*(byte *)(param_1 + 0x156) < 0xb) {
      uVar8 = (uint)(byte)(&DAT_180065810)[(uint)*(byte *)(param_1 + 0x156)];
    }
    else {
      uVar8 = 0;
    }
    uVar11 = 0x28;
    if ((uVar8 >> 1 & 1) != 0) {
      if (*(byte *)(param_1 + 0x157) < 0xd) {
        uVar10 = (uint)(byte)(&DAT_180065800)[(uint)*(byte *)(param_1 + 0x157)];
      }
      else {
        uVar10 = 0;
      }
      if ((uVar10 >> 2 & 1) != 0) {
        uVar1 = uVar11;
        if (*(char *)(param_1 + 0x158) != '\0') {
          uVar1 = 0;
        }
        uVar5 = uVar1 | uVar5;
      }
      if ((uVar10 >> 3 & 1) != 0) {
        uVar1 = uVar7;
        if (*(char *)(param_1 + 0x160) != '\0') {
          uVar1 = 0;
        }
        uVar5 = uVar1 | uVar5;
      }
      if ((uVar10 & 1) != 0) {
        if (*(char *)(param_1 + 0x161) != '\0') {
          uVar7 = 0;
        }
        uVar5 = uVar7 | uVar5;
      }
    }
    if ((uVar8 & 1) != 0) {
      uVar7 = uVar11;
      if (*(char *)(param_1 + 0x159) != '\0') {
        uVar7 = 0;
      }
      uVar5 = uVar7 | uVar5;
    }
    if ((uVar8 >> 2 & 1) != 0) {
      if (*(char *)(param_1 + 0x158) != '\0') {
        uVar11 = 0;
      }
      uVar5 = uVar11 | uVar5;
    }
    if ((uVar8 >> 3 & 1) != 0) {
      if (*(char *)(param_1 + 0x160) != '\0') {
        uVar6 = 0;
      }
      uVar5 = uVar6 | uVar5;
    }
    uVar8 = 0x3c7;
    if (uVar2 == 0) {
      uVar8 = 199;
    }
    *(uint *)(param_1 + 0x2a4) = uVar3 | uVar4 | uVar8 | uVar5;
  }
  return;
}

