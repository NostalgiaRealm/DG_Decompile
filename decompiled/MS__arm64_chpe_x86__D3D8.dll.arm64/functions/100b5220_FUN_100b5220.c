/*
 * FUN_100b5220 at 100b5220
 * undefined FUN_100b5220(void)
 * Address ranges: 100b5220-100b54f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100b5220(undefined8 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if ((((*(char *)(param_2 + 0x14) == -1) || (*(char *)(param_2 + 0x19) != '\0')) ||
      (*(char *)(param_2 + 0x18) != '\x02')) &&
     (((*(char *)(param_2 + 0x14) == -1 || (*(char *)(param_2 + 0x19) != -0x70)) ||
      (*(char *)(param_2 + 0x18) != '\x03')))) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
  if ((*(char *)(param_2 + 0x8c) == -1) ||
     ((*(char *)(param_2 + 0x91) == '\x01' && (*(char *)(param_2 + 0x90) == '\x02')))) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  if ((*(char *)(param_2 + 0x2c) == -1) ||
     ((*(char *)(param_2 + 0x31) == '0' && (*(char *)(param_2 + 0x30) == '\x02')))) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  if ((*(char *)(param_2 + 0x94) == -1) ||
     ((*(char *)(param_2 + 0x99) == '1' && (*(char *)(param_2 + 0x98) == '\x02')))) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  if ((*(char *)(param_2 + 0x3c) == -1) ||
     ((*(char *)(param_2 + 0x41) == -0x60 && (*(char *)(param_2 + 0x40) == '\x04')))) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  if ((*(char *)(param_2 + 0x44) == -1) ||
     ((*(char *)(param_2 + 0x49) == -0x5f && (*(char *)(param_2 + 0x48) == '\x04')))) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  if ((*(char *)(param_2 + 0x34) == -1) ||
     ((*(char *)(param_2 + 0x39) == '@' && (*(char *)(param_2 + 0x38) == '\0')))) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  if ((*(char *)(param_2 + 0x24) == -1) ||
     ((*(char *)(param_2 + 0x29) == ' ' && (*(char *)(param_2 + 0x28) == '\x05')))) {
    uVar9 = 1;
  }
  else {
    uVar9 = 0;
  }
  if ((*(char *)(param_2 + 0x1c) == -1) ||
     ((*(char *)(param_2 + 0x21) == '\x10' && (*(byte *)(param_2 + 0x20) < 4)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  uVar2 = uVar4 & uVar10 & uVar3 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar2;
  uVar10 = 0;
  do {
    if ((*(char *)(param_2 + 0x4c + uVar10 * 8) == -1) ||
       ((iVar1 = param_2 + uVar10 * 8, (uint)*(byte *)(iVar1 + 0x51) == (uVar10 & 0xf | 0x50) &&
        (*(byte *)(iVar1 + 0x50) < 4)))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    uVar10 = uVar10 + 1;
    uVar2 = uVar3 & uVar2;
  } while (uVar10 < 8);
  return uVar2;
}

