/*
 * FUN_10017600 at 10017600
 * undefined FUN_10017600(void)
 * Address ranges: 10017600-100176e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10017600(int *param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  puVar1 = (uint *)(param_1 + 1);
  uVar6 = *puVar1;
  if (uVar6 != 0) {
    iVar4 = *param_1;
    uVar7 = 0;
    do {
      iVar2 = iVar4 + uVar7 * 0x20;
      iVar5 = FUN_100ff610(iVar2,param_2,0x10);
      if (iVar5 == 0) {
        FUN_10001fd0(iVar2);
        uVar6 = *puVar1;
        if (uVar7 < uVar6) {
          uVar7 = uVar7 + 1;
          if (uVar7 < uVar6) {
            do {
              puVar3 = (undefined8 *)(*param_1 + uVar7 * 0x20);
              uVar7 = uVar7 + 1;
              puVar3[-3] = puVar3[1];
              puVar3[-4] = *puVar3;
              puVar3[-1] = puVar3[3];
              puVar3[-2] = puVar3[2];
              uVar6 = *puVar1;
            } while (uVar7 < uVar6);
          }
          *puVar1 = uVar6 - 1;
        }
        return 0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  return 0x88760866;
}

