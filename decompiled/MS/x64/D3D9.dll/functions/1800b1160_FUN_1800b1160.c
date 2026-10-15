/*
 * FUN_1800b1160 at 1800b1160
 * undefined8 __fastcall FUN_1800b1160(longlong param_1, uint param_2, longlong * param_3)
 * Address ranges: 1800b1160-1800b1271
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800b1160(longlong param_1,uint param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0x8876086c;
  if ((param_2 != 0) || (param_3 != (longlong *)0x0)) {
    if (param_3 != (longlong *)0x0) {
      if ((*(byte *)(param_3 + 10) & 1) == 0) {
        return 0x8876086c;
      }
      if (*(int *)((longlong)param_3 + 0x54) != 0) {
        if (*(int *)((longlong)param_3 + 0x54) != 2) {
          return 0x8876086c;
        }
        if (*(int *)(param_1 + 0xe68) != 3) {
          return 0x8876086c;
        }
      }
      if (param_3[5] != param_1) {
        return 0x8876086c;
      }
      (**(code **)(*param_3 + 0x30))(param_3);
      if ((longlong *)param_3[6] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_3[6] + 8))();
      }
    }
    plVar3 = *(longlong **)(param_1 + 0x30 + (ulonglong)param_2 * 8);
    if (plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)plVar3[6];
      (**(code **)(*plVar3 + 0x38))();
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    if (param_2 == 0) {
      lVar5 = param_3[1];
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar5 + 0x8c);
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(lVar5 + 0x90);
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
      *(undefined1 *)(param_1 + 0xc50b) = 1;
      uVar1 = *(undefined4 *)(param_3[1] + 0x8c);
      uVar2 = *(undefined4 *)(param_3[1] + 0x90);
      *(undefined8 *)(param_1 + 0x6f68) = 0;
      *(undefined4 *)(param_1 + 0x6f70) = uVar1;
      *(undefined4 *)(param_1 + 0x6f74) = uVar2;
      *(undefined1 *)(param_1 + 0xc50c) = 1;
    }
    *(longlong **)(param_1 + 0x30 + (ulonglong)param_2 * 8) = param_3;
    uVar6 = 0;
    *(undefined1 *)(param_1 + 0xc509) = 1;
  }
  return uVar6;
}

