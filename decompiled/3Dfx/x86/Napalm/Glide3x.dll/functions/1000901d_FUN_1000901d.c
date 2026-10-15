/*
 * FUN_1000901d at 1000901d
 * undefined4 __fastcall FUN_1000901d(int param_1)
 * Address ranges: 1000901d-1000903b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1000901d(int param_1)

{
  int iVar1;
  undefined3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xd4);
  uVar2 = (undefined3)((uint)iVar1 >> 8);
  if (((iVar1 != 5) && (iVar1 != 8)) && (iVar1 != 0xb)) {
    return CONCAT31(uVar2,iVar1 == 0xe);
  }
  return CONCAT31(uVar2,1);
}

