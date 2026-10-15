/*
 * FUN_180043440 at 180043440
 * undefined __fastcall FUN_180043440(longlong param_1, longlong param_2, undefined8 * param_3, uint param_4, byte param_5)
 * Address ranges: 180043440-180043523
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180043440(longlong param_1,longlong param_2,undefined8 *param_3,uint param_4,byte param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_180043390(param_1,param_2,param_3,param_4,param_5);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
    uVar1 = *(ulonglong *)(lVar2 + 0xb80);
    if (uVar1 < *(ulonglong *)(lVar2 + 0xb78)) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1500);
      uVar3 = (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x40))();
      while (uVar3 < uVar1) {
        (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x48))
                  (*(longlong **)(lVar2 + 0x18),uVar1,*(undefined8 *)(lVar2 + 0x20));
        WaitForSingleObject(*(HANDLE *)(lVar2 + 0x20),0xffffffff);
        uVar3 = (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x40))();
      }
      FUN_180043390(param_1,param_2,param_3,param_4,param_5);
    }
  }
  return;
}

