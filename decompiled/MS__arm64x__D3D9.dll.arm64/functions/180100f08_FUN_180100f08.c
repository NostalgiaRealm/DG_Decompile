/*
 * FUN_180100f08 at 180100f08
 * undefined FUN_180100f08(void)
 * Address ranges: 180100f08-180100feb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180100f08(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  uVar5 = FUN_1800ff988();
  auVar8 = func_0x000180220598(uVar5,param_1);
  lVar6 = auVar8._0_8_;
  uVar7 = 0;
  if (lVar6 != 0) {
    if ((param_2 - 0x46U < 2) && ((*(uint *)(param_4 + 0x20) & 3) == 0)) {
      uVar1 = *(undefined4 *)(param_4 + 0x10);
      uVar3 = *(undefined4 *)(param_4 + 0x14);
      uVar2 = *(undefined4 *)(param_4 + 0x18);
      uVar4 = *(undefined4 *)(param_4 + 0x1c);
      uVar7 = (*__imp_USER32_dll_CallWindowProcW)
                        (*(undefined8 *)(lVar6 + 0x30),auVar8._8_8_,param_2,param_3,param_4);
      *(undefined4 *)(param_4 + 0x10) = uVar1;
      *(undefined4 *)(param_4 + 0x14) = uVar3;
      *(undefined4 *)(param_4 + 0x18) = uVar2;
      *(undefined4 *)(param_4 + 0x1c) = uVar4;
      *(uint *)(param_4 + 0x20) = *(uint *)(param_4 + 0x20) & 0xfffffffc;
    }
    else {
      uVar7 = (*__imp_USER32_dll_CallWindowProcW)
                        (*(undefined8 *)(lVar6 + 0x30),param_1,param_2,param_3,param_4);
    }
  }
  FUN_180100178(uVar5);
  return uVar7;
}

