/*
 * FUN_1800488c8 at 1800488c8
 * undefined FUN_1800488c8(void)
 * Address ranges: 1800488c8-180048967
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800488c8(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  FUN_18003feb0(lVar2,0,0,0);
  if (lVar3 == 0) {
    bVar5 = false;
    *(undefined8 *)(lVar2 + 0xf7e0) = 0;
    uVar7 = 0;
  }
  else {
    *(longlong *)(lVar2 + 0xf7e0) = lVar3;
    bVar5 = *(int *)(lVar3 + 0x60) == 0x104;
    uVar7 = (uint)bVar5;
  }
  iVar4 = *(int *)(lVar2 + 0x6f2c);
  *(uint *)(lVar2 + 0x6f2c) = uVar7;
  *(undefined1 *)(lVar2 + 0xf688) = 1;
  *(undefined1 *)(lVar2 + 0xf6c2) = 1;
  bVar6 = iVar4 == 0;
  bVar1 = !bVar6;
  if (bVar5) {
    bVar1 = bVar6;
  }
  *(byte *)(lVar2 + 0xf691) = *(byte *)(lVar2 + 0xf691) | bVar1;
  return;
}

