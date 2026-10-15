/*
 * FUN_1000c798 at 1000c798
 * undefined FUN_1000c798(void)
 * Address ranges: 1000c798-1000c98b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000c798(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  puVar1 = (uint *)(param_1 + 0x294);
  if (*puVar1 == 0) {
    uVar9 = *(uint *)(param_1 + 0x290);
    uVar4 = 0xc00;
    if (uVar9 < 2) {
      uVar4 = 0;
    }
    uVar5 = 0x301;
    if (uVar9 == 0) {
      uVar5 = 1;
    }
    uVar6 = 0x3000;
    if (uVar9 < 3) {
      uVar6 = 0;
    }
    uVar6 = uVar4 | uVar5 | uVar6;
    *puVar1 = uVar6;
    uVar4 = 0;
    if (*(byte *)(param_1 + 0x14e) < 0xb) {
      uVar9 = (uint)*(byte *)(*(byte *)(param_1 + 0x14e) + 0x10099868);
    }
    else {
      uVar9 = 0;
    }
    uVar5 = 0x30;
    if ((uVar9 >> 1 & 1) != 0) {
      if (*(byte *)(param_1 + 0x14f) < 0xd) {
        bVar7 = *(byte *)(*(byte *)(param_1 + 0x14f) + 0x10099858);
      }
      else {
        bVar7 = 0;
      }
      if (((bVar7 & 0xc) != 0) && (uVar4 = uVar5, *(char *)(param_1 + 0x150) != '\0')) {
        uVar4 = 0;
      }
      if ((bVar7 & 1) != 0) {
        uVar3 = uVar5;
        if (*(char *)(param_1 + 0x151) != '\0') {
          uVar3 = 0;
        }
        uVar4 = uVar3 | uVar4;
      }
    }
    uVar3 = 0x30;
    if ((uVar9 & 1) != 0) {
      uVar10 = uVar3;
      if (*(char *)(param_1 + 0x151) != '\0') {
        uVar10 = 0;
      }
      uVar4 = uVar10 | uVar4;
    }
    if ((uVar9 & 0xc) != 0) {
      uVar9 = uVar3;
      if (*(char *)(param_1 + 0x150) != '\0') {
        uVar9 = 0;
      }
      uVar4 = uVar9 | uVar4;
    }
    if (*(byte *)(param_1 + 0x146) < 0xb) {
      uVar9 = (uint)*(byte *)(*(byte *)(param_1 + 0x146) + 0x10099868);
    }
    else {
      uVar9 = 0;
    }
    uVar10 = 0x28;
    if ((uVar9 >> 1 & 1) != 0) {
      if (*(byte *)(param_1 + 0x147) < 0xd) {
        uVar8 = (uint)*(byte *)(*(byte *)(param_1 + 0x147) + 0x10099858);
      }
      else {
        uVar8 = 0;
      }
      if ((uVar8 >> 2 & 1) != 0) {
        uVar2 = uVar10;
        if (*(char *)(param_1 + 0x148) != '\0') {
          uVar2 = 0;
        }
        uVar4 = uVar2 | uVar4;
      }
      if ((uVar8 >> 3 & 1) != 0) {
        uVar2 = uVar3;
        if (*(char *)(param_1 + 0x150) != '\0') {
          uVar2 = 0;
        }
        uVar4 = uVar2 | uVar4;
      }
      if ((uVar8 & 1) != 0) {
        if (*(char *)(param_1 + 0x151) != '\0') {
          uVar3 = 0;
        }
        uVar4 = uVar3 | uVar4;
      }
    }
    if ((uVar9 & 1) != 0) {
      uVar3 = uVar10;
      if (*(char *)(param_1 + 0x149) != '\0') {
        uVar3 = 0;
      }
      uVar4 = uVar3 | uVar4;
    }
    if ((uVar9 >> 2 & 1) != 0) {
      if (*(char *)(param_1 + 0x148) != '\0') {
        uVar10 = 0;
      }
      uVar4 = uVar10 | uVar4;
    }
    if ((uVar9 >> 3 & 1) != 0) {
      if (*(char *)(param_1 + 0x150) != '\0') {
        uVar5 = 0;
      }
      uVar4 = uVar5 | uVar4;
    }
    *puVar1 = uVar6 | uVar4 | 0xc6;
  }
  return;
}

