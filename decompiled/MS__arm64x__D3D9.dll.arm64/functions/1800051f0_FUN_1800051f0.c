/*
 * FUN_1800051f0 at 1800051f0
 * undefined FUN_1800051f0(void)
 * Address ranges: 1800051f0-1800052ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800051f0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*(longlong **)(&DAT_000066c0 + param_1) != param_2) {
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
      (&DAT_00006818)[param_1] = 1;
    }
    if (*(longlong *)(&DAT_000066c0 + param_1) != 0) {
      *(undefined1 *)(*(longlong *)(&DAT_000066c0 + param_1) + 0x70) = 0;
      (**(code **)(**(longlong **)(&DAT_000066c0 + param_1) + 0x10))();
    }
    *(longlong **)(&DAT_000066c0 + param_1) = param_2;
    if ((param_2 == (longlong *)0x0) || (param_2[0xc] == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined4 *)(param_1 + 0x67e0) = uVar2;
    if (param_2 == (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x168))(*(longlong **)(param_1 + 0x28),0,0);
      uVar1 = *(uint *)(&DAT_000067e4 + param_1) & 0xfffffffe;
    }
    else {
      *(undefined2 *)(param_2 + 0xe) = 0x101;
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x168))
                (*(longlong **)(param_1 + 0x28),param_2[0xc],
                 *(int *)((longlong)param_2 + 0x54) == 0x66);
      uVar1 = *(uint *)(&DAT_000067e4 + param_1) & 0xfffffffe;
      if (param_2[3] != 0) {
        uVar1 = *(uint *)(&DAT_000067e4 + param_1) | 1;
      }
    }
    *(uint *)(&DAT_000067e4 + param_1) = uVar1;
  }
  return 1;
}

