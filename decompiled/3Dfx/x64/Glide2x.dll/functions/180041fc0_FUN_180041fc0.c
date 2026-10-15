/*
 * FUN_180041fc0 at 180041fc0
 * undefined8 __fastcall FUN_180041fc0(longlong * param_1, uint param_2)
 * Address ranges: 180041fc0-18004209c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180041fc0(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong in_RAX;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar6 = *(uint *)(param_1 + 1);
  if (uVar6 <= param_2) {
    return in_RAX & 0xffffffffffffff00;
  }
  while (uVar8 = param_2 + 1, uVar8 < uVar6) {
    lVar3 = *param_1;
    lVar7 = (ulonglong)param_2 * 0xa8;
    lVar5 = (ulonglong)uVar8 * 0xa8;
    uVar4 = ((undefined8 *)(lVar5 + lVar3))[1];
    *(undefined8 *)(lVar7 + lVar3) = *(undefined8 *)(lVar5 + lVar3);
    ((undefined8 *)(lVar7 + lVar3))[1] = uVar4;
    puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar3);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(lVar7 + 0x10 + lVar3);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar3);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(lVar7 + 0x20 + lVar3);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar1 = (undefined8 *)(lVar5 + 0x30 + lVar3);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(lVar7 + 0x30 + lVar3);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar1 = (undefined8 *)(lVar5 + 0x40 + lVar3);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(lVar7 + 0x40 + lVar3);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar1 = (undefined8 *)(lVar5 + 0x50 + lVar3);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(lVar7 + 0x50 + lVar3);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar1 = (undefined8 *)(lVar5 + 0x60 + lVar3);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(lVar7 + 0x60 + lVar3);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar1 = (undefined8 *)(lVar5 + 0x70 + lVar3);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(lVar7 + 0x70 + lVar3);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar1 = (undefined8 *)(lVar5 + 0x80 + lVar3);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(lVar7 + 0x80 + lVar3);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar1 = (undefined8 *)(lVar5 + 0x90 + lVar3);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(lVar7 + 0x90 + lVar3);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    in_RAX = *(ulonglong *)(lVar5 + 0xa0 + lVar3);
    *(ulonglong *)(lVar7 + 0xa0 + lVar3) = in_RAX;
    param_2 = uVar8;
    uVar6 = *(uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = uVar6 - 1;
  return CONCAT71((int7)(in_RAX >> 8),1);
}

