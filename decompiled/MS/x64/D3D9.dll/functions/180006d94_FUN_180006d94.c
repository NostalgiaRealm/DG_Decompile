/*
 * FUN_180006d94 at 180006d94
 * undefined __fastcall FUN_180006d94(longlong param_1, char param_2)
 * Address ranges: 180006d94-180006e68
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180006d94(longlong param_1,char param_2)

{
  longlong *plVar1;
  uint uVar2;
  
  if ((param_2 != '\0') && (*(longlong *)(&DAT_000066c0 + param_1) != 0)) {
    *(undefined1 *)(*(longlong *)(&DAT_000066c0 + param_1) + 0x70) = 0;
    (**(code **)(**(longlong **)(&DAT_000066c0 + param_1) + 0x10))();
    plVar1 = *(longlong **)(param_1 + 0x28);
    *(undefined8 *)(&DAT_000066c0 + param_1) = 0;
    *(undefined8 *)(param_1 + 0x67e0) = 0;
    (**(code **)(*plVar1 + 0x168))(plVar1,0,0);
  }
  if (*(longlong *)(&DAT_000066c8 + param_1) != 0) {
    *(undefined4 *)(*(longlong *)(&DAT_000066c8 + param_1) + 0x84) = 0xffffffff;
    (**(code **)(**(longlong **)(&DAT_000066c8 + param_1) + 0x18))();
    uVar2 = *(uint *)(&DAT_000067dc + param_1);
    plVar1 = *(longlong **)(param_1 + 0x28);
    *(uint *)(param_1 + 0x67c8) = *(uint *)(param_1 + 0x67c8) & 0xfffffffe;
    *(uint *)(param_1 + 0x67d0) = *(uint *)(param_1 + 0x67d0) & 0xfffffffe;
    *(uint *)(param_1 + 0x67d4) = *(uint *)(param_1 + 0x67d4) & 0xfffffffe;
    *(uint *)(param_1 + 0x67d8) = *(uint *)(param_1 + 0x67d8) & 0xfffffffe;
    *(uint *)(&DAT_000067dc + param_1) = uVar2 & 0xfffffffe;
    *(undefined8 *)(&DAT_000066c8 + param_1) = 0;
    *(undefined4 *)(param_1 + 0x6748) = 0;
    *(undefined4 *)(param_1 + 0x6788) = 0;
    (**(code **)(*plVar1 + 0x160))(plVar1,0,0,0,0);
  }
  return;
}

