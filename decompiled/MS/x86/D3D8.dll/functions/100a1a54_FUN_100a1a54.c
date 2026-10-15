/*
 * FUN_100a1a54 at 100a1a54
 * undefined __fastcall FUN_100a1a54(uint param_1, int * param_2)
 * Address ranges: 100a1a54-100a1b11
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100a1a54(uint param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 < 0x10041) {
    if (((param_1 == 0x10040) || (param_1 == 0x40)) || (param_1 == 0x41)) goto LAB_100a1ad6;
    iVar1 = param_1 - 0x50;
  }
  else {
    if (param_1 == 0x10050) goto LAB_100a1ad6;
    if (param_1 == 0x10051) goto LAB_100a1a7d;
    iVar1 = param_1 - 0x20050;
  }
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      return;
    }
LAB_100a1a7d:
    FUN_100a1785(8,0xe4,3,4,0,0,0);
    FUN_100a14fb(param_2,7);
    return;
  }
LAB_100a1ad6:
  FUN_100a1785(8,0xe4,2,4,0,0,0);
  FUN_100a14fb(param_2,4);
  return;
}

