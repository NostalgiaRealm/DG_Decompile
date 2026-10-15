/*
 * FUN_100dcc50 at 100dcc50
 * undefined FUN_100dcc50(void)
 * Address ranges: 100dcc50-100dcd8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100dcc50(int *param_1,uint param_2,undefined8 param_3,undefined4 *param_4)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  
  puVar1 = (uint *)(param_1 + 2);
  puVar2 = (uint *)(param_1 + 1);
  uVar6 = *puVar2;
  if (*puVar1 == uVar6) {
    iVar7 = uVar6 << 5;
    if ((uVar6 & 0x7fffffff) >> 0x1b != 0) {
      iVar7 = -1;
    }
    iVar7 = FUN_101322b0(iVar7);
    if (iVar7 != 0) {
      uVar6 = 0;
      if (*puVar2 != 0) {
        do {
          puVar3 = (undefined8 *)(*param_1 + uVar6 * 0x10);
          puVar4 = (undefined8 *)(iVar7 + uVar6 * 0x10);
          uVar6 = uVar6 + 1;
          uVar8 = *puVar3;
          puVar4[1] = puVar3[1];
          *puVar4 = uVar8;
        } while (uVar6 < *puVar2);
      }
      FUN_101322d0(*param_1);
      *param_1 = iVar7;
      *puVar2 = *puVar2 << 1;
    }
  }
  for (uVar6 = *puVar1; param_2 < uVar6; uVar6 = uVar6 - 1) {
    puVar3 = (undefined8 *)(*param_1 + uVar6 * 0x10);
    puVar3[1] = puVar3[-1];
    *puVar3 = puVar3[-2];
  }
  *(undefined8 *)(*param_1 + param_2 * 0x10) = param_3;
  *(undefined4 *)(*param_1 + param_2 * 0x10 + 8) = *param_4;
  iVar7 = *param_1;
  uVar5 = FUN_100ed800(param_1,*param_4);
  *(undefined4 *)(iVar7 + param_2 * 0x10 + 0xc) = uVar5;
  *puVar1 = *puVar1 + 1;
  return;
}

