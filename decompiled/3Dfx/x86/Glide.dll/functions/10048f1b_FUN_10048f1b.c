/*
 * FUN_10048f1b at 10048f1b
 * undefined __fastcall FUN_10048f1b(uint param_1, int * param_2)
 * Address ranges: 10048f1b-10048fd6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10048f1b(uint param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 < 0x10041) {
    if (((param_1 == 0x10040) || (param_1 == 0x40)) || (param_1 == 0x41)) goto LAB_10048f9b;
    iVar1 = param_1 - 0x50;
  }
  else {
    if (param_1 == 0x10050) goto LAB_10048f9b;
    if (param_1 == 0x10051) goto LAB_10048f44;
    iVar1 = param_1 - 0x20050;
  }
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      return;
    }
LAB_10048f44:
    FUN_10048d34(8,0xe4,3,4,0,0,0);
    FUN_10048b18(param_2,7);
    return;
  }
LAB_10048f9b:
  FUN_10048d34(8,0xe4,2,4,0,0,0);
  FUN_10048b18(param_2,4);
  return;
}

