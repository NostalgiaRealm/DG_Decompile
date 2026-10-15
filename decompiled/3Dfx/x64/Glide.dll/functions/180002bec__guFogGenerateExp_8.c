/*
 * _guFogGenerateExp@8 at 180002bec
 * undefined __fastcall _guFogGenerateExp@8(longlong param_1, float param_2)
 * Address ranges: 180002bec-180002cca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guFogGenerateExp_8(longlong param_1,float param_2)

{
  uint uVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  
                    /* 0x2bec  121  _guFogGenerateExp@8
                       0x2bec  281  guFogGenerateExp */
  dVar3 = FUN_1800067e0(2.0,18.0);
  dVar3 = FUN_180006700((double)((float)(dVar3 / 5.0) * -param_2));
  uVar2 = 0;
  do {
    dVar4 = FUN_1800067e0(2.0,(double)((float)((int)uVar2 >> 2) + 3.0));
    dVar4 = FUN_180006700((double)((float)(dVar4 / (double)(int)(8 - ((uint)uVar2 & 3))) * -param_2)
                         );
    *(char *)(param_1 + uVar2) = (char)(int)((255.0 - dVar4 * 255.0) / (1.0 - dVar3));
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar1;
  } while (uVar1 < 0x40);
  return;
}

