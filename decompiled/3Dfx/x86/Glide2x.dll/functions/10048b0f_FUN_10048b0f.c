/*
 * FUN_10048b0f at 10048b0f
 * undefined __fastcall FUN_10048b0f(uint param_1, int * param_2)
 * Address ranges: 10048b0f-10048b8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10048b0f(uint param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 < 0x10041) {
    if (((param_1 != 0x10040) && (param_1 != 0x40)) && (param_1 != 0x41)) {
      iVar1 = param_1 - 0x50;
LAB_10048b2f:
      if (iVar1 != 0) {
        if (iVar1 != 1) {
          return;
        }
        goto LAB_10048b7d;
      }
    }
  }
  else if (param_1 != 0x10050) {
    if (param_1 == 0x10051) goto LAB_10048b7d;
    iVar1 = param_1 - 0x20050;
    goto LAB_10048b2f;
  }
  FUN_100488cc(param_1);
LAB_10048b7d:
  FUN_10048788(param_2,1);
  return;
}

