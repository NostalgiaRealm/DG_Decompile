/*
 * FUN_10048b8b at 10048b8b
 * undefined __fastcall FUN_10048b8b(uint param_1, int * param_2)
 * Address ranges: 10048b8b-10048c46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10048b8b(uint param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 < 0x10041) {
    if (((param_1 == 0x10040) || (param_1 == 0x40)) || (param_1 == 0x41)) goto LAB_10048c0b;
    iVar1 = param_1 - 0x50;
  }
  else {
    if (param_1 == 0x10050) goto LAB_10048c0b;
    if (param_1 == 0x10051) goto LAB_10048bb4;
    iVar1 = param_1 - 0x20050;
  }
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      return;
    }
LAB_10048bb4:
    FUN_100489a4(8,0xe4,3,4,0,0,0);
    FUN_10048788(param_2,7);
    return;
  }
LAB_10048c0b:
  FUN_100489a4(8,0xe4,2,4,0,0,0);
  FUN_10048788(param_2,4);
  return;
}

