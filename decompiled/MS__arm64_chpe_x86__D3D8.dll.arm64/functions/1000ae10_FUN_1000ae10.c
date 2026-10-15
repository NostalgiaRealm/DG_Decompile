/*
 * FUN_1000ae10 at 1000ae10
 * undefined FUN_1000ae10(void)
 * Address ranges: 1000ae10-1000af03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1000ae10(int param_1,uint param_2,uint param_3,int param_4,uint param_5,uint param_6,
            undefined4 param_7)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar2 = FUN_100032d0(param_7);
  uVar3 = FUN_10003360(param_7);
  iVar4 = FUN_100031e0(param_7);
  if (((uVar2 - 1 & param_2) != 0 && uVar2 <= param_2) ||
     (bVar1 = true, (uVar3 - 1 & param_3) != 0 && uVar3 <= param_3)) {
    bVar1 = false;
  }
  if ((((param_2 == 0) || (param_3 == 0)) || (param_4 == 0)) ||
     ((uVar5 = FUN_100042a0(*(undefined4 *)(param_1 + 0xacc),*(undefined4 *)(param_1 + 0xb04),3,
                            param_2,param_3,param_4), (uVar5 & 1) == 0 ||
      (uVar6 = 1, !bVar1 && 0 < iVar4 || param_6 < param_5)))) {
    uVar6 = 0;
  }
  return uVar6;
}

