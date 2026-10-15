/*
 * FUN_1004b5f7 at 1004b5f7
 * undefined __fastcall FUN_1004b5f7(uint param_1, int * param_2)
 * Address ranges: 1004b5f7-1004b672
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004b5f7(uint param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 < 0x10041) {
    if (((param_1 != 0x10040) && (param_1 != 0x40)) && (param_1 != 0x41)) {
      iVar1 = param_1 - 0x50;
LAB_1004b617:
      if (iVar1 != 0) {
        if (iVar1 != 1) {
          return;
        }
        goto LAB_1004b665;
      }
    }
  }
  else if (param_1 != 0x10050) {
    if (param_1 == 0x10051) goto LAB_1004b665;
    iVar1 = param_1 - 0x20050;
    goto LAB_1004b617;
  }
  FUN_1004b3b4(param_1);
LAB_1004b665:
  FUN_1004b270(param_2,1);
  return;
}

