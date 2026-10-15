/*
 * FUN_18003b240 at 18003b240
 * undefined __cdecl FUN_18003b240(int param_1, undefined2 param_2, undefined2 param_3, ushort param_4, undefined2 param_5, ushort param_6, ushort param_7, ushort param_8, undefined8 * param_9)
 * Address ranges: 18003b240-18003b343
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003b240(int param_1,undefined2 param_2,undefined2 param_3,ushort param_4,
                  undefined2 param_5,ushort param_6,ushort param_7,ushort param_8,
                  undefined8 *param_9)

{
  ushort uVar1;
  undefined8 *extraout_x10;
  undefined8 *extraout_x10_00;
  undefined8 *extraout_x10_01;
  
  *(ushort *)((longlong)param_9 + 10) = param_6 | param_7 | param_8 | 0xf0;
  *param_9 = 0;
  if (param_1 == 0) goto LAB_18003b2d0;
  if (param_1 == 1) {
LAB_18003b2cc:
    *(ushort *)((longlong)param_9 + 6) = param_4;
  }
  else {
    if (param_1 != 2) {
      if (param_1 == 3) {
        *(undefined2 *)param_9 = param_2;
        *(undefined2 *)((longlong)param_9 + 2) = param_3;
        goto LAB_18003b2d0;
      }
      if (param_1 == 4) {
        *(undefined2 *)param_9 = param_2;
        *(undefined2 *)((longlong)param_9 + 2) = param_3;
        goto LAB_18003b2cc;
      }
      if (param_1 == 5) {
        *(undefined2 *)param_9 = param_2;
        *(undefined2 *)((longlong)param_9 + 2) = param_3;
        goto LAB_18003b2f4;
      }
      if (param_1 == 6) {
        *(undefined2 *)param_9 = param_2;
        *(undefined2 *)((longlong)param_9 + 2) = param_3;
        uVar1 = FUN_18003b0a8(param_4,0x200);
        *(ushort *)((longlong)extraout_x10_01 + 4) = uVar1;
        param_9 = extraout_x10_01;
        goto LAB_18003b2d0;
      }
      if (param_1 == 7) {
        *(undefined2 *)((longlong)param_9 + 2) = param_3;
LAB_18003b2b8:
        *(undefined2 *)param_9 = param_2;
        uVar1 = FUN_18003b0a8(param_4,0x200);
        *(ushort *)((longlong)extraout_x10 + 4) = uVar1;
        param_9 = extraout_x10;
        goto LAB_18003b2cc;
      }
      if (param_1 == 8) {
        *(undefined2 *)((longlong)param_9 + 2) = param_3;
      }
      else {
        if (param_1 == 9) goto LAB_18003b2b8;
        if (param_1 != 0x10) goto LAB_18003b2d0;
      }
      *(undefined2 *)param_9 = param_2;
      uVar1 = FUN_18003b0a8(param_4,0x200);
      *(ushort *)((longlong)extraout_x10_00 + 4) = uVar1;
      param_9 = extraout_x10_00;
    }
LAB_18003b2f4:
    *(undefined2 *)((longlong)param_9 + 6) = param_5;
  }
LAB_18003b2d0:
  *(undefined2 *)((longlong)param_9 + 0xc) = param_3;
  return;
}

