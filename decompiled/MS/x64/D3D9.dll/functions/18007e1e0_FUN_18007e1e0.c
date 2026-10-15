/*
 * FUN_18007e1e0 at 18007e1e0
 * undefined __fastcall FUN_18007e1e0(undefined8 param_1, longlong param_2, uint param_3, undefined8 * param_4, undefined4 * param_5, undefined4 * param_6, undefined1 * param_7, char param_8)
 * Address ranges: 18007e1e0-18007e38f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18007e1e0(undefined8 param_1,longlong param_2,uint param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined1 *param_7,char param_8)

{
  undefined4 uVar1;
  char *pcVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  
  *param_4 = 0;
  *param_5 = 0;
  uVar1 = 1;
  if (param_3 != 2) {
    uVar1 = 3;
  }
  uVar5 = 0xf;
  *param_6 = uVar1;
  *param_7 = 0xf;
  if (param_8 == '\0') {
    uVar3 = 1;
    if (param_3 != 0x10) {
      uVar3 = param_3;
    }
    uVar4 = *(ulonglong *)(*(longlong *)(param_2 + 0x1b0) + 0x48) >> ((byte)(uVar3 << 2) & 0x3f);
    uVar3 = (uint)uVar4 & 0xf;
    if (((uVar4 & 0xf) == 0) || (uVar3 == 1)) {
LAB_18007e271:
      *param_6 = 3;
      uVar5 = 0xf;
    }
    else if (uVar3 == 2) {
      *param_6 = 1;
    }
    else if ((uVar3 == 3) || (uVar3 == 4)) {
      *param_6 = 2;
      uVar5 = 0xf;
    }
    else {
      if ((uVar3 != 5) && (uVar3 != 6)) goto LAB_18007e271;
      *param_6 = 1;
      uVar5 = 1;
    }
    *param_7 = uVar5;
  }
  if (param_3 < 9) {
    if (param_3 == 8) {
      *param_5 = 1;
    }
    else {
      if (param_3 == 0) {
        pcVar2 = "POSITION";
        goto LAB_18007e387;
      }
      if (param_3 == 1) {
        *param_5 = 9;
      }
      else if (param_3 == 2) {
        *param_5 = 10;
      }
      else if (param_3 == 3) {
        *param_5 = 8;
      }
      else if (param_3 == 4) {
        *param_5 = 0xd;
        *param_7 = 1;
      }
      else {
        if (param_3 == 5) {
          pcVar2 = "COLOR";
          goto LAB_18007e387;
        }
        if (param_3 == 6) {
          pcVar2 = "COLOR";
          *param_5 = 1;
          goto LAB_18007e387;
        }
        if (param_3 != 7) {
          return;
        }
      }
    }
  }
  else if (param_3 == 9) {
    *param_5 = 2;
  }
  else if (param_3 == 10) {
    *param_5 = 3;
  }
  else if (param_3 == 0xb) {
    *param_5 = 4;
  }
  else if (param_3 == 0xc) {
    *param_5 = 5;
  }
  else if (param_3 == 0xd) {
    *param_5 = 6;
  }
  else if (param_3 == 0xe) {
    *param_5 = 7;
  }
  else {
    if (param_3 != 0xf) {
      if (param_3 != 0x11) {
        return;
      }
      pcVar2 = "NFACT";
      *param_7 = 7;
      goto LAB_18007e387;
    }
    *param_5 = 0xb;
  }
  pcVar2 = "TEXCOORD";
LAB_18007e387:
  *param_4 = pcVar2;
  return;
}

