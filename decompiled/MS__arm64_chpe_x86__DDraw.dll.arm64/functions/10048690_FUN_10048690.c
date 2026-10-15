/*
 * FUN_10048690 at 10048690
 * undefined FUN_10048690(void)
 * Address ranges: 10048690-10048757
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048690(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 int param_6,int param_7,int param_8)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  
  uVar3 = param_2[2] - *param_2;
  iVar6 = param_2[1];
  if (iVar6 < param_2[3]) {
    do {
      uVar5 = 0;
      if (uVar3 >> 4 != 0) {
        do {
          iVar4 = uVar5 * -0x10;
          puVar1 = (undefined8 *)(param_8 + uVar5 * 0x10);
          uVar5 = uVar5 + 1;
          auVar7 = NEON_rev64(*(undefined1 (*) [16])(param_6 + iVar4 + -0x10),1);
          puVar1[1] = auVar7._0_8_;
          *puVar1 = auVar7._8_8_;
        } while (uVar5 < uVar3 >> 4);
      }
      uVar5 = 0;
      if ((uVar3 & 0xf) != 0) {
        do {
          iVar4 = (param_6 - (uVar3 & 0xfffffff0)) - uVar5;
          puVar2 = (undefined1 *)(uVar5 + (uVar3 & 0xfffffff0) + param_8);
          uVar5 = uVar5 + 1;
          *puVar2 = *(undefined1 *)(iVar4 + -1);
        } while (uVar5 < (uVar3 & 0xf));
      }
      iVar6 = iVar6 + 1;
      param_6 = param_6 + param_7;
      param_8 = *(int *)(param_5 + 0x14) + param_8;
    } while (iVar6 < param_2[3]);
  }
  return;
}

