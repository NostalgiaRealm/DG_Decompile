/*
 * FUN_10048560 at 10048560
 * undefined FUN_10048560(void)
 * Address ranges: 10048560-10048687
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048560(undefined8 param_1,int param_2,int param_3,undefined8 *param_4,int param_5,
                 undefined8 *param_6,uint param_7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_2 + 4);
  if (iVar8 < *(int *)(param_2 + 0xc)) {
    do {
      if (param_7 < 0x100) {
        uVar6 = 0;
        puVar5 = param_4;
        puVar4 = param_6;
        if (param_7 >> 3 != 0) {
          do {
            uVar7 = *puVar5;
            uVar6 = uVar6 + 1;
            puVar5 = puVar5 + 1;
            *puVar4 = uVar7;
            puVar4 = puVar4 + 1;
          } while (uVar6 < param_7 >> 3);
        }
        if ((param_7 >> 2 & 1) != 0) {
          *(undefined4 *)puVar4 = *(undefined4 *)puVar5;
        }
        puVar1 = (undefined1 *)((param_7 & 0xfffffffc) + (int)param_4);
        puVar2 = (undefined1 *)((param_7 & 0xfffffffc) + (int)param_6);
        uVar6 = 0;
        if ((param_7 & 3) != 0) {
          do {
            uVar3 = *puVar1;
            uVar6 = uVar6 + 1;
            puVar1 = puVar1 + 1;
            *puVar2 = uVar3;
            puVar2 = puVar2 + 1;
          } while (uVar6 < (param_7 & 3));
        }
      }
      else {
        FUN_100917a0(param_6,param_4,param_7);
      }
      iVar8 = iVar8 + 1;
      param_4 = (undefined8 *)((int)param_4 + param_5);
      param_6 = (undefined8 *)(*(int *)(param_3 + 0x14) + (int)param_6);
    } while (iVar8 < *(int *)(param_2 + 0xc));
  }
  return;
}

