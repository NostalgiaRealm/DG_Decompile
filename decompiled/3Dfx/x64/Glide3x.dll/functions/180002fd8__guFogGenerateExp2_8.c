/*
 * _guFogGenerateExp2@8 at 180002fd8
 * undefined __fastcall _guFogGenerateExp2@8(longlong param_1, float param_2)
 * Address ranges: 180002fd8-1800030d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guFogGenerateExp2_8(longlong param_1,float param_2)

{
  uint uVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  
                    /* 0x2fd8  96  _guFogGenerateExp2@8
                       0x2fd8  197  guFogGenerateExp2 */
  dVar3 = FUN_1800335f0(2.0,19.0);
  fVar5 = (float)(dVar3 * 0.125) * param_2;
  dVar3 = FUN_180033850((double)-(fVar5 * fVar5));
  uVar2 = 0;
  do {
    dVar4 = FUN_1800335f0(2.0,(double)((float)((int)uVar2 >> 2) + 3.0));
    fVar5 = (float)(dVar4 / (double)(int)(8 - ((uint)uVar2 & 3))) * param_2;
    dVar4 = FUN_180033850((double)-(fVar5 * fVar5));
    *(char *)(param_1 + uVar2) = (char)(int)((255.0 - dVar4 * 255.0) / (1.0 - dVar3));
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar1;
  } while (uVar1 < 0x40);
  return;
}

