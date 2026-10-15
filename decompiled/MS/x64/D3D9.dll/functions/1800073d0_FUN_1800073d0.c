/*
 * FUN_1800073d0 at 1800073d0
 * undefined8 __fastcall FUN_1800073d0(longlong param_1, longlong * param_2)
 * Address ranges: 1800073d0-1800074a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800073d0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong in_RAX;
  uint uVar3;
  
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
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined4 *)(param_1 + 0x67e0) = uVar1;
    if (param_2 == (longlong *)0x0) {
      in_RAX = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x168))
                         (*(longlong **)(param_1 + 0x28),0,0);
      *(uint *)(&DAT_000067e4 + param_1) = *(uint *)(&DAT_000067e4 + param_1) & 0xfffffffe;
    }
    else {
      *(undefined2 *)(param_2 + 0xe) = 0x101;
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x168))
                (*(longlong **)(param_1 + 0x28),param_2[0xc],
                 *(int *)((longlong)param_2 + 0x54) == 0x66);
      uVar2 = *(uint *)(&DAT_000067e4 + param_1) & 0xfffffffe;
      in_RAX = (ulonglong)uVar2;
      uVar3 = *(uint *)(&DAT_000067e4 + param_1) | 1;
      if (param_2[3] == 0) {
        uVar3 = uVar2;
      }
      *(uint *)(&DAT_000067e4 + param_1) = uVar3;
    }
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}

