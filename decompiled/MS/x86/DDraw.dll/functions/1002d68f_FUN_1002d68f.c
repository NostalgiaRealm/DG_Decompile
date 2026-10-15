/*
 * FUN_1002d68f at 1002d68f
 * undefined __stdcall FUN_1002d68f(int * param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5, int param_6, int param_7)
 * Address ranges: 1002d68f-1002d78f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002d68f(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  iVar5 = param_1[1];
  uVar3 = param_1[2] - *param_1;
  if (iVar5 < param_1[3]) {
    do {
      if (uVar3 >> 3 != 0) {
        uVar4 = 0;
        do {
          iVar2 = uVar4 * 0x10;
          iVar1 = uVar4 * -0x10;
          uVar4 = uVar4 + 1;
          auVar7 = *(undefined1 (*) [16])(param_5 + iVar1 + -0x10);
          auVar6._0_8_ = auVar7._8_8_;
          auVar6._8_4_ = auVar7._0_4_;
          auVar6._12_4_ = auVar7._4_4_;
          auVar7 = pshufhw(auVar6,auVar6,0x1b);
          auVar7 = pshuflw(auVar7,auVar7,0x1b);
          *(undefined1 (*) [16])(iVar2 + param_7) = auVar7;
        } while (uVar4 < uVar3 >> 3);
      }
      if ((uVar3 & 7) != 0) {
        uVar4 = 0;
        do {
          iVar2 = uVar4 * 2;
          iVar1 = uVar4 * -2;
          uVar4 = uVar4 + 1;
          *(undefined2 *)((uVar3 & 0xfffffff8) * 2 + param_7 + iVar2) =
               *(undefined2 *)(param_5 + (uVar3 & 0xfffffff8) * -2 + iVar1 + -2);
        } while (uVar4 < (uVar3 & 7));
      }
      param_5 = param_5 + param_6;
      param_7 = param_7 + *(int *)(param_4 + 0x14);
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[3]);
  }
  return;
}

