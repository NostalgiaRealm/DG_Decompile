/*
 * FUN_18001efb0 at 18001efb0
 * undefined __cdecl FUN_18001efb0(longlong param_1)
 * Address ranges: 18001efb0-18001f08b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001efb0(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  HWND extraout_x1;
  HWND extraout_x1_00;
  byte bVar5;
  
  lVar3 = FUN_180007800(*(longlong *)(param_1 + 0x30),
                        *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xa0));
  if (lVar3 != 0) {
    uVar4 = FUN_1800070f0(lVar3,extraout_x1,FUN_1800079a0);
    *(undefined8 *)(lVar3 + 0x30) = uVar4;
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x50))();
  lVar3 = FUN_180007800(*(longlong *)(param_1 + 0x30),
                        *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xa0));
  if (lVar3 != 0) {
    FUN_1800070f0(lVar3,extraout_x1_00,*(undefined8 *)(lVar3 + 0x30));
    *(undefined8 *)(lVar3 + 0x30) = 0;
  }
  cVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8);
  if (((cVar1 == '\0') ||
      (lVar3 = FUN_180007800(*(longlong *)(param_1 + 0x30),
                             *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xa0)), lVar3 == 0)) ||
     (*(char *)(lVar3 + 0x45) == '\0')) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  bVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))();
  FUN_18001ed80(param_1,bVar5,bVar2);
  *(undefined1 *)(param_1 + 0xd8) = 0;
  return;
}

