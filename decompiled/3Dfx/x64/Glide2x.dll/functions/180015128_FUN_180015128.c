/*
 * FUN_180015128 at 180015128
 * bool __fastcall FUN_180015128(longlong param_1)
 * Address ranges: 180015128-180015221
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180015128(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar3 = FUN_180015328(param_1);
    if ((char)uVar3 != '\0') {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x48))();
      if (iVar2 == 2) {
        uVar1 = *(undefined4 *)(param_1 + 0x20);
        lVar4 = FUN_18005d6fc(0xcd58);
        puVar5 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff0);
        puVar5[-1] = lVar4;
        puVar5 = FUN_180018144(puVar5,uVar1);
        *(undefined8 **)(param_1 + 0x18) = puVar5;
      }
      if (*(longlong *)(param_1 + 0x18) == 0) {
        puVar5 = (undefined8 *)0x0;
        if (iVar2 != 2) {
          uVar1 = *(undefined4 *)(param_1 + 0x20);
          lVar4 = FUN_18005d6fc(0xcfc8);
          puVar5 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff0);
          puVar5[-1] = lVar4;
          puVar5 = FUN_18001c618(puVar5,uVar1);
          *(undefined8 **)(param_1 + 0x18) = puVar5;
        }
        if (puVar5 == (undefined8 *)0x0) goto LAB_18001520f;
      }
      iVar6 = 0;
      iVar2 = 0;
      if (0 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833)) {
        do {
          lVar4 = (longlong)iVar2;
          iVar2 = iVar2 + 1;
          *(int *)(*(longlong *)(param_1 + 0x18) + 0x2b8 + lVar4 * 0x4e8) = iVar6;
          *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 700 + lVar4 * 0x4e8) =
               *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x82f);
          iVar6 = iVar6 + *(int *)(*(longlong *)(param_1 + 0x30) + 0x82f);
        } while (iVar2 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833));
      }
    }
  }
LAB_18001520f:
  return *(longlong *)(param_1 + 0x18) != 0;
}

