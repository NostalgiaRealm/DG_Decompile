/*
 * FUN_1800475d8 at 1800475d8
 * undefined __fastcall FUN_1800475d8(longlong param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 1800475d8-1800476af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800475d8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 local_3c;
  
  iVar1 = *(int *)(param_1 + 0xb2c);
  if (*(int *)(param_1 + 0xb28) == iVar1) {
    uVar7 = 0x10;
    if (iVar1 != 0) {
      uVar7 = (ulonglong)(uint)(iVar1 * 2);
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar7;
    uVar4 = SUB168(ZEXT816(0x20) * auVar3,0);
    if (SUB168(ZEXT816(0x20) * auVar3,8) != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    puVar5 = (undefined8 *)thunk_FUN_18005db9c(uVar4);
    if (puVar5 == (undefined8 *)0x0) {
      return;
    }
    FUN_18005f1b0(puVar5,*(undefined8 **)(param_1 + 0xb20),
                  (ulonglong)*(uint *)(param_1 + 0xb2c) << 5);
    FUN_18005dbc0(*(LPVOID *)(param_1 + 0xb20));
    *(undefined8 **)(param_1 + 0xb20) = puVar5;
    *(int *)(param_1 + 0xb2c) = (int)uVar7;
  }
  lVar2 = *(longlong *)(param_1 + 0xb20);
  lVar6 = (ulonglong)*(uint *)(param_1 + 0xb28) * 0x20;
  *(undefined8 *)(lVar6 + lVar2) = 0;
  *(undefined8 *)(lVar6 + 8 + lVar2) = param_2;
  *(undefined4 *)(lVar6 + 0x10 + lVar2) = param_3;
  *(undefined4 *)(lVar6 + 0x14 + lVar2) = param_4;
  *(undefined4 *)(lVar6 + 0x18 + lVar2) = param_5;
  *(undefined4 *)(lVar6 + 0x1c + lVar2) = local_3c;
  *(int *)(param_1 + 0xb28) = *(int *)(param_1 + 0xb28) + 1;
  return;
}

