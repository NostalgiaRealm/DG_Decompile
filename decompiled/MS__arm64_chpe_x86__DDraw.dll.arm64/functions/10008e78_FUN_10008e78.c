/*
 * FUN_10008e78 at 10008e78
 * undefined FUN_10008e78(void)
 * Address ranges: 10008e78-10008fcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10008e78(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = (int *)(param_1 + 0x20);
  if ((*piVar1 != 0) && ((*(uint *)(param_1 + 0x34) >> 3 & 1) == 0)) {
    iVar3 = *(int *)(param_1 + 0x10);
    iVar4 = *(int *)(param_1 + 0xc4);
    FUN_100914d0(*(undefined4 *)(param_1 + 0x24));
    FUN_100914d0(*(undefined4 *)(param_1 + 0x28));
    if (iVar4 == 0) {
      (*(code *)PTR_FUN_100ba15c)(*piVar1 - (iVar3 * 0x40 + 0xfffU & 0xfffff000),0,0x8000);
    }
    else {
      (*(code *)PTR_FUN_100ba154)();
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    piVar1[0] = 0;
    piVar1[1] = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  uVar5 = 0;
  if (DAT_100be13c != 0) {
    do {
      if (*(int *)(DAT_100be138 + uVar5 * 4) == param_1) {
        if ((uVar5 != 0xffffffff) && (uVar5 < DAT_100be13c)) {
          uVar5 = uVar5 + 1;
          if (uVar5 < DAT_100be13c) {
            do {
              puVar2 = (undefined4 *)(DAT_100be138 + uVar5 * 4);
              uVar5 = uVar5 + 1;
              puVar2[-1] = *puVar2;
            } while (uVar5 < DAT_100be13c);
          }
          DAT_100be13c = DAT_100be13c - 1;
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < DAT_100be13c);
  }
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xffffffce;
  return;
}

