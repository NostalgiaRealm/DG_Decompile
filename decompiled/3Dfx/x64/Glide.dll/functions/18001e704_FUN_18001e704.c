/*
 * FUN_18001e704 at 18001e704
 * undefined __fastcall FUN_18001e704(undefined4 * param_1, float param_2, float param_3, float param_4)
 * Address ranges: 18001e704-18001e80f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001e704(undefined4 *param_1,float param_2,float param_3,float param_4)

{
  longlong lVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  
  *(undefined8 *)(param_1 + 1) = 0;
  *param_1 = 0;
  uVar2 = 1;
  do {
    lVar1 = (ulonglong)uVar2 * 3;
    dVar4 = (double)((float)uVar2 / 255.0);
    dVar3 = FUN_1800067e0(dVar4,(double)(1.0 / param_2));
    fVar5 = 1.0;
    if ((float)dVar3 <= 1.0) {
      fVar5 = (float)dVar3;
    }
    param_1[lVar1] = fVar5;
    dVar3 = FUN_1800067e0(dVar4,(double)(1.0 / param_3));
    fVar5 = 1.0;
    if ((float)dVar3 <= 1.0) {
      fVar5 = (float)dVar3;
    }
    param_1[lVar1 + 1] = fVar5;
    dVar4 = FUN_1800067e0(dVar4,(double)(1.0 / param_4));
    uVar2 = uVar2 + 1;
    fVar5 = 1.0;
    if ((float)dVar4 <= 1.0) {
      fVar5 = (float)dVar4;
    }
    param_1[lVar1 + 2] = fVar5;
  } while (uVar2 < 0x100);
  return;
}

