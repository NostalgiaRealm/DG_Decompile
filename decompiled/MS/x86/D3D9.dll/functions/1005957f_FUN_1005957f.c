/*
 * FUN_1005957f at 1005957f
 * undefined4 __stdcall FUN_1005957f(undefined4 param_1, ushort param_2, char param_3)
 * Address ranges: 1005957f-100595cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1005957f(undefined4 param_1,ushort param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  uVar4 = __aullshr(param_3 * '\x03',(uint)param_2);
  uVar1 = (uint)uVar4 & 7;
  iVar2 = 0;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
LAB_100595c8:
      iVar2 = 0;
      uVar3 = 1;
      goto LAB_100595bd;
    }
    if (uVar1 == 3) {
      uVar3 = 2;
      iVar2 = 0;
      goto LAB_100595bd;
    }
    iVar2 = 0;
    if ((uVar1 != 4) && (iVar2 = 0, uVar1 != 5)) {
      if (uVar1 == 6) goto LAB_100595c8;
      iVar2 = uVar1 - 7;
      if (iVar2 != 0) goto LAB_100595bd;
    }
  }
  uVar3 = 0;
LAB_100595bd:
  return CONCAT31((int3)((uint)iVar2 >> 8),uVar3);
}

