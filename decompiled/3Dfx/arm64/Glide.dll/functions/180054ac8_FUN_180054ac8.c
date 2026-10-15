/*
 * FUN_180054ac8 at 180054ac8
 * undefined8 __cdecl FUN_180054ac8(undefined8 param_1, longlong param_2)
 * Address ranges: 180054ac8-180054baf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180054ac8(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  undefined1 auStack_60 [16];
  uint local_50;
  uint local_48;
  
  *(uint *)(param_2 + 0x3c) =
       (uint)(*(longlong *)(param_2 + 0x28) == *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xda0))
  ;
  *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x28) =
       *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x1150);
  *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x20) =
       *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x12a0);
  *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x70) =
       *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x12b0);
  lVar5 = FUN_1800450c0(*(longlong *)(param_2 + 0x18) + 0x19d8,
                        (byte *)(*(longlong *)(param_2 + 0x18) + 0x18));
  FUN_18004c478(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x1508),lVar5);
  lVar5 = *(longlong *)(param_2 + 0x20);
  uVar1 = *(uint *)(lVar5 + 0x20);
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180054b50);
    (*pcVar4)();
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = (uint)(*(int *)(lVar5 + 0x18) << 1) / uVar1;
  }
  iVar2 = *(int *)(lVar5 + 0x1c);
  uVar1 = *(uint *)(lVar5 + 0x24);
  (**(code **)(**(longlong **)(param_2 + 0x28) + 0x50))(*(longlong **)(param_2 + 0x28),auStack_60);
  if (local_50 <= uVar3) {
    if (uVar1 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180054b88);
      (*pcVar4)();
    }
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = (uint)(iVar2 << 1) / uVar1;
    }
    if (local_48 <= uVar3) {
      return 1;
    }
  }
  return 0;
}

