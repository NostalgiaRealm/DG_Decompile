/*
 * FUN_180013290 at 180013290
 * undefined __cdecl FUN_180013290(longlong param_1)
 * Address ranges: 180013290-18001336b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180013290(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  HWND extraout_x1;
  HWND extraout_x1_00;
  byte bVar5;
  
  lVar3 = FUN_180007a00(*(longlong *)(param_1 + 0x30),
                        *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xa0));
  if (lVar3 != 0) {
    uVar4 = FUN_1800072f0(lVar3,extraout_x1,FUN_180007ba0);
    *(undefined8 *)(lVar3 + 0x30) = uVar4;
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x58))();
  lVar3 = FUN_180007a00(*(longlong *)(param_1 + 0x30),
                        *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xa0));
  if (lVar3 != 0) {
    FUN_1800072f0(lVar3,extraout_x1_00,*(undefined8 *)(lVar3 + 0x30));
    *(undefined8 *)(lVar3 + 0x30) = 0;
  }
  cVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8);
  if (((cVar1 == '\0') ||
      (lVar3 = FUN_180007a00(*(longlong *)(param_1 + 0x30),
                             *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xa0)), lVar3 == 0)) ||
     (*(char *)(lVar3 + 0x45) == '\0')) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  bVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))();
  FUN_180013060(param_1,bVar5,bVar2);
  *(undefined1 *)(param_1 + 0xb0) = 0;
  return;
}

