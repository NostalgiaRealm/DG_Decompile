/*
 * FUN_1005796f at 1005796f
 * undefined __fastcall FUN_1005796f(uint param_1, int * param_2)
 * Address ranges: 1005796f-100579ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1005796f(uint param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 < 0x10041) {
    if (((param_1 != 0x10040) && (param_1 != 0x40)) && (param_1 != 0x41)) {
      iVar1 = param_1 - 0x50;
LAB_1005798f:
      if (iVar1 != 0) {
        if (iVar1 != 1) {
          return;
        }
        goto LAB_100579dd;
      }
    }
  }
  else if (param_1 != 0x10050) {
    if (param_1 == 0x10051) goto LAB_100579dd;
    iVar1 = param_1 - 0x20050;
    goto LAB_1005798f;
  }
  FUN_100576ba(param_1);
LAB_100579dd:
  FUN_10057663(param_2,1);
  return;
}

