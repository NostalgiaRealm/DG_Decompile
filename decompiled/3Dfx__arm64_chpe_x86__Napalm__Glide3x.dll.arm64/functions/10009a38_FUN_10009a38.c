/*
 * FUN_10009a38 at 10009a38
 * undefined FUN_10009a38(void)
 * Address ranges: 10009a38-10009b2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10009a38(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar5 = 0x1b;
  if (param_5 == 0xff) {
    param_5 = iVar5;
  }
  bVar1 = false;
  uVar4 = FUN_1000b5c0(param_1);
  if (((uVar4 & 1) != 0) && (uVar4 = FUN_1000af10(param_1), (uVar4 & 1) != 0)) {
    iVar2 = FUN_1000cd68(param_1);
    bVar1 = iVar2 == 4;
  }
  iVar2 = 0xb;
  if (!bVar1) {
    iVar2 = 8;
  }
  bVar1 = false;
  uVar4 = FUN_1000b5c0(param_1);
  if (((uVar4 & 1) != 0) && (uVar4 = FUN_1000af10(param_1), (uVar4 & 1) != 0)) {
    iVar3 = FUN_1000cd68(param_1);
    bVar1 = iVar3 == 4;
  }
  if ((param_3 <= iVar2 && param_2 <= iVar2) && -1 < param_5) {
    if (!bVar1) {
      iVar5 = 0xf;
    }
    if ((param_5 <= iVar5) && (param_4 + 3U < 7)) {
      return 1;
    }
  }
  return 0;
}

