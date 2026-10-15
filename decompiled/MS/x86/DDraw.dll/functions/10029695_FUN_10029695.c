/*
 * FUN_10029695 at 10029695
 * undefined4 __stdcall FUN_10029695(int param_1, uint * param_2)
 * Address ranges: 10029695-100296c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10029695(int param_1,uint *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int extraout_EDX;
  
  uVar1 = 0x80070057;
  if (param_2 != (uint *)0x0) {
    iVar2 = FUN_10024537(*(int *)(param_1 + 0xc));
    uVar3 = 0;
    if (iVar2 == extraout_EDX) {
      uVar3 = 0x10;
    }
    uVar1 = 0;
    *param_2 = uVar3 | *(uint *)(extraout_EDX + 0x10);
  }
  return uVar1;
}

