/*
 * FUN_1000ed61 at 1000ed61
 * undefined4 __stdcall FUN_1000ed61(uint param_1, undefined4 * param_2, undefined4 * param_3)
 * Address ranges: 1000ed61-1000ee92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1000ed61(uint param_1,undefined4 *param_2,undefined4 *param_3)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  uint uVar4;
  LPVOID pvVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  
  uVar4 = param_1;
  *param_2 = 0;
  *param_3 = 0;
  lVar2 = (ulonglong)(param_1 + 4) * 4;
  pvVar5 = (LPVOID)FUN_100556a3(-(int)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
  uVar8 = 0;
  if (pvVar5 != (LPVOID)0x0) {
    bVar9 = param_1 != 0x40;
    bVar10 = param_1 != 0x40;
    param_1 = 0;
    if (uVar4 != 0) {
      do {
        iVar6 = 8 - (param_1 & (uint)bVar10 * 4 + 3);
        fVar3 = (float)iVar6;
        if (iVar6 < 0) {
          fVar3 = fVar3 + 4.2949673e+09;
        }
        *(float *)((int)pvVar5 + param_1 * 4) =
             (float)(1 << ((char)(param_1 >> bVar9 + 2) + 3U & 0x1f)) / fVar3;
        param_1 = param_1 + 1;
      } while (param_1 < uVar4);
    }
    uVar8 = 2;
    *(undefined4 *)((int)pvVar5 + uVar4 * 4 + 0xc) = 0x5bb1a2bc;
    *(undefined4 *)((int)pvVar5 + uVar4 * 4 + 8) = 0x5bb1a2bc;
    *(undefined4 *)((int)pvVar5 + uVar4 * 4 + 4) = 0x5bb1a2bc;
    *(undefined4 *)((int)pvVar5 + uVar4 * 4) = 0x5bb1a2bc;
    puVar7 = (undefined4 *)FUN_100556a3(0x40004);
    if (puVar7 != (undefined4 *)0x0) {
      iVar6 = 0;
      *puVar7 = 0;
      do {
        fVar3 = (float)(int)uVar8;
        if ((int)uVar8 < 0) {
          fVar3 = fVar3 + 4.2949673e+09;
        }
        while (fVar1 = *(float *)((int)pvVar5 + iVar6 * 4 + 4), fVar1 < fVar3 != (fVar1 == fVar3)) {
          iVar6 = iVar6 + 1;
        }
        puVar7[uVar8 - 1] = iVar6;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0x10002);
      *param_2 = pvVar5;
      *param_3 = puVar7;
      return CONCAT31((int3)((uint)param_3 >> 8),1);
    }
    uVar8 = thunk_FUN_10055686(pvVar5);
  }
  return uVar8 & 0xffffff00;
}

