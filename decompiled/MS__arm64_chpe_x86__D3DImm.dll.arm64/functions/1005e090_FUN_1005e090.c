/*
 * FUN_1005e090 at 1005e090
 * undefined FUN_1005e090(void)
 * Address ranges: 1005e090-1005e13f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1005e090(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar1 = param_1[2];
  uVar4 = (ulonglong)*param_2;
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar6 = 0;
    uVar5 = uVar1;
    do {
      uVar3 = uVar5 + uVar6 >> 1;
      uVar7 = *(ulonglong *)(*param_1 + uVar3 * 0xc0);
      uVar2 = uVar3;
      if (uVar7 <= uVar4) {
        if (uVar4 <= uVar7) break;
        uVar6 = uVar3 + 1;
        uVar3 = uVar6;
        uVar2 = uVar5;
      }
      uVar5 = uVar2;
    } while (uVar5 != uVar6);
  }
  if ((uVar3 == uVar1) || (*(ulonglong *)(*param_1 + uVar3 * 0xc0) != uVar4)) {
    FUN_1005e150(param_1,uVar3,uVar4,param_2);
  }
  return *param_1 + uVar3 * 0xc0 + 0xc;
}

