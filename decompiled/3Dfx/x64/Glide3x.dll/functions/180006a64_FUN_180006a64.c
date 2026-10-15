/*
 * FUN_180006a64 at 180006a64
 * bool __fastcall FUN_180006a64(longlong param_1)
 * Address ranges: 180006a64-180006b01
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180006a64(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar3 = FUN_180006c18(param_1);
    if ((char)uVar3 != '\0') {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x48))();
      if (iVar2 == 2) {
        uVar1 = *(undefined4 *)(param_1 + 0x20);
        lVar4 = FUN_180060a9c(0xd878);
        puVar5 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff0);
        puVar5[-1] = lVar4;
        puVar5 = FUN_18000b090(puVar5,uVar1);
        *(undefined8 **)(param_1 + 0x18) = puVar5;
      }
      if ((*(longlong *)(param_1 + 0x18) == 0) && (iVar2 != 2)) {
        uVar1 = *(undefined4 *)(param_1 + 0x20);
        lVar4 = FUN_180060a9c(0xd978);
        puVar5 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff0);
        puVar5[-1] = lVar4;
        puVar5 = FUN_18000f4a4(puVar5,uVar1);
        *(undefined8 **)(param_1 + 0x18) = puVar5;
      }
      FUN_180006b04(param_1);
    }
  }
  return *(longlong *)(param_1 + 0x18) != 0;
}

