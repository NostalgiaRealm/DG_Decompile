/*
 * FUN_1007cbf7 at 1007cbf7
 * undefined4 __stdcall FUN_1007cbf7(int param_1)
 * Address ranges: 1007cbf7-1007cd2c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007cbf7(int param_1)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int extraout_ECX;
  int extraout_ECX_00;
  byte bVar5;
  byte extraout_DL;
  byte extraout_DL_00;
  uint uVar6;
  char *pcVar4;
  
  if ((*(char *)(param_1 + 0x14) == -1) ||
     (((*(char *)(param_1 + 0x19) != '\0' || (*(char *)(param_1 + 0x18) != '\x02')) &&
      ((*(char *)(param_1 + 0x14) == -1 ||
       ((*(char *)(param_1 + 0x19) != -0x70 || (*(char *)(param_1 + 0x18) != '\x03')))))))) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if ((*(char *)(param_1 + 0x8c) == -1) ||
     ((*(char *)(param_1 + 0x91) == '\x01' && (*(char *)(param_1 + 0x90) == '\x02')))) {
    bVar2 = 1;
  }
  else {
    bVar2 = 0;
  }
  bVar2 = bVar2 & bVar5;
  if ((*(char *)(param_1 + 0x2c) != -1) &&
     ((*(char *)(param_1 + 0x31) != '0' || (*(char *)(param_1 + 0x30) != '\x02')))) {
    bVar2 = 0;
  }
  if ((*(char *)(param_1 + 0x94) == -1) ||
     ((*(char *)(param_1 + 0x99) == '1' && (*(char *)(param_1 + 0x98) == '\x02')))) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  bVar5 = bVar5 & bVar2;
  if ((*(char *)(param_1 + 0x3c) != -1) &&
     ((*(char *)(param_1 + 0x41) != -0x60 || (*(char *)(param_1 + 0x40) != '\x04')))) {
    bVar5 = 0;
  }
  if ((*(char *)(param_1 + 0x44) == -1) ||
     ((*(char *)(param_1 + 0x49) == -0x5f && (*(char *)(param_1 + 0x48) == '\x04')))) {
    bVar2 = 1;
  }
  else {
    bVar2 = 0;
  }
  bVar2 = bVar2 & bVar5;
  if ((*(char *)(param_1 + 0x34) != -1) &&
     ((*(char *)(param_1 + 0x39) != '@' || (*(char *)(param_1 + 0x38) != '\0')))) {
    bVar2 = 0;
  }
  if ((*(char *)(param_1 + 0x24) == -1) ||
     ((*(char *)(param_1 + 0x29) == ' ' && (*(char *)(param_1 + 0x28) == '\x05')))) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  bVar5 = bVar5 & bVar2;
  pcVar4 = (char *)(param_1 + 0x1c);
  if (*pcVar4 != -1) {
    if (*(char *)(param_1 + 0x21) == '\x10') {
      cVar3 = FUN_1007cbd4((int)pcVar4);
      pcVar4 = (char *)CONCAT31(extraout_var,cVar3);
      param_1 = extraout_ECX;
      bVar5 = extraout_DL;
      if (cVar3 != '\0') goto LAB_1007ccf4;
    }
    bVar5 = 0;
  }
LAB_1007ccf4:
  uVar6 = 0;
  do {
    pcVar1 = (char *)(param_1 + 0x4c + uVar6 * 8);
    if (*pcVar1 == -1) {
LAB_1007cd1b:
      pcVar4 = (char *)CONCAT31((int3)((uint)pcVar4 >> 8),1);
    }
    else {
      pcVar4 = (char *)(CONCAT31((int3)((uint)pcVar4 >> 8),(char)uVar6) & 0xffffff0f | 0x50);
      if (*(char *)(param_1 + 0x51 + uVar6 * 8) == (char)pcVar4) {
        cVar3 = FUN_1007cbd4((int)pcVar1);
        pcVar4 = (char *)CONCAT31(extraout_var_00,cVar3);
        param_1 = extraout_ECX_00;
        bVar5 = extraout_DL_00;
        if (cVar3 != '\0') goto LAB_1007cd1b;
      }
      pcVar4 = (char *)((uint)pcVar4 & 0xffffff00);
    }
    bVar5 = bVar5 & (byte)pcVar4;
    uVar6 = uVar6 + 1;
    if (7 < uVar6) {
      return CONCAT31((int3)((uint)pcVar4 >> 8),bVar5);
    }
  } while( true );
}

