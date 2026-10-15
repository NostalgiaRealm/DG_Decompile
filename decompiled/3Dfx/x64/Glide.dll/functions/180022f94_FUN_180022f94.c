/*
 * FUN_180022f94 at 180022f94
 * undefined8 __fastcall FUN_180022f94(undefined8 param_1, uint param_2, undefined8 * param_3, undefined8 * param_4)
 * Address ranges: 180022f94-1800230ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180022f94(undefined8 param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  LPVOID pvVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  *param_3 = 0;
  *param_4 = 0;
  auVar2 = ZEXT816(4) * ZEXT416(param_2 + 4);
  uVar3 = auVar2._0_8_;
  if (auVar2._8_8_ != 0) {
    uVar3 = 0xffffffffffffffff;
  }
  pvVar4 = (LPVOID)thunk_FUN_18005db9c(uVar3);
  uVar7 = 0;
  if (pvVar4 != (LPVOID)0x0) {
    uVar9 = 2;
    uVar8 = 7;
    if (param_2 == 0x40) {
      uVar8 = 3;
    }
    uVar7 = 0;
    if (param_2 != 0) {
      do {
        uVar11 = (uint)uVar7;
        *(float *)((longlong)pvVar4 + uVar7 * 4) =
             (float)(1 << ((char)(uVar11 >> (param_2 != 0x40) + 2) + 3U & 0x1f)) /
             (float)(8 - (uVar11 & uVar8));
        uVar7 = (ulonglong)(uVar11 + 1);
      } while (uVar11 + 1 < param_2);
    }
    *(undefined4 *)((longlong)pvVar4 + (ulonglong)(param_2 + 3) * 4) = 0x5bb1a2bc;
    *(undefined4 *)((longlong)pvVar4 + (ulonglong)param_2 * 4) = 0x5bb1a2bc;
    *(undefined4 *)((longlong)pvVar4 + (ulonglong)(param_2 + 2) * 4) = 0x5bb1a2bc;
    *(undefined4 *)((longlong)pvVar4 + (ulonglong)(param_2 + 1) * 4) = 0x5bb1a2bc;
    puVar5 = (undefined4 *)thunk_FUN_18005db9c(0x40004);
    if (puVar5 != (undefined4 *)0x0) {
      iVar10 = 0;
      *puVar5 = 0;
      puVar6 = puVar5;
      do {
        fVar1 = *(float *)((longlong)pvVar4 + (ulonglong)(iVar10 + 1) * 4);
        while (fVar1 <= (float)uVar9) {
          puVar6 = (undefined4 *)(ulonglong)(iVar10 + 2);
          iVar10 = iVar10 + 1;
          fVar1 = *(float *)((longlong)pvVar4 + (longlong)puVar6 * 4);
        }
        uVar8 = uVar9 - 1;
        uVar9 = uVar9 + 1;
        puVar5[uVar8] = iVar10;
      } while (uVar9 < 0x10002);
      *param_3 = pvVar4;
      *param_4 = puVar5;
      return CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
    }
    uVar7 = FUN_18005dbc0(pvVar4);
  }
  return uVar7 & 0xffffffffffffff00;
}

