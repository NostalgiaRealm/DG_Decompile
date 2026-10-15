/*
 * FUN_100581f6 at 100581f6
 * undefined __fastcall FUN_100581f6(uint param_1, int * param_2)
 * Address ranges: 100581f6-10058271
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100581f6(uint param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 < 0x10041) {
    if (((param_1 != 0x10040) && (param_1 != 0x40)) && (param_1 != 0x41)) {
      iVar1 = param_1 - 0x50;
LAB_10058216:
      if (iVar1 != 0) {
        if (iVar1 != 1) {
          return;
        }
        goto LAB_10058264;
      }
    }
  }
  else if (param_1 != 0x10050) {
    if (param_1 == 0x10051) goto LAB_10058264;
    iVar1 = param_1 - 0x20050;
    goto LAB_10058216;
  }
  FUN_10057dfe(param_1);
LAB_10058264:
  FUN_10057d33(param_2,1);
  return;
}

