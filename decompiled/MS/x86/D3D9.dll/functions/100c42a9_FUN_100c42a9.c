/*
 * FUN_100c42a9 at 100c42a9
 * undefined __fastcall FUN_100c42a9(uint param_1, int * param_2)
 * Address ranges: 100c42a9-100c4366
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100c42a9(uint param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 < 0x10041) {
    if (((param_1 == 0x10040) || (param_1 == 0x40)) || (param_1 == 0x41)) goto LAB_100c432b;
    iVar1 = param_1 - 0x50;
  }
  else {
    if (param_1 == 0x10050) goto LAB_100c432b;
    if (param_1 == 0x10051) goto LAB_100c42d2;
    iVar1 = param_1 - 0x20050;
  }
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      return;
    }
LAB_100c42d2:
    FUN_100c3fda(8,0xe4,3,4,0,0,0);
    FUN_100c3d50(param_2,7);
    return;
  }
LAB_100c432b:
  FUN_100c3fda(8,0xe4,2,4,0,0,0);
  FUN_100c3d50(param_2,4);
  return;
}

