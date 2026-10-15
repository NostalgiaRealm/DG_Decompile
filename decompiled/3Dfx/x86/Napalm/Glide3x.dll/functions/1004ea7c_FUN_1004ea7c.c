/*
 * FUN_1004ea7c at 1004ea7c
 * undefined __fastcall FUN_1004ea7c(uint param_1, int * param_2)
 * Address ranges: 1004ea7c-1004eb37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004ea7c(uint param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 < 0x10041) {
    if (((param_1 == 0x10040) || (param_1 == 0x40)) || (param_1 == 0x41)) goto LAB_1004eafc;
    iVar1 = param_1 - 0x50;
  }
  else {
    if (param_1 == 0x10050) goto LAB_1004eafc;
    if (param_1 == 0x10051) goto LAB_1004eaa5;
    iVar1 = param_1 - 0x20050;
  }
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      return;
    }
LAB_1004eaa5:
    FUN_1004e895(8,0xe4,3,4,0,0,0);
    FUN_1004e679(param_2,7);
    return;
  }
LAB_1004eafc:
  FUN_1004e895(8,0xe4,2,4,0,0,0);
  FUN_1004e679(param_2,4);
  return;
}

