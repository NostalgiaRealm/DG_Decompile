/*
 * FUN_14001a058 at 14001a058
 * undefined __fastcall FUN_14001a058(undefined8 * param_1, int param_2)
 * Address ranges: 14001a058-14001a0b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14001a058(undefined8 *param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 == 0) {
    pcVar1 = "appdriven";
  }
  else if (param_2 == 1) {
    pcVar1 = "off";
  }
  else if (param_2 == 2) {
    pcVar1 = "2x";
  }
  else if (param_2 == 4) {
    pcVar1 = "4x";
  }
  else if (param_2 == 8) {
    pcVar1 = "8x";
  }
  else if (param_2 == 0x10) {
    pcVar1 = "16x";
  }
  else {
    pcVar1 = "";
  }
  FUN_140019e4c(param_1,pcVar1);
  return;
}

