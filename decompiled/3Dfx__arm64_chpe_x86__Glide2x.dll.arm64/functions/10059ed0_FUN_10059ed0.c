/*
 * FUN_10059ed0 at 10059ed0
 * undefined FUN_10059ed0(void)
 * Address ranges: 10059ed0-10059f4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10059ed0(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = param_1[2];
  if (uVar1 != 0) {
    iVar2 = *param_2;
    uVar7 = 0;
    uVar6 = uVar1;
    do {
      uVar5 = uVar6 + uVar7 >> 1;
      uVar4 = *(ulonglong *)(*param_1 + uVar5 * 0x10);
      uVar3 = uVar5;
      if (uVar4 <= (ulonglong)(longlong)iVar2) {
        if ((ulonglong)(longlong)iVar2 <= uVar4) break;
        uVar7 = uVar5 + 1;
        uVar5 = uVar7;
        uVar3 = uVar6;
      }
      uVar6 = uVar3;
    } while (uVar6 != uVar7);
    if ((uVar5 != uVar1) && (*(longlong *)(*param_1 + uVar5 * 0x10) == (longlong)iVar2)) {
      return 1;
    }
  }
  return 0;
}

