/*
 * FUN_10040968 at 10040968
 * undefined FUN_10040968(void)
 * Address ranges: 10040968-10040a97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10040968(void)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  
  iVar5 = FUN_1008cfc8();
  if (iVar5 == 0) {
    return 0;
  }
  piVar1 = (int *)(iVar5 + 0x54);
  puVar2 = (uint *)(iVar5 + 0x58);
  uVar4 = *puVar2;
  if (uVar4 != 0) {
    uVar6 = 0;
    do {
      if (*(undefined ***)(*piVar1 + uVar6 * 4) == &PTR_PTR_100bd0d0) {
        if (uVar6 != 0xffffffff) {
          uVar7 = 1;
          goto LAB_10040a58;
        }
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  puVar3 = (uint *)(iVar5 + 0x5c);
  uVar6 = *puVar3;
  if (uVar4 == uVar6) {
    uVar4 = uVar6 << 1;
    if (uVar6 == 0) {
      uVar4 = 0x10;
    }
    iVar8 = uVar4 * 4;
    if (uVar4 >> 0x1e != 0) {
      iVar8 = -1;
    }
    iVar8 = FUN_100914b0(iVar8);
    if (iVar8 == 0) {
      uVar7 = 0;
      goto LAB_10040a58;
    }
    FUN_100917a0(iVar8,*piVar1,((ulonglong)*puVar3 & 0x3fffffff) << 2);
    FUN_100914d0(*piVar1);
    *piVar1 = iVar8;
    *puVar3 = uVar4;
  }
  *(undefined ***)(*piVar1 + *puVar2 * 4) = &PTR_PTR_100bd0d0;
  *puVar2 = *puVar2 + 1;
  uVar7 = 1;
LAB_10040a58:
  FUN_1008d9d0(iVar5);
  return uVar7;
}

