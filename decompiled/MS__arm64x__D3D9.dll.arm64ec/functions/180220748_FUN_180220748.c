/*
 * FUN_180220748 at 180220748
 * undefined FUN_180220748(void)
 * Address ranges: 180220748-18022081b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180220748(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  uVar5 = FUN_18021f2d0();
  auVar8 = FUN_180220598(uVar5,param_1);
  lVar6 = auVar8._0_8_;
  uVar7 = 0;
  if (lVar6 != 0) {
    if ((param_2 - 0x46U < 2) && ((*(uint *)(param_4 + 0x20) & 3) == 0)) {
      uVar1 = *(undefined4 *)(param_4 + 0x10);
      uVar3 = *(undefined4 *)(param_4 + 0x14);
      uVar2 = *(undefined4 *)(param_4 + 0x18);
      uVar4 = *(undefined4 *)(param_4 + 0x1c);
      uVar7 = thunk_FUN_180223f54(*(undefined8 *)(lVar6 + 0x30),auVar8._8_8_,param_2,param_3,param_4
                                 );
      *(undefined4 *)(param_4 + 0x18) = uVar2;
      *(undefined4 *)(param_4 + 0x1c) = uVar4;
      *(undefined4 *)(param_4 + 0x10) = uVar1;
      *(undefined4 *)(param_4 + 0x14) = uVar3;
      *(uint *)(param_4 + 0x20) = *(uint *)(param_4 + 0x20) & 0xfffffffc;
    }
    else {
      uVar7 = thunk_FUN_180223f54(*(undefined8 *)(lVar6 + 0x30),param_1,param_2,param_3,param_4);
    }
  }
  FUN_18021fa28(uVar5);
  return uVar7;
}

