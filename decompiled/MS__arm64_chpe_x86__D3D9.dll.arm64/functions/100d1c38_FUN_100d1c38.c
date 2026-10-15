/*
 * FUN_100d1c38 at 100d1c38
 * undefined FUN_100d1c38(void)
 * Address ranges: 100d1c38-100d1d67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100d1c38(void)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  
  iVar5 = FUN_1012e248();
  if (iVar5 == 0) {
    return 0;
  }
  piVar1 = (int *)(iVar5 + 0x54);
  puVar2 = (uint *)(iVar5 + 0x58);
  uVar4 = *puVar2;
  if (uVar4 != 0) {
    uVar6 = 0;
    do {
      if (*(undefined ***)(*piVar1 + uVar6 * 4) == &PTR_PTR_1016f948) {
        if (uVar6 != 0xffffffff) {
          uVar7 = 1;
          goto LAB_100d1d28;
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
    iVar8 = FUN_101322b0(iVar8);
    if (iVar8 == 0) {
      uVar7 = 0;
      goto LAB_100d1d28;
    }
    FUN_101325a0(iVar8,*piVar1,((ulonglong)*puVar3 & 0x3fffffff) << 2);
    FUN_101322d0(*piVar1);
    *piVar1 = iVar8;
    *puVar3 = uVar4;
  }
  *(undefined ***)(*piVar1 + *puVar2 * 4) = &PTR_PTR_1016f948;
  *puVar2 = *puVar2 + 1;
  uVar7 = 1;
LAB_100d1d28:
  FUN_1012ec50(iVar5);
  return uVar7;
}

