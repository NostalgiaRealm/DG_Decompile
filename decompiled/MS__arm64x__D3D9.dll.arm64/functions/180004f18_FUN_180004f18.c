/*
 * FUN_180004f18 at 180004f18
 * undefined FUN_180004f18(void)
 * Address ranges: 180004f18-180004fff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180004f18(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong *plVar2;
  
  if (((param_2 & 1) != 0) && (*(longlong *)(&DAT_000066c0 + param_1) != 0)) {
    *(undefined1 *)(*(longlong *)(&DAT_000066c0 + param_1) + 0x70) = 0;
    (**(code **)(**(longlong **)(&DAT_000066c0 + param_1) + 0x10))();
    plVar2 = *(longlong **)(param_1 + 0x28);
    *(undefined8 *)(&DAT_000066c0 + param_1) = 0;
    *(undefined8 *)(param_1 + 0x67e0) = 0;
    (**(code **)(*plVar2 + 0x168))(plVar2,0,0);
  }
  if (*(longlong *)(param_1 + 0x66c8) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x66c8) + 0x84) = 0xffffffff;
    (**(code **)(**(longlong **)(param_1 + 0x66c8) + 0x18))();
    *(undefined8 *)(param_1 + 0x66c8) = 0;
    *(undefined4 *)(param_1 + 0x6748) = 0;
    plVar2 = *(longlong **)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x6788) = 0;
    *(uint *)(param_1 + 0x67c8) = *(uint *)(param_1 + 0x67c8) & 0xfffffffe;
    uVar1 = *(uint *)(&DAT_000067dc + param_1);
    *(uint *)(param_1 + 0x67d0) = *(uint *)(param_1 + 0x67d0) & 0xfffffffe;
    *(uint *)(param_1 + 0x67d4) = *(uint *)(param_1 + 0x67d4) & 0xfffffffe;
    *(uint *)(param_1 + 0x67d8) = *(uint *)(param_1 + 0x67d8) & 0xfffffffe;
    *(uint *)(&DAT_000067dc + param_1) = uVar1 & 0xfffffffe;
    (**(code **)(*plVar2 + 0x160))(plVar2,0,0,0,0);
  }
  return;
}

