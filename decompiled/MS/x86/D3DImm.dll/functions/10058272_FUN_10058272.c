/*
 * FUN_10058272 at 10058272
 * undefined __fastcall FUN_10058272(uint param_1, int * param_2)
 * Address ranges: 10058272-1005832f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10058272(uint param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 < 0x10041) {
    if (((param_1 == 0x10040) || (param_1 == 0x40)) || (param_1 == 0x41)) goto LAB_100582f4;
    iVar1 = param_1 - 0x50;
  }
  else {
    if (param_1 == 0x10050) goto LAB_100582f4;
    if (param_1 == 0x10051) goto LAB_1005829b;
    iVar1 = param_1 - 0x20050;
  }
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      return;
    }
LAB_1005829b:
    FUN_10057fbd(8,0xe4,3,4,0,0,0);
    FUN_10057d33(param_2,7);
    return;
  }
LAB_100582f4:
  FUN_10057fbd(8,0xe4,2,4,0,0,0);
  FUN_10057d33(param_2,4);
  return;
}

