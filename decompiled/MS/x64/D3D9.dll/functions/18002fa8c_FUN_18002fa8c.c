/*
 * FUN_18002fa8c at 18002fa8c
 * undefined8 __fastcall FUN_18002fa8c(longlong * param_1, undefined8 * param_2)
 * Address ranges: 18002fa8c-18002fb4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18002fa8c(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)uVar1;
  if (*(uint *)(param_1 + 1) == uVar1) {
    uVar8 = 0x10;
    if (uVar1 != 0) {
      uVar8 = uVar1 * 2;
    }
    uVar7 = CONCAT44(0,uVar8);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar7;
    uVar4 = SUB168(ZEXT816(0x18) * auVar3,0);
    if (SUB168(ZEXT816(0x18) * auVar3,8) != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    puVar5 = (undefined8 *)thunk_FUN_1800fbccc(uVar4);
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
    puVar6 = puVar5;
    if (uVar8 != 0) {
      do {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6 = puVar6 + 3;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    FUN_1800fbec0(puVar5,(undefined8 *)*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) * 0x18
                 );
    uVar7 = FUN_1800fbcf0((LPVOID)*param_1);
    *param_1 = (longlong)puVar5;
    *(uint *)((longlong)param_1 + 0xc) = uVar8;
  }
  uVar1 = *(uint *)(param_1 + 1);
  uVar4 = param_2[1];
  lVar2 = *param_1;
  puVar5 = (undefined8 *)(lVar2 + (ulonglong)uVar1 * 0x18);
  *puVar5 = *param_2;
  puVar5[1] = uVar4;
  *(undefined8 *)(lVar2 + 0x10 + (ulonglong)uVar1 * 0x18) = param_2[2];
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return CONCAT71((int7)(uVar7 >> 8),1);
}

