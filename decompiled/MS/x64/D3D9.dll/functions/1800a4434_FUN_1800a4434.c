/*
 * FUN_1800a4434 at 1800a4434
 * undefined __fastcall FUN_1800a4434(longlong * param_1, longlong param_2, uint param_3, undefined8 param_4, uint param_5, int param_6, int param_7)
 * Address ranges: 1800a4434-1800a46a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a4434(longlong *param_1,longlong param_2,uint param_3,undefined8 param_4,uint param_5,
                  int param_6,int param_7)

{
  uint uVar1;
  
  if (param_7 == 0) {
    if (param_6 != 1) {
      if (param_6 != 2) {
        return;
      }
      FUN_1800edbe0((uint *)(param_2 + 0x10),param_1,0x56,(ulonglong)param_5);
    }
LAB_1800a467e:
    FUN_1800edbe0((uint *)(param_2 + 0x10),param_1,0x38,(ulonglong)param_3);
  }
  else {
    if (param_7 == 1) {
      if (param_6 == 0) goto LAB_1800a467e;
      if (param_6 != 2) {
        return;
      }
      uVar1 = 0x56;
    }
    else {
      if (param_7 != 2) {
        return;
      }
      if (param_6 == 0) {
        FUN_1800edbe0((uint *)(param_2 + 0x10),param_1,0x32,(ulonglong)param_5);
      }
      else if (param_6 != 1) {
        return;
      }
      uVar1 = 0x1c;
    }
    FUN_1800edbe0((uint *)(param_2 + 0x10),param_1,uVar1,(ulonglong)param_3);
  }
  return;
}

