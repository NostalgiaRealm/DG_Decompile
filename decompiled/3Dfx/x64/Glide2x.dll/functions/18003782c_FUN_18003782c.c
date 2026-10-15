/*
 * FUN_18003782c at 18003782c
 * undefined __fastcall FUN_18003782c(uint param_1, undefined2 param_2, undefined2 param_3, ushort param_4, undefined2 param_5, ushort param_6, ushort param_7, ushort param_8, undefined8 * param_9)
 * Address ranges: 18003782c-180037928
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003782c(uint param_1,undefined2 param_2,undefined2 param_3,ushort param_4,
                  undefined2 param_5,ushort param_6,ushort param_7,ushort param_8,
                  undefined8 *param_9)

{
  ushort uVar1;
  
  *param_9 = 0;
  *(ushort *)((longlong)param_9 + 10) = param_8 | param_6 | param_7 | 0xf0;
  if (param_1 < 7) {
    if (param_1 == 6) {
      *(undefined2 *)param_9 = param_2;
      *(undefined2 *)((longlong)param_9 + 2) = param_3;
      uVar1 = FUN_180037750(param_4,0x200);
      *(ushort *)((longlong)param_9 + 4) = uVar1;
      goto LAB_18003791f;
    }
    if (param_1 == 1) goto LAB_18003791a;
    if (param_1 != 2) {
      if (param_1 == 3) {
        *(undefined2 *)param_9 = param_2;
        *(undefined2 *)((longlong)param_9 + 2) = param_3;
        goto LAB_18003791f;
      }
      if (param_1 == 4) {
        *(undefined2 *)param_9 = param_2;
        *(undefined2 *)((longlong)param_9 + 2) = param_3;
        goto LAB_18003791a;
      }
      if (param_1 != 5) goto LAB_18003791f;
      *(undefined2 *)param_9 = param_2;
      *(undefined2 *)((longlong)param_9 + 2) = param_3;
    }
  }
  else {
    if (param_1 == 7) {
      *(undefined2 *)((longlong)param_9 + 2) = param_3;
LAB_180037903:
      *(undefined2 *)param_9 = param_2;
      uVar1 = FUN_180037750(param_4,0x200);
      *(ushort *)((longlong)param_9 + 4) = uVar1;
LAB_18003791a:
      *(ushort *)((longlong)param_9 + 6) = param_4;
      goto LAB_18003791f;
    }
    if (param_1 == 8) {
      *(undefined2 *)((longlong)param_9 + 2) = param_3;
    }
    else {
      if (param_1 == 9) goto LAB_180037903;
      if (param_1 != 0x10) goto LAB_18003791f;
    }
    *(undefined2 *)param_9 = param_2;
    uVar1 = FUN_180037750(param_4,0x200);
    *(ushort *)((longlong)param_9 + 4) = uVar1;
  }
  *(undefined2 *)((longlong)param_9 + 6) = param_5;
LAB_18003791f:
  *(undefined2 *)((longlong)param_9 + 0xc) = param_3;
  return;
}

