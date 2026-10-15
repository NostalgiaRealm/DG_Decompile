/*
 * FUN_180001390 at 180001390
 * byte __fastcall FUN_180001390(longlong param_1)
 * Address ranges: 180001390-18000150a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_180001390(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  byte bVar10;
  ulonglong uVar11;
  uint uVar12;
  
  plVar2 = DAT_180111f20;
  uVar9 = -(ulonglong)(param_1 != 0) & param_1 + 0x6820U;
  uVar5 = (**(code **)(*DAT_180111f20 + 0x50))(DAT_180111f20,&DAT_1800fd580);
  uVar12 = 0;
  while( true ) {
    if (uVar5 <= uVar12) {
      uVar11 = 0;
      bVar10 = 1;
      while( true ) {
        if (*(uint *)(param_1 + 0x6830) <= (uint)uVar11) {
          return bVar10;
        }
        puVar8 = *(undefined8 **)(*(longlong *)(param_1 + 0x6828) + uVar11 * 8);
        bVar4 = (**(code **)*puVar8)(puVar8,uVar9);
        bVar10 = bVar10 & bVar4;
        if (bVar10 == 0) break;
        uVar11 = (ulonglong)((uint)uVar11 + 1);
      }
      while ((int)uVar11 != 0) {
        uVar11 = (ulonglong)((int)uVar11 - 1);
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x6828) + uVar11 * 8);
        (**(code **)(*plVar2 + 8))(plVar2,uVar9);
      }
      FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x6828));
      *(undefined8 *)(param_1 + 0x6828) = 0;
      *(undefined8 *)(param_1 + 0x6830) = 0;
      return 0;
    }
    lVar6 = (**(code **)(*plVar2 + 0x58))(plVar2,&DAT_1800fd580,uVar12);
    if (lVar6 == 0) break;
    iVar1 = *(int *)(param_1 + 0x6834);
    if (*(int *)(param_1 + 0x6830) == iVar1) {
      uVar11 = 0x10;
      if (iVar1 != 0) {
        uVar11 = (ulonglong)(uint)(iVar1 * 2);
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar11;
      uVar7 = SUB168(ZEXT816(8) * auVar3,0);
      if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
        uVar7 = 0xffffffffffffffff;
      }
      puVar8 = (undefined8 *)thunk_FUN_1800fbccc(uVar7);
      if (puVar8 == (undefined8 *)0x0) {
        return 0;
      }
      FUN_1800fbec0(puVar8,*(undefined8 **)(param_1 + 0x6828),
                    (ulonglong)*(uint *)(param_1 + 0x6834) << 3);
      FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x6828));
      *(undefined8 **)(param_1 + 0x6828) = puVar8;
      *(int *)(param_1 + 0x6834) = (int)uVar11;
    }
    *(longlong *)(*(longlong *)(param_1 + 0x6828) + (ulonglong)*(uint *)(param_1 + 0x6830) * 8) =
         lVar6;
    *(int *)(param_1 + 0x6830) = *(int *)(param_1 + 0x6830) + 1;
    uVar12 = uVar12 + 1;
  }
  return 0;
}

