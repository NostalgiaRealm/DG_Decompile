/*
 * FUN_1002183c at 1002183c
 * undefined __fastcall FUN_1002183c(uint param_1, undefined2 param_2, undefined2 param_3, ushort param_4, ushort param_5, ushort param_6, ushort param_7, ushort param_8, undefined4 * param_9)
 * Address ranges: 1002183c-10021925
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_1002183c(uint param_1,undefined2 param_2,undefined2 param_3,ushort param_4,ushort param_5,
            ushort param_6,ushort param_7,ushort param_8,undefined4 *param_9)

{
  ushort uVar1;
  
  param_9[1] = 0;
  *param_9 = 0;
  *(ushort *)((int)param_9 + 10) = param_8 | param_6 | param_7 | 0xf0;
  if (param_1 < 7) {
    if (param_1 == 6) {
      *(undefined2 *)param_9 = param_2;
      *(undefined2 *)((int)param_9 + 2) = param_3;
      uVar1 = FUN_10021617(param_4,0x200);
      *(ushort *)(param_9 + 1) = uVar1;
    }
    else {
      uVar1 = param_4;
      if ((param_1 != 1) && (uVar1 = param_5, param_1 != 2)) {
        if (param_1 == 3) {
          *(undefined2 *)param_9 = param_2;
          *(undefined2 *)((int)param_9 + 2) = param_3;
          goto LAB_1002191e;
        }
        if (param_1 == 4) {
          *(undefined2 *)param_9 = param_2;
          *(undefined2 *)((int)param_9 + 2) = param_3;
          uVar1 = param_4;
        }
        else {
          if (param_1 != 5) goto LAB_1002191e;
          *(undefined2 *)param_9 = param_2;
          *(undefined2 *)((int)param_9 + 2) = param_3;
        }
      }
      *(ushort *)((int)param_9 + 6) = uVar1;
    }
    goto LAB_1002191e;
  }
  if (param_1 == 7) {
    *(undefined2 *)((int)param_9 + 2) = param_3;
LAB_10021903:
    *(undefined2 *)param_9 = param_2;
    uVar1 = FUN_10021617(param_4,0x200);
    *(ushort *)((int)param_9 + 6) = param_4;
    *(ushort *)(param_9 + 1) = uVar1;
  }
  else {
    if (param_1 == 8) {
      *(undefined2 *)((int)param_9 + 2) = param_3;
    }
    else {
      if (param_1 == 9) goto LAB_10021903;
      if (param_1 != 0x10) goto LAB_1002191e;
    }
    *(undefined2 *)param_9 = param_2;
    uVar1 = FUN_10021617(param_4,0x200);
    *(ushort *)(param_9 + 1) = uVar1;
    *(ushort *)((int)param_9 + 6) = param_5;
  }
LAB_1002191e:
  *(undefined2 *)(param_9 + 3) = param_3;
  return;
}

