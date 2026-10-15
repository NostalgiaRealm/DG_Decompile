/*
 * FUN_10045480 at 10045480
 * undefined FUN_10045480(void)
 * Address ranges: 10045480-100455bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10045480(int param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  iVar4 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar4 == 0) {
    FUN_10001c10(0);
  }
  uVar8 = 0x80070057;
  iVar4 = FUN_10091750(param_2,&DAT_100c2980,0x10);
  if (iVar4 != 0) {
    puVar1 = (uint *)(param_1 + 0x24);
    uVar6 = *puVar1;
    uVar8 = 0x887600ff;
    if (uVar6 != 0) {
      iVar4 = *(int *)(param_1 + 0x20);
      uVar7 = 0;
      do {
        iVar2 = iVar4 + uVar7 * 0x20;
        iVar5 = FUN_10091750(iVar2,param_2,0x10);
        if (iVar5 == 0) {
          FUN_100459d0(iVar2);
          uVar6 = *puVar1;
          if (uVar7 < uVar6) {
            uVar7 = uVar7 + 1;
            if (uVar7 < uVar6) {
              do {
                puVar3 = (undefined8 *)(*(int *)(param_1 + 0x20) + uVar7 * 0x20);
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
          uVar8 = 0;
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar6);
    }
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar8;
}

