/*
 * FUN_18001d6a0 at 18001d6a0
 * longlong __fastcall FUN_18001d6a0(longlong * param_1, uint * param_2, undefined8 * param_3)
 * Address ranges: 18001d6a0-18001d78c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18001d6a0(longlong *param_1,uint *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)*param_2;
  uVar8 = *(uint *)(param_1 + 2);
  uVar5 = 0;
  if (uVar8 != 0) {
    uVar7 = 0;
    do {
      uVar5 = uVar8 + uVar7 >> 1;
      uVar6 = *(ulonglong *)(param_1[1] + (ulonglong)uVar5 * 0xa0);
      uVar4 = uVar5;
      if (uVar6 <= uVar9) {
        if (uVar9 <= uVar6) break;
        uVar7 = uVar5 + 1;
        uVar4 = uVar8;
        uVar5 = uVar7;
      }
      uVar8 = uVar4;
    } while (uVar8 != uVar7);
  }
  uVar6 = (ulonglong)uVar5 * 0xa0;
  if ((uVar5 == *(uint *)(param_1 + 2)) ||
     (lVar2 = param_1[1], *(ulonglong *)(uVar6 + lVar2) != uVar9)) {
    FUN_18001de68(param_1,uVar5,uVar9,param_2,param_3);
  }
  else {
    uVar3 = param_3[1];
    puVar1 = (undefined8 *)(uVar6 + 0x20 + lVar2);
    *puVar1 = *param_3;
    puVar1[1] = uVar3;
    uVar3 = param_3[3];
    puVar1 = (undefined8 *)(uVar6 + 0x30 + lVar2);
    *puVar1 = param_3[2];
    puVar1[1] = uVar3;
    uVar3 = param_3[5];
    puVar1 = (undefined8 *)(uVar6 + 0x40 + lVar2);
    *puVar1 = param_3[4];
    puVar1[1] = uVar3;
    uVar3 = param_3[7];
    puVar1 = (undefined8 *)(uVar6 + 0x50 + lVar2);
    *puVar1 = param_3[6];
    puVar1[1] = uVar3;
    uVar3 = param_3[9];
    puVar1 = (undefined8 *)(uVar6 + 0x60 + lVar2);
    *puVar1 = param_3[8];
    puVar1[1] = uVar3;
    uVar3 = param_3[0xb];
    puVar1 = (undefined8 *)(uVar6 + 0x70 + lVar2);
    *puVar1 = param_3[10];
    puVar1[1] = uVar3;
    uVar3 = param_3[0xd];
    puVar1 = (undefined8 *)(uVar6 + 0x80 + lVar2);
    *puVar1 = param_3[0xc];
    puVar1[1] = uVar3;
    uVar3 = param_3[0xf];
    puVar1 = (undefined8 *)(uVar6 + 0x90 + lVar2);
    *puVar1 = param_3[0xe];
    puVar1[1] = uVar3;
  }
  return (uVar6 | 0x10) + param_1[1];
}

