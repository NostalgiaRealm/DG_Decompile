/*
 * FUN_10008ccb at 10008ccb
 * undefined __fastcall FUN_10008ccb(undefined4 * param_1)
 * Address ranges: 10008ccb-10008e32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10008ccb(undefined4 *param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar2 = 1;
  do {
    fVar1 = (float)(int)uVar2;
    if ((int)uVar2 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    dVar5 = (double)(fVar1 / 255.0);
    dVar4 = dVar5;
    FUN_1002b8d0();
    fVar1 = (float)dVar4;
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
    param_1[uVar2 * 3] = fVar1;
    dVar4 = dVar5;
    FUN_1002b8d0();
    fVar1 = (float)dVar4;
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
    param_1[uVar2 * 3 + 1] = fVar1;
    FUN_1002b8d0();
    fVar1 = (float)dVar5;
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
    uVar3 = uVar2 + 1;
    param_1[uVar2 * 3 + 2] = fVar1;
    uVar2 = uVar3;
  } while (uVar3 < 0x100);
  return;
}

