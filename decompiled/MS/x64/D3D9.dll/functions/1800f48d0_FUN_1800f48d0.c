/*
 * FUN_1800f48d0 at 1800f48d0
 * undefined __fastcall FUN_1800f48d0(longlong param_1, longlong * param_2)
 * Address ranges: 1800f48d0-1800f498a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f48d0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x10));
  uVar8 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((int)param_2[1] != 0) {
    do {
      iVar1 = *(int *)(param_1 + 0x1c);
      lVar2 = *param_2;
      if (*(int *)(param_1 + 0x18) == iVar1) {
        uVar6 = 0x10;
        if (iVar1 != 0) {
          uVar6 = (ulonglong)(uint)(iVar1 * 2);
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar6;
        uVar4 = SUB168(ZEXT816(8) * auVar3,0);
        if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
          uVar4 = 0xffffffffffffffff;
        }
        puVar5 = (undefined8 *)thunk_FUN_1800fbccc(uVar4);
        if (puVar5 != (undefined8 *)0x0) {
          FUN_1800fbec0(puVar5,*(undefined8 **)(param_1 + 0x10),
                        (ulonglong)*(uint *)(param_1 + 0x1c) << 3);
          FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x10));
          *(undefined8 **)(param_1 + 0x10) = puVar5;
          *(int *)(param_1 + 0x1c) = (int)uVar6;
          goto LAB_1800f4964;
        }
      }
      else {
LAB_1800f4964:
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x18) * 8) =
             *(undefined8 *)(lVar2 + uVar8 * 8);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < *(uint *)(param_2 + 1));
  }
  return;
}

