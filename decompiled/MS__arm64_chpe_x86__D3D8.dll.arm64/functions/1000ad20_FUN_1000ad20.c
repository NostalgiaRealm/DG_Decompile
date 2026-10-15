/*
 * FUN_1000ad20 at 1000ad20
 * undefined FUN_1000ad20(void)
 * Address ranges: 1000ad20-1000ae07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1000ad20(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,undefined4 param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar2 = FUN_100032d0(param_6);
  uVar3 = FUN_10003360(param_6);
  iVar4 = FUN_100031e0(param_6);
  if (((uVar2 - 1 & param_2) != 0 && uVar2 <= param_2) ||
     (bVar1 = true, (uVar3 - 1 & param_3) != 0 && uVar3 <= param_3)) {
    bVar1 = false;
  }
  if ((((param_2 == 0) || (param_3 == 0)) ||
      (uVar5 = FUN_100042a0(*(undefined4 *)(param_1 + 0xacc),*(undefined4 *)(param_1 + 0xb04),3,
                            param_2,param_3,1), (uVar5 & 1) == 0)) ||
     (uVar6 = 1, !bVar1 && 0 < iVar4 || param_5 < param_4)) {
    uVar6 = 0;
  }
  return uVar6;
}

