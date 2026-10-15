/*
 * FUN_180045e94 at 180045e94
 * longlong __fastcall FUN_180045e94(longlong * param_1, uint * param_2, undefined8 * param_3)
 * Address ranges: 180045e94-180045f3d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180045e94(longlong *param_1,uint *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar11 = *(uint *)(param_1 + 2);
  uVar9 = (ulonglong)*param_2;
  uVar7 = 0;
  if (uVar11 != 0) {
    uVar10 = 0;
    do {
      uVar7 = uVar11 + uVar10 >> 1;
      uVar8 = *(ulonglong *)(param_1[1] + (ulonglong)uVar7 * 0x30);
      uVar6 = uVar7;
      if (uVar8 <= uVar9) {
        if (uVar9 <= uVar8) break;
        uVar10 = uVar7 + 1;
        uVar6 = uVar11;
        uVar7 = uVar10;
      }
      uVar11 = uVar6;
    } while (uVar11 != uVar10);
  }
  uVar8 = (ulonglong)uVar7 * 0x30;
  if ((uVar7 == *(uint *)(param_1 + 2)) ||
     (lVar2 = param_1[1], *(ulonglong *)(uVar8 + lVar2) != uVar9)) {
    FUN_180046068(param_1,uVar7,uVar9,param_2,param_3);
  }
  else {
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    puVar1 = (undefined8 *)(uVar8 + 0x10 + lVar2);
    *puVar1 = *param_3;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)(uVar8 + 0x20 + lVar2);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
  }
  return (uVar8 | 8) + param_1[1];
}

