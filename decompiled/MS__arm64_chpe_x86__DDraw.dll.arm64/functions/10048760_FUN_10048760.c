/*
 * FUN_10048760 at 10048760
 * undefined FUN_10048760(void)
 * Address ranges: 10048760-10048827
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048760(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 int param_6,int param_7,int param_8)

{
  int iVar1;
  undefined8 *puVar2;
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
      if (uVar3 >> 3 != 0) {
        do {
          iVar1 = uVar5 * -0x10;
          puVar2 = (undefined8 *)(param_8 + uVar5 * 0x10);
          uVar5 = uVar5 + 1;
          auVar7 = NEON_rev64(*(undefined1 (*) [16])(param_6 + iVar1 + -0x10),2);
          puVar2[1] = auVar7._0_8_;
          *puVar2 = auVar7._8_8_;
        } while (uVar5 < uVar3 >> 3);
      }
      uVar5 = 0;
      if ((uVar3 & 7) != 0) {
        do {
          iVar4 = uVar5 * -2;
          iVar1 = uVar5 * 2;
          uVar5 = uVar5 + 1;
          *(undefined2 *)(param_8 + (uVar3 & 0xfffffff8) * 2 + iVar1) =
               *(undefined2 *)(param_6 + (uVar3 & 0xfffffff8) * -2 + iVar4 + -2);
        } while (uVar5 < (uVar3 & 7));
      }
      iVar6 = iVar6 + 1;
      param_6 = param_6 + param_7;
      param_8 = *(int *)(param_5 + 0x14) + param_8;
    } while (iVar6 < param_2[3]);
  }
  return;
}

