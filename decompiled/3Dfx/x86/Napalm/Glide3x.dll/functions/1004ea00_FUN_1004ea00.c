/*
 * FUN_1004ea00 at 1004ea00
 * undefined __fastcall FUN_1004ea00(uint param_1, int * param_2)
 * Address ranges: 1004ea00-1004ea7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004ea00(uint param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 < 0x10041) {
    if (((param_1 != 0x10040) && (param_1 != 0x40)) && (param_1 != 0x41)) {
      iVar1 = param_1 - 0x50;
LAB_1004ea20:
      if (iVar1 != 0) {
        if (iVar1 != 1) {
          return;
        }
        goto LAB_1004ea6e;
      }
    }
  }
  else if (param_1 != 0x10050) {
    if (param_1 == 0x10051) goto LAB_1004ea6e;
    iVar1 = param_1 - 0x20050;
    goto LAB_1004ea20;
  }
  FUN_1004e7bd(param_1);
LAB_1004ea6e:
  FUN_1004e679(param_2,1);
  return;
}

