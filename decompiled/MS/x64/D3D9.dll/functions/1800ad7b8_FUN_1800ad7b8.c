/*
 * FUN_1800ad7b8 at 1800ad7b8
 * undefined __fastcall FUN_1800ad7b8(undefined8 * param_1)
 * Address ranges: 1800ad7b8-1800ad874
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ad7b8(undefined8 *param_1)

{
  longlong *plVar1;
  LPVOID pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar4 = DAT_180111f0c;
  *param_1 = &PTR_FUN_180103fd8;
  uVar6 = 0;
  param_1[0x11] = &PTR_LAB_1800fd890;
  param_1[0x14] = &PTR_LAB_180103f28;
  pvVar2 = DAT_180111f10;
  uVar3 = DAT_180111f0c;
  if (uVar4 != 0) {
    do {
      plVar1 = (longlong *)((longlong)pvVar2 + uVar6 * 8);
      iVar5 = (int)uVar6;
      if ((undefined8 *)*plVar1 == param_1) {
        uVar4 = uVar4 - 1;
        if (uVar4 - iVar5 != 0) {
          FUN_1800fbec0(plVar1,(undefined8 *)((longlong)pvVar2 + (ulonglong)(iVar5 + 1) * 8),
                        (ulonglong)(uVar4 - iVar5) << 3);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
      uVar3 = uVar4;
    } while (iVar5 + 1U < uVar4);
  }
  DAT_180111f0c = uVar3;
  FUN_1800020f0();
  if (DAT_180111f0c == 0) {
    FUN_1800fbcf0(DAT_180111f10);
    DAT_180111f10 = (LPVOID)0x0;
    FUN_1800af334();
  }
  FUN_1800fbcf0((LPVOID)param_1[0x1e]);
  FUN_180001194(param_1);
  return;
}

