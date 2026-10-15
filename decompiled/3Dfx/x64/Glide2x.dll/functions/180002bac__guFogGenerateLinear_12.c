/*
 * _guFogGenerateLinear@12 at 180002bac
 * undefined __fastcall _guFogGenerateLinear@12(longlong param_1, float param_2, float param_3)
 * Address ranges: 180002bac-180002c4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guFogGenerateLinear_12(longlong param_1,float param_2,float param_3)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  double dVar7;
  
                    /* 0x2bac  118  _guFogGenerateLinear@12
                       0x2bac  275  guFogGenerateLinear */
  uVar5 = 0;
  uVar6 = 0xff;
  do {
    dVar7 = FUN_1800064a0(2.0,(double)((float)((int)uVar5 >> 2) + 3.0));
    iVar1 = (int)((((float)(dVar7 / (double)(int)(8 - ((uint)uVar5 & 3))) - param_2) * 255.0) /
                 (param_3 - param_2));
    iVar3 = 0;
    if (-1 < iVar1) {
      iVar3 = iVar1;
    }
    uVar2 = (undefined1)iVar3;
    if ((int)uVar6 < iVar3) {
      uVar2 = (undefined1)uVar6;
    }
    *(undefined1 *)(param_1 + uVar5) = uVar2;
    uVar4 = (uint)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
  } while (uVar4 < 0x40);
  return;
}

