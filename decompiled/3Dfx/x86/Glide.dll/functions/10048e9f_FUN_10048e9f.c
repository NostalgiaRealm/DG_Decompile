/*
 * FUN_10048e9f at 10048e9f
 * undefined __fastcall FUN_10048e9f(uint param_1, int * param_2)
 * Address ranges: 10048e9f-10048f1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10048e9f(uint param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 < 0x10041) {
    if (((param_1 != 0x10040) && (param_1 != 0x40)) && (param_1 != 0x41)) {
      iVar1 = param_1 - 0x50;
LAB_10048ebf:
      if (iVar1 != 0) {
        if (iVar1 != 1) {
          return;
        }
        goto LAB_10048f0d;
      }
    }
  }
  else if (param_1 != 0x10050) {
    if (param_1 == 0x10051) goto LAB_10048f0d;
    iVar1 = param_1 - 0x20050;
    goto LAB_10048ebf;
  }
  FUN_10048c5c(param_1);
LAB_10048f0d:
  FUN_10048b18(param_2,1);
  return;
}

