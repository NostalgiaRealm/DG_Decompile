/*
 * FUN_1801e07d8 at 1801e07d8
 * undefined FUN_1801e07d8(void)
 * Address ranges: 1801e07d8-1801e087b;1801e0880-1801e08a3;1801e08c4-1801e091b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801e07d8(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_1 + -0x78);
  uVar4 = 0x8876086c;
  if (*(longlong *)(lVar3 + 0xc0) != 0 && *(longlong *)(lVar3 + 0xc0) == param_2) {
    thunk_FUN_1802242d8();
    *(undefined1 *)(lVar3 + 0xed) = 1;
    if (*(longlong *)(lVar3 + 0xd0) != *(longlong *)(lVar3 + 0x28)) {
      lVar2 = *(longlong *)(param_1 + -0x78);
      if (((*(char *)(lVar2 + 0xed) != '\0') && (lVar5 = *(longlong *)(lVar2 + 0xd0), lVar5 != 0))
         && (*(char *)(lVar2 + 0xec) == '\0')) {
        if (*(int *)(lVar2 + 0xe8) == *(int *)(lVar2 + 0xd8)) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(lVar5,*(undefined8 *)(lVar2 + 0xe0),
                              (*(uint *)(lVar2 + 0xa8) >> 3) * *(int *)(lVar2 + 0x90) *
                              *(int *)(lVar2 + 0x8c));
        }
        if (*(int *)(lVar2 + 0x90) != 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(lVar5,*(undefined8 *)(lVar2 + 0xe0),
                              (uint)(*(int *)(lVar2 + 0xa8) * *(int *)(lVar2 + 0x8c)) >> 3);
        }
      }
      *(undefined1 *)(lVar2 + 0xed) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + -0x78) + 0xee) = 0;
      lVar2 = *(longlong *)(param_1 + -0x78);
      *(undefined8 *)(lVar2 + 0xd0) = 0;
      *(undefined4 *)(lVar2 + 0xd8) = 0;
    }
    iVar1 = FUN_180118100(param_1 + -0x80);
    if (-1 < iVar1) {
      thunk_FUN_180224260(*(undefined8 *)(lVar3 + 0xc0),*(undefined8 *)(lVar3 + 200));
      thunk_FUN_1802242c4(*(undefined8 *)(lVar3 + 0xc0));
      *(undefined8 *)(lVar3 + 0xc0) = 0;
      uVar4 = 0;
    }
  }
  return uVar4;
}

