/*
 * FUN_1800c2e68 at 1800c2e68
 * bool __fastcall FUN_1800c2e68(longlong param_1, undefined8 * param_2, uint param_3)
 * Address ranges: 1800c2e68-1800c2f6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800c2e68(longlong param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 uVar8;
  bool bVar9;
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = CONCAT44(0,param_3);
  uVar4 = SUB168(ZEXT816(8) * auVar2,0);
  if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  puVar5 = (undefined8 *)thunk_FUN_1800fbccc(uVar4);
  bVar9 = false;
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x280) = puVar5;
    FUN_1800fbec0(puVar5,param_2,CONCAT44(0,param_3) * 8);
    *(uint *)(param_1 + 0x288) = param_3;
    uVar8 = 1;
    bVar9 = true;
    if (*(int *)(param_1 + 0x30) != 1) {
      puVar5 = (undefined8 *)FUN_1800fbccc(0x254);
      bVar9 = puVar5 != (undefined8 *)0x0;
      *(undefined8 **)(param_1 + 0x278) = puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        FUN_180088bd8((undefined8 *)(param_1 + 0x20),puVar5);
      }
    }
    if (*(char *)(param_1 + 0x293) == '\0') {
      uVar1 = *(uint *)(param_1 + 0x28);
      uVar6 = 0;
      while( true ) {
        uVar3 = 0;
        if ((uVar1 <= (uint)uVar6) ||
           ((*(char *)(param_1 + 0x234 + uVar6) == '\0' &&
            ((uVar3 = 1, *(char *)(param_1 + 0x39) == '\0' || (*(char *)(param_1 + 0x39) == -0x70)))
            ))) break;
        uVar6 = (ulonglong)((uint)uVar6 + 1);
      }
      uVar6 = 0;
      *(undefined1 *)(param_1 + 0x290) = uVar3;
      if (uVar1 != 0) {
        do {
          if (4 < *(byte *)(param_1 + 0x38 + (ulonglong)*(byte *)(param_1 + 0x234 + uVar6) * 8)) {
            uVar8 = 0;
            break;
          }
          uVar7 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar7;
        } while (uVar7 < uVar1);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x290) = 1;
    }
    *(undefined1 *)(param_1 + 0x291) = uVar8;
  }
  return bVar9;
}

