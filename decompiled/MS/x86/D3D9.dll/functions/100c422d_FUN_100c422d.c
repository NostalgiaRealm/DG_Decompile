/*
 * FUN_100c422d at 100c422d
 * undefined __fastcall FUN_100c422d(uint param_1, int * param_2)
 * Address ranges: 100c422d-100c42a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100c422d(uint param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 < 0x10041) {
    if (((param_1 != 0x10040) && (param_1 != 0x40)) && (param_1 != 0x41)) {
      iVar1 = param_1 - 0x50;
LAB_100c424d:
      if (iVar1 != 0) {
        if (iVar1 != 1) {
          return;
        }
        goto LAB_100c429b;
      }
    }
  }
  else if (param_1 != 0x10050) {
    if (param_1 == 0x10051) goto LAB_100c429b;
    iVar1 = param_1 - 0x20050;
    goto LAB_100c424d;
  }
  FUN_100c3e1b(param_1);
LAB_100c429b:
  FUN_100c3d50(param_2,1);
  return;
}

