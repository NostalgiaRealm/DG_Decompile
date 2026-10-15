/*
 * FUN_18001e810 at 18001e810
 * undefined __fastcall FUN_18001e810(longlong param_1, int param_2, int param_3, undefined8 * param_4, int param_5, int param_6)
 * Address ranges: 18001e810-18001e8ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001e810(longlong param_1,int param_2,int param_3,undefined8 *param_4,int param_5,
                  int param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_2;
  if (param_3 == 0) {
    lVar3 = lVar3 * 0x4e8 + 0x2c0;
  }
  else {
    if (param_3 != 1) {
      if (param_3 != 2) {
        return;
      }
      if (param_4 == (undefined8 *)0x0) {
        return;
      }
      FUN_18005f1b0((undefined8 *)(param_1 + (lVar3 * 0x13a + (longlong)param_5 + 0xe8) * 4),
                    (undefined8 *)((longlong)param_4 + (longlong)param_5 * 4),
                    (longlong)(param_6 - param_5) << 2);
      return;
    }
    lVar3 = lVar3 * 0x4e8 + 0x330;
  }
  puVar2 = (undefined8 *)(lVar3 + param_1);
  if (param_4 != (undefined8 *)0x0) {
    uVar1 = param_4[1];
    *puVar2 = *param_4;
    puVar2[1] = uVar1;
    uVar1 = param_4[3];
    puVar2[2] = param_4[2];
    puVar2[3] = uVar1;
    uVar1 = param_4[5];
    puVar2[4] = param_4[4];
    puVar2[5] = uVar1;
    uVar1 = param_4[7];
    puVar2[6] = param_4[6];
    puVar2[7] = uVar1;
    uVar1 = param_4[9];
    puVar2[8] = param_4[8];
    puVar2[9] = uVar1;
    uVar1 = param_4[0xb];
    puVar2[10] = param_4[10];
    puVar2[0xb] = uVar1;
    uVar1 = param_4[0xd];
    puVar2[0xc] = param_4[0xc];
    puVar2[0xd] = uVar1;
  }
  return;
}

