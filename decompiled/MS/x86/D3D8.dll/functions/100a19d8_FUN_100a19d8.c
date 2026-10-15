/*
 * FUN_100a19d8 at 100a19d8
 * undefined __fastcall FUN_100a19d8(uint param_1, int * param_2)
 * Address ranges: 100a19d8-100a1a53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100a19d8(uint param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 < 0x10041) {
    if (((param_1 != 0x10040) && (param_1 != 0x40)) && (param_1 != 0x41)) {
      iVar1 = param_1 - 0x50;
LAB_100a19f8:
      if (iVar1 != 0) {
        if (iVar1 != 1) {
          return;
        }
        goto LAB_100a1a46;
      }
    }
  }
  else if (param_1 != 0x10050) {
    if (param_1 == 0x10051) goto LAB_100a1a46;
    iVar1 = param_1 - 0x20050;
    goto LAB_100a19f8;
  }
  FUN_100a15c6(param_1);
LAB_100a1a46:
  FUN_100a14fb(param_2,1);
  return;
}

