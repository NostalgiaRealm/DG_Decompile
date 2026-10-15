/*
 * FUN_14001b330 at 14001b330
 * undefined __cdecl FUN_14001b330(undefined8 * param_1, int param_2)
 * Address ranges: 14001b330-14001b373
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14001b330(undefined8 *param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 == 0) {
    pcVar1 = "disable";
  }
  else if (param_2 == 1) {
    pcVar1 = "enable";
  }
  else if (param_2 == 2) {
    pcVar1 = "enablebreak";
  }
  else {
    pcVar1 = "";
  }
  FUN_14001b090(param_1,pcVar1);
  return;
}

